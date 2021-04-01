/*
cin >> n;
n marta qator chiziladi

    *
   ***
  *****
 *******
*********


       *
      **
     ***
    ****
   *****
  ******
 *******
********

*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}



/*

*
**
*** // i = 3, j = 1, 
****
*****
******

int n;

cin << n;

1 ta *
2 ta *
3 ta *
4 ta *
5 ta *
6 ta *
7 ta *
8 ta *
9 ta *


cout << "*" << endl;




*/