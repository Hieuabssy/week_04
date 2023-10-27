#include<iostream>
#include<math.h>
using namespace std;

int main() {
	double min, max,near;
	min = 10000000.0;
	max = -10000000.0;
	near = 10000000.0;
	double n;
	double k;
	cout << "Nhap so thuc: ";
	do {
		cin >> n;
		k = n + 123, 45;
		if (max < n) max = n;
		if (min > n) min = n;
		if (abs(k) < near) near = k-123,45;
		
	} while (n != 0);
	cout << "So lon nhat la: " << max << endl;
	cout << "So nho nhat la: " << min << endl;
	cout << "So gan voi -123,45 nhat la: " << near;
	return 0;
}