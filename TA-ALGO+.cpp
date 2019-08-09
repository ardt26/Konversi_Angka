#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void satuan (int a);
void selain (long double b);

long double angka;
char lagi;

int main ()
{
	do
	{
	cout<<"====================Selamat Datang di Program Konversi Angka====================\n\n";
	cout<<"Masukkan Angka (-9.223.372.036.854.775.807 sampai 9.223.372.036.854.775.807) Tanpa Menggunakan Titik\nAngka yang anda pilih adalah ";cin>>angka;
	cout<<"\nAngka yang anda masukkan berubah menjadi\n=";
	
	if(angka<0)
	{
		if(angka<-9223372036854775807)
		{
			cout<<"Maaf, Anda telah mencapai batasan pada program ini.";
		}
		else
		{
			cout<<" Negatif";
			selain(angka);
		}
	}
	else
	{
		if (angka == 0)
			{cout<<" Nol";}
		else
			{selain(angka);}
	}
	
	cout<<"\n\nApakah anda ingin mencoba lagi (y/n) ? ";cin>>lagi;
	if (lagi=='y')
		{system("cls");}
	}while (lagi=='y');
	
	cout<<"\nTerima Kasih Sudah Menggunakan Program Kami...";
}

void satuan (int a)
{			
	if (a==1 || a==-1)			{cout<<" Satu";}
	else if (a==2 || a==-2)		{cout<<" Dua";}
	else if (a==3 || a==-3)		{cout<<" Tiga";}
	else if (a==4 || a==-4)		{cout<<" Empat";}
	else if (a==5 || a==-5)		{cout<<" Lima";}
	else if (a==6 || a==-6)		{cout<<" Enam";}
	else if (a==7 || a==-7)		{cout<<" Tujuh";}
	else if (a==8 || a==-8)		{cout<<" Delapan";}
	else if (a==9 || a==-9)		{cout<<" Sembilan";}
	else if (a==10 || a==-10)	{cout<<" Sepuluh";}
	else if (a==11 || a==-11)	{cout<<" Sebelas";}
}

void selain (long double b)
{
	if (b<12 && b>-12)
	{
		satuan(b);
	}
	
	else if ((b>11 && b<20)||(b<-11 && b>-20))
	{
		selain(fmod(b,10));
		cout<<" Belas";
	}
	
	else if ((b>=20 && b<100)||(b<=-20 && b>-100))
	{
		selain(b/10);
		cout<<" Puluh";
		selain(fmod(b,10));
	}
	
	else if ((b>=100 && b<200)||(b<=-100 && b>-200))
	{
		cout<<" Seratus";
		selain(fmod(b,100));
	}
	
	else if ((b>=200 && b<1000)||(b<=-200 && b>-1000))
	{
		selain(b/100);
		cout<<" Ratus";
		selain(fmod(b,100));
	}
	
	else if ((b>=1000 && b<2000)||(b<=-1000 && b>-2000))
	{
		cout<<" Seribu";
		selain(fmod(b,1000));
	}
	
	else if ((b>=2000 && b<1000000)||(b<=-2000 && b>-1000000))
	{
		selain(b/1000);
		cout<<" Ribu";
		selain(fmod(b,1000));
	}
	

	else if ((b>=1000000 && b<1000000000)||(b<=-1000000 && b>-1000000000))
	{
		selain(b/1000000);
		cout<<" Juta";
		selain(fmod(b,1000000));
	}
	
	else if ((b>=1000000000 && b<=1000000000000)||(b<=-1000000000 && b>-1000000000000))
	{
		selain(b/1000000000);
		cout<<" Miliar";
		selain(fmod(b,1000000000));
	}
	
	else if ((b>=1000000000000 && b<1000000000000000)||(b<=1000000000000 && b>-1000000000000000))
	{
		selain(b/1000000000000);
		cout<<" Triliun";
		selain(fmod(b,1000000000000));
	}
	
	else if ((b>=1000000000000000 && b<1000000000000000000)||(b<=-1000000000000000 && b>-1000000000000000000))
	{
		selain(b/1000000000000000);
		cout<<" Kuadriliun";
		selain(fmod(b,1000000000000000));
	}
	
	else if ((b>=1000000000000000000 && b<=9223372036854775807)||(b<=-1000000000000000000 && b>=-9223372036854775807))
	{
		selain(b/1000000000000000000);
		cout<<" Kuantiliun";
		selain(fmod(b,1000000000000000000));
	}

	else
	{
		cout<<"Maaf, Anda telah mencapai batasan pada program ini.";
	}
}
