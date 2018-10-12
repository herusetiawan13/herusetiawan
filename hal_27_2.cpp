#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int suhu;
	cout<<"Masukkin suhu = "; cin>>suhu;
	cout<<endl;
	
	string message;
	message = suhu >= 28? "Panas" : "Dingin";
	cout<<suhu<<"C = "<<message;
	
	return 0;
}
