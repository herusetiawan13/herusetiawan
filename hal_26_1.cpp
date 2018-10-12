#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int angka;
	cout<<"Masukkan Angka = "; cin>>angka;
	cout<<endl;
	
	string message;
	message = angka % 2 == 1? "Bilangan Ganjil" : "Bilangan Genap";
	cout<<message;
	
	return 0;
}
