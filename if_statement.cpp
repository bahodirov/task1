// #include <iostream>
// using namespace std;



// int main() {
// 	int a;
// 	bool juft;
// 	bool toq;

// 	cin >> a;

// 	juft = a % 2 == 0;
// 	toq = a % 2 == 1;

// 	if (juft) {
		
// 		if (a < 10) {
// 			cout << "bu juft son va 10dan kichkina" << endl;
// 		}

// 		else {
// 			cout << "bu juft son" << endl;
// 		}
// 	}

// 	else if (toq) {
// 		cout << "bu toq son" << endl;
// 	}

// 	else {
// 		cout << "xatolik yuz berdi";
// 	}

// 	// if (a % 2 == 0) {
// 	// 	cout << "bu juft son" << endl;
// 	// }

// 	// else if (a % 2 == 1) {
// 	// 	cout << "bu toq son" << endl;
// 	// }

// 	// if (a < 5) {
// 	// 	cout << "birinchisi: " << a << endl;
// 	// }

// 	// else if (a < 10) {
// 	// 	cout << "ikkinchisi: " << a << endl;
// 	// }

	
// 	return 0;
// }


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n==1) {
        cout << "one" << endl;
    }
    else if (n==2) {
        cout << "two" << endl;
    }

else if (n==3) {
        cout << "three" << endl;
    }

else if (n==4) {
        cout << "four" << endl;
    }

else if (n==5) {
        cout << "five" << endl;
    }

else if (n==6) {
        cout << "six" << endl;
    }

else if (n==7) {
        cout << "seven" << endl;
    }
else if (n==8) {
        cout << "eight" << endl;
    }
else if (n==9) {
        cout << "nine" << endl;
    }
else if (n>9) {
        cout << "Greater than 9" << endl;
    }


    return 0;
}
