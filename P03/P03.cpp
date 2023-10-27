#include<iostream>

using namespace std;

int main() {
	int a[4] = { 500,200,100,50 };
	int money;
	int count = 1;
	cout << "Nhap so tien can doi: ";
	cin >> money;
	for (int i = 0; i <= money / a[0]; i++) {
		for (int j = 0; j <= money / a[1]; j++) {
			for (int k = 0; k <= money / a[2]; k++) {
				for (int h = 0; h <= money / a[3]; h++) {
					if (money - i * 500 - j * 200 - k * 100 - 50 * h == 0) {
						cout << "#" << count << ": ";
						if (i != 0 and (j != 0 or h != 0 or k != 0))
							cout << i << " to 500k + ";
						else if(i != 0 and (j == 0 and h == 0 and k == 0) )
							cout << i << " to 500k ";
						if (j != 0 and (h != 0 or k != 0))
							cout << j << " to 200k + ";
						else if (j != 0 and (h == 0 and k == 0))
							cout << j << " to 200k ";
						if (k != 0 and (h != 0))
							cout << k << " to 100k + ";
						else if (k != 0 and (h == 0))
							cout << k << " to 100k ";
						if (h != 0)
							cout << h << " to 50k";
						cout << endl;
						count++;
					}
				}
				
			}
			
		}
		
	}
}