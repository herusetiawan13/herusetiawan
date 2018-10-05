#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	double TB, BBI;
	cout<<"Tinggi Badan : "; cin>>TB;
	
	BBI = TB - 100 - (0.1 * (TB - 100));
	
	cout<<"Berat Badan Ideal : "<<BBI<<" Kg"<<endl;
	
	return 0;
}
