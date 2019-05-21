#include <iostream.h>
#include <conio.h>

void tukarAB( int a, int &b)
{ int temp;
	temp = a;
   a = b;
   b = temp;
   cout<<" Dalam Fungsi Tukar AB \n";
   cout<<" Nilai a = "<<a<<" dan nilai b  "<<b<<endl;
   }
   int main()
   {
   	int a,b;
      cout<<"Masukkan Nilai A : ";cin>>a;
      cout<<"Masukkan Nilai B : ";cin>>b;
      cout<<"\n Nilai A Dan B Sebelum Masuk Fungsi TukarAB : \n";
      cout<<"Nilai A = "<<a<<" dan B "<<b<<endl<<endl;
      tukarAB(a,b);
      cout<<"\n Nilai A Dan B Sesudah Keluar Fungsi TukarAB : \n";
      cout<<"Nilai A = "<<a<<" Dan B "<<b<<endl<<endl;
      getch();
      return (0);}