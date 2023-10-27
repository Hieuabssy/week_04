#include<iostream>

using namespace std;

int fibo(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int k; cout << "Nhap so k: ";
	cin >> k;
	cout << "Phan tu thu " << k<<" cua say fibonacci la : " << fibo(k - 1) << endl;
	return 0;
}