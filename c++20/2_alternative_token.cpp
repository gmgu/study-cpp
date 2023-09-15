// let's use alternative tokens!

#include <iostream>
%:include <stdio.h>

using namespace std;

int main() {
  // primary tokens are &&, |, ||, ^, and so on
  // Alternative tokens are and, bitor, or, xor, and so on.

  cout << (true && false) << endl;
  cout << (true and false) << endl;

  cout << (1 | 0) << endl;
  cout << (1 bitor 0) << endl;

  cout << (true || false) << endl;
  cout << (true or false) << endl;

  cout << (1 ^ 0) << endl;
  cout << (1 xor 0) << endl;

  cout << (~1) << endl;
  cout << (compl 1) << endl;

  cout << (1 & 0) << endl;
  cout << (1 bitand 0) << endl;

  int a = 1;
  a &= 0;
  int b = 1;
  b and_eq 0;
  cout << a << " " << b << endl;

  a |= 1;
  b or_eq 1;
  cout << a << " " << b << endl;

  a ^= 0;
  b xor_eq 0;
  cout << a << " " << b << endl;

  cout << (!a) << " " << (not b) << endl;

  a != a;
  b not_eq b;
  cout << a << " " << b << endl;

  int arr1[3] = {1, 2, 3};
  int arr2<:3:> = <%4, 5, 6%>;
  for(int i = 0; i < 3; ++i) {
    cout << arr1[i] << " " << arr2[i] << endl;;
  }

  // Question: what is ##? (which is a primary token, and can be replaced by %:%: of alternative token)
}
