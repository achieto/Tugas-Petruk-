#include <iostream>
using namespace std;

 	float x,y,z,m,n,o;
    float a[3][3], b[3];
    float (*pa)[3] = a, *pb = b;
    int *angka,pilihan;
	char s;
	
void find(float *cari);   
void input(int *angka)
{
	cout << "Masukan Angka" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {	
            cout << "["<<i+1<<"]" << "["<<j+1<<"]" << " = ";
            cin >> *(*(pa +i)+j); 
            
        }
    }	
    cout << endl << "Matriks" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << *(*(pa +i)+j) << "\t";
            if (j==2)
                cout << "= x" << i+1 <<endl;
        }
    }

    cout << endl << "Masukan Angka" << endl;
    for (int i=0;i<3;i++)
    {
        cout << "x" << i+1 << " = ";
        cin >> *(pb +i);
    }

    persamaan:
    cout << endl << "Persamaan Linear" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(*(*(pa +i)+j)>0&&j!=0)
                cout << "+";
            cout << *(*(pa +i)+j);
            if(j==0)
                cout << "x";
            if(j==1)
                cout << "y";
            if(j==2)
                cout << "z = ";
        }
        cout << *(pb +i) << endl;
    }

    x = *(*(pa +1))/ **pa;
    *(pb +1) = *(pb +1) - (x * *(pb));
    for(int i=0;i<3;i++)
    {
        *(*(pa +1)+i) = *(*(pa +1)+i) - (x * *(*(pa)+i));
    }

    y = *(*(pa +2))/ **pa;
    *(pb +2) = *(pb +2) - (y * *(pb));
    for(int i=0;i<3;i++)
    {
        *(*(pa +2)+i) = *(*(pa +2)+i) - (y * *(*(pa)+i));
    }

    z = *(*(pa +2)+1)/ *(*(pa +1)+1);
    *(pb +2) = *(pb +2) - (z * *(pb +1));
    for(int i=0;i<3;i++)
    {
        *(*(pa +2)+i) = *(*(pa +2)+i) - (z * *(*(pa +1)+i));
    }

    cout << endl << "Matriks Segitiga Atas" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << *(*(pa +i)+j) << "\t";
            if (j%2 == 0 && j!=0)
                cout << "= " << *(pb +i) <<endl;
        }
    }

    m = *(pb +2) / (*(*(pa+2)) + *(*(pa+2)+1) + *(*(pa+2)+2));
    n = (*(pb +1) - (*(*(pa+1)) + *(*(pa+1)+2) * m)) / *(*(pa+1)+1);
    o = (*(pb) - (*(*(pa)+1) * n + *(*(pa)+2) * m)) / *(*pa);

    cout << endl << "Hasil" << endl;
    cout << "x = " << o << endl;
    cout << "y = " << n << endl;
    cout << "z = " << m << endl;
    find(*pa);
}
int main()
{
	input(angka);
    
    return 0;
}
void find(float *cari)
{
	
	if(*cari == s)
	{	
	system("cls");
	cout<<"Input Anda salah, Masukan Angka"<<endl;
}
	cout<<"Ingin Ulagi ? \n 1.Ya \n 2.Tidak"<<endl;
	cin>>pilihan;
	switch(pilihan)
	{
		case 1:
		system("cls");
		return input(angka);
		break;
		case 2:
		goto exit;
		break;
	}
	cari++;

    exit:
    	system("cls");
    	cout<<"okay";
}
