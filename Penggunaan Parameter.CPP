#include <iostream.h>
#include <conio.h>
#include <math.h>

int hitung (int x, int y)
{
int ls;
ls = x * y;
return (ls);
}

void main ()
{
int pilih;
int panjang, lebar, alas, tinggi, sisi;
float luas;
do
	{
   clrscr();
   cout<<"Pilihlah _________> "<<endl;
   cout<<"1. Luas Persegi Panjang \n";
   cout<<"2. Luas Segitiga \n";
   cout<<"3. Luas Bujur Sangkar \n";
   cout<<" 		SELESAI \n";
   cout<<"Masukkan Pilihan Anda : "; cin >>pilih;
   switch(pilih)
   {
   case 1 : cout<<"Masukkan Nilai Panjang : ";
   			cin>>panjang;
            cout<<"Masukkan Nilai Lebar : ";
   			cin>>lebar;
            luas =hitung(panjang,lebar);
            break;
   case 2 : cout<<"Masukkan Nilai Alas : ";
   			cin>>alas;
            cout<<"Masukkan Nilai Tinggi : ";
   			cin>>tinggi;
            luas =hitung(alas,tinggi)*0.5;
            break;
   case 3 : cout<<"Masukkan Nilai Sisi : ";
   			cin>>sisi;
            luas =hitung(sisi,sisi);
            break;
   case 4 : cout<<" Terimakasi ............... "; }
   if (pilih != 4)
   cout<<"Luasnya Adalah : "<<luas;
   getch(); }
   while (pilih !=4);
   }

