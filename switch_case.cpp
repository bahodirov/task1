#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	switch(a) {
		case 1: cout << "1-sinf"<<endl;
				break;
		case 2: cout << "2-sinf"<<endl;
				break;
		case 3: cout << "3-sinf"<<endl;
				break;
		case 4: cout << "4-sinf"<<endl;
				break;
		case 5: cout << "5-sinf"<<endl;
				break;
		default: cout << "xatolik"<<endl;
	}

	// if (a==1) {
	// 	cout << "1-sinf"<<endl;
	// }
	// else if (a==2) {
	// 	cout << "2-sinf"<<endl;
	// }
	// else if (a==3) {
	// 	cout << "3-sinf"<<endl;
	// }
	// else if (a==4) {
	// 	cout << "4-sinf"<<endl;
	// }
	// else if (a==5) {
	// 	cout << "5-sinf"<<endl;
	// }
	// else  {
	// 	cout << "xatolik"<<endl;
	// }

	// if (a >= 1 && a <= 5) {
	// 	cout << a << "-sinf" << endl;
	// }
	// else {
	// 	cout << "xatolik";
	// }


	/*
		1 - 1-sinf
		2 - 2-sinf
		3 - 3-sinf
		4 - 4-sinf
		5 - 5-sinf
		else - xatolik
	*/

	return 0;
}