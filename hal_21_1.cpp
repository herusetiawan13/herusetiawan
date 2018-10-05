#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	double yard, kaki, inchi, meter;
	cout<<"Masukkan satuan meter : "; cin>>meter;
	
	yard = meter / 0.9144; cout<<endl;
	kaki = meter / 0.3048; cout<<endl;
	inchi = meter / 0.0254; cout<<endl;
	
	cout<<"Hasil Konversi"<<endl;
	cout<<"Yard : "<<yard<<endl;
	cout<<"Kaki : "<<kaki<<endl;
	cout<<"Inchi : "<<inchi<<endl;
	getch();
}
