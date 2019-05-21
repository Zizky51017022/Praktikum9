#include <iostream>
#include <iomanip.h>
#include <conio.h>

double getRadius();
double square(double);

int main()
{
	const double PI = 3.14159;
   double rad;
//cout << fixed << shovpoint << setprecision(2);
cout <<"Program Ini Untuk Menghitung Luas Lingkaran. \n";
rad = getRadius();
cout<<" Luasnya Adalah : " << PI * square (rad) << endl;
getch ();
return 0;
}
double getRadius()
{
double radius;
cout <<"Masukkan Jari-Jari Lingkaran: ";
cin>>radius;
return radius;
}
double square (double number)
{
return number * number;
}