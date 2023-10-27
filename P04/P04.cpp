#include<iostream>

using namespace std;

int sum(int n) {
	int s = 0;
	while (n != 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int multiplication(int n) {
	int t = 1;
	while (n != 0) {
		t *= n % 10;
		n /= 10;
	}
	return t;
}

int main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	do {
		cin >> n;
		if (sum(n) == multiplication(n)) cout << "Tong cac chu so banh tich!" << endl;
		else if(sum(n) != multiplication(n) and n>0) cout << "Tong cac chu so khong bang tich!" << endl;
	} while (n != 0);
	return 0;
}