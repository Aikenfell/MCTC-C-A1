#include <iostream>
using namespace std;

int main()
{
	int Qua;
	int Dim;
	int Nic;
	int Pen;
	cout << "Enter number of quarters: ";
	cin >> Qua;
	cout << "Enter number of dimes: ";
	cin >> Dim;
	cout << "Enter number of nickels: ";
	cin >> Nic;
	cout << "Enter number of pennies: ";
	cin >> Pen;
    float Tot = (Qua*25)+(Dim*10)+(Nic*5)+Pen;
	cout << Qua << " quarters, " << Dim << " dimes, " << Nic << " nickels, and " << Pen << " pennies = $" << Tot/100;
	return 0;
}