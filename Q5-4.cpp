#include <iostream>
using namespace std;

int main()
{
	float feet;
	cout << "Enter number of feet: ";
	cin >> feet;
    float inch = feet*12;
    float cm = inch*2.54;
    float mete = cm/100;
    float yard = inch/36;
	cout << yard << " yards\n";
	cout << inch << " inches\n";
	cout << cm << " cm\n";
	cout << mete << " meters\n";
	return 0;
}   