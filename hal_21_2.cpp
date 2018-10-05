#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct {
	int jam;
	int menit;
	int detik;
} a, b, selisih;

int main()
{
	cout<<"Jam : "; cin>>a.jam; 
	cout<<"Menit : "; cin>>a.menit; 
	cout<<"Detik : "; cin>>a.detik;
	cout<<"Jam Pertama : "<<a.jam<<" :"<<a.menit<<" :"<<a.detik<<endl;
	cout<<endl;
	
	cout<<"Jam : "; cin>>b.jam;
	cout<<"Menit : "; cin>>b.menit; 
	cout<<"Detik : "; cin>>b.detik;
	cout<<"Jam Kedua : "<<b.jam<<" :"<<b.menit<<" :"<<b.detik<<endl;
	cout<<endl;
	
	selisih.jam = a.jam - b.jam;
	selisih.menit = a.menit - b.menit;
	selisih.detik = a.detik - b.detik;
	
	cout <<"Selisih : "<<selisih.jam<<" :"<<selisih.menit<<" :"<<selisih.detik<<endl;
	return 0;
}
