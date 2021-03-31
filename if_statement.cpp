#include <iostream>
using namespace std;



int main() {
	int a;
	bool juft;
	bool toq;

	cin >> a;

	juft = a % 2 == 0;
	toq = a % 2 == 1;

	if (juft) {
		
		if (a < 10) {
			cout << "bu juft son va 10dan kichkina" << endl;
		}

		else {
			cout << "bu juft son" << endl;
		}
	}

	else if (toq) {
		cout << "bu toq son" << endl;
	}

	else {
		cout << "xatolik yuz berdi";
	}

	// if (a % 2 == 0) {
	// 	cout << "bu juft son" << endl;
	// }

	// else if (a % 2 == 1) {
	// 	cout << "bu toq son" << endl;
	// }

	// if (a < 5) {
	// 	cout << "birinchisi: " << a << endl;
	// }

	// else if (a < 10) {
	// 	cout << "ikkinchisi: " << a << endl;
	// }

	
	return 0;
}