#include<iostream>
#include<Windows.h>
#include<math.h>
using namespace std;



int sum(int n) {
	int s = 0;
	while (n != 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int tich(int n) {
	int kt = 1;
	while (n != 0) {
		kt *= n % 10;
		n /= 10;
	}
	return kt;
}

bool sotanggiam1(int n) {
	int s = 0, dem = 0;
	int n1;
	n1 = n;
	while (n != 0) {
		s += 1;
		n /= 10;
	}
	for (int i = 1; i <= s - 1; i++) {
		if ((n1 % 10) > ((n1 / 10) % 10)) {
			dem += 1;
			n1 /= 10;
		}
	}
	if (dem == s - 1)
		return true;
	else return false;
}
bool sotanggiam2(int n) {
	int s = 0, dem = 0;
	int n1;
	n1 = n;
	while (n != 0) {
		s += 1;
		n /= 10;
	}
	for (int i = 1; i <= s - 1; i++) {
		if ((n1 % 10) < ((n1 / 10) % 10)) {
			dem += 1;
			n1 /= 10;
		}
	}
	if (dem == s - 1)
		return true;
	else return false;
}

int doixung(int n) {
	int check = 0;
	while (n != 0) {
		check = check * 10 + n % 10;
		n /= 10;
	}
	return check;
}


bool snt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return n > 1;
}

bool perfect(int n) {
	int s = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) s += i;
	}
	if (s == n) return true;
	else return false;
}

int main() {
	
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	
	if (sum(n) == tich(n)) cout << "Tong chu so cua n bang tich!" << endl;
	else cout<< "Tong chu so cua n khong bang tich!" << endl;
	cout << endl;
	
	if (sotanggiam1(n) == 1) cout << "So tang dan tu trai qua phai!" << endl;
	if (sotanggiam2(n) == 1) cout << "So giam dan tu trai qua phai!" << endl;
	if (sotanggiam1(n) != 1 and sotanggiam2(n) != 1) cout << "Khong phai so tang giam!" << endl;
	cout << endl;
	
	if (doixung(n) == n) cout << "N la so doi xung!" << endl;
	else cout << "N khong la so doi xung! " << endl;
	cout << endl;
	
	if (snt(n)) cout << "N la so nguyen to!" << endl;
	else cout << "N khong la so nguyen to!" << endl;
	cout << endl;
	
	if (perfect(n)) cout << "N la so hoan chinh! " << endl;
	else cout << "N khong la so hoan chinh!" << endl;
	return 0;
}