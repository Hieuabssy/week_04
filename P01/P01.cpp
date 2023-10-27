#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n) {
	if (n == 1 or n == 0)  return 1;
	else return n * factorial(n - 1);
}

int main() {
	float S1 = 0, S2 = 0, S3 = 0;
	int k;
	int n; 
	cout << "Hay nhap n cho tong s1: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		S1 += 1*1.0 / i;
	}
	cout << "Nhap n cho s2: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		S2 += 1.0*pow(-1,i+1)*(i + 1) / factorial(i);
	}
	cout << "Nhap n cho s3: "; cin >> n;
	cout << "Nhap k: "; cin >> k;
	S3 = factorial(n) / (factorial(k) * factorial(n - k));
	
	cout << "S1=" << S1 << endl;
	cout << "S2=" << S2 << endl;
	cout << "S3=" << S3;
	return 0;
}