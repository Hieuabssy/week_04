#include<iostream>

using namespace std;

int main() {
	double n;
	cout << "Nhap so thuc n: ";
	cin >> n;
	double epsilon = 0.0001;
	double mid;
	double left;
	double right;
	if (n >= 0) {
		left = 0;
		right = n;
		mid = n / 2;
		while ((mid - epsilon) * (mid - epsilon) * (mid - epsilon) > n or (mid+epsilon)*(mid + epsilon)*(mid + epsilon)<n) {

			
			if (mid * mid * mid > n) right = mid;
			else if (mid * mid * mid < n)  left = mid;
			mid = (left + right) / 2;
		}
	}
	if (n <0) {
		left = n;
		right = 0;
		mid = n / 2;
		while ((mid - epsilon) * (mid - epsilon) * (mid - epsilon) > n or (mid + epsilon) * (mid + epsilon) * (mid + epsilon) < n) {


			if (mid * mid * mid > n) right = mid;
			else if (mid * mid * mid < n)  left = mid;
			mid = (left + right) / 2;
		}
	}
	if (n == 0) {
		mid = 0;
	}
	cout << "Gia tri gan dung can bac 3 cua so thuc n la:  " << mid;
	return 0;
}
