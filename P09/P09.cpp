#include<iostream>

using namespace std;

int ucln(int M, int N) {
	while (N != 0) {
		int r = M % N;
		M = N;
		N = r;
		
	}
	return M;
}

int main() {
	int M, N;
	cout << "Nhap hai so M va N: ";
	cin >> M >> N;
	cout << "Uoc chung lon nhat cua hai so M va N la: " << ucln(M, N) << endl;
	return 0;
}