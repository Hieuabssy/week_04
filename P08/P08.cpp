#include<iostream>

#include<math.h>
using namespace std;

int main() {
	int a, b, c;
	double x, x1, x2;
	double delta;
	cout << "Nhap ba so a,b,c: "; 
	cin >> a >> b >> c;
	if(a>b and b>c){
		cout << "Giai bat phuong trinha X^2+bX+c<0 " << endl;
		if (a == 0) {
			x = -c * 1.0 / b;
			cout << "Tap nghiem cua bat phuong trinh la:(" << x << ";+" << char(236) << ")";
		}
		if(a>0){
			delta = (b * b - 4*a*c)*1.0;
			if (delta > 0) {
				x1 = (-b + sqrt(delta)) * 1.0 / (2 * a);
				x2 = (-b - sqrt(delta)) * 1.0 / (2 * a);
				cout << "Nghiem cua bat phuong trinh la:(" << x2 << ";" << x1 << ")";
			}
			else cout << "bat phuong trinh vo nghiem!" << endl;
		}
		if (a < 0) {
			delta= (b * b - 4 * a * c) * 1.0;
			if (delta > 0) {
				x1 = (-b + sqrt(delta)) * 1.0 / 2 * a;
				x2 = (-b - sqrt(delta)) * 1.0 / 2 * a;
				cout << "Nghiem cua bat phuong trinh la:(-" << char(236) << ";" << x1 << ")U(" << x2 << ";+" << char(236) << ")";
			}
			if (delta <= 0) cout << "Bat phuong trinh vo nghiem!";
		}


	}

	else if(a<b and b<c){
		cout << "Giai bat phuong trinh aX^2+bX+c>0 " << endl;
		if (a == 0) {
			x = -c * 1.0 / b;
			cout << "Tap nghiem cua bat phuong trinh la:(" << x << ";+" << char(236) << ")";
		}
		if (a > 0) {
			delta = (b * b - 4 * a * c) * 1.0;
			if (delta > 0) {
				x1 = (-b + sqrt(delta)) * 1.0 / (2 * a);
				x2 = (-b - sqrt(delta)) * 1.0 / (2 * a);
				cout << "Nghiem cua bat phuong trinh la:(-" << char(236) << ";" << x2 << ")U(" << x1 << ";+" << char(236) << ")";
			}
			else cout << "bat phuong trinh vo nghiem!" << endl;
		}
		if (a < 0) {
			delta = (b * b - 4 * a * c) * 1.0;
			if (delta > 0) {
				x1 = (-b + sqrt(delta)) * 1.0 / (2 * a);
				x2 = (-b - sqrt(delta)) * 1.0 / (2 * a);
				cout << "Nghiem cua bat phuong trinh la:(" << x1 << ";" << x2 << ")";
			}
			if (delta <= 0) cout << "Bat phuong trinh vo nghiem!";
		}
	}

	else{
		cout << "Giai phuong trinh bac hai aX^2+bX+c=0" << endl;
		if (a == 0 and b == 0 and c == 0) cout << "Phuong trinh nghiem dung voi moi x!";
		else if (a == 0) {
			x = -c * 1.0 / b;
			cout << "Phuong trinh co 1 nghiem la: " << x;
		}
		else if (a == 0 and b == 0 and c != 0) cout << "Phuong trinh vo nghiem!";
		else {
			delta = b * b - 4 * a * c;
			if (delta > 0) {
				x1 = (-b + sqrt(delta)) * 1.0 / (2 * a);
				x2 = (-b - sqrt(delta)) * 1.0 / (2 * a);
				cout << "Phuong trinh co hai nghiem la:x1=" << x1 << " va x2=" << x2 << endl;

			}
			if (delta < 0) cout << "Phuong trinh vo nghiem!";
			if (delta == 0) {
				x = -b*1.0 / 2 * a;
			}
		}
	}
	return 0;
}