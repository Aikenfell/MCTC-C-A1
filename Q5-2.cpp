#include <iostream>
using namespace std;

int main()
{
	int L;
	int W;
	int H;
	cout << "Enter box length, width, and height (inches): ";
	cin >> L >> W >> H;
	cout << "Box surface area = " << 2*((L*W)+(L*H)+(W*H)) << " square inches\n";
	cout << "Box volume = " << L*W*H << " cubic inches";
	return 0;
}