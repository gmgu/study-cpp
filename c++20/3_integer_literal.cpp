#include <iostream>

using namespace std;

int main() {
  cout << 12 << endl;  // demical-literal

  cout << 014 << endl;  // octal-literal

  cout << 0xc << endl;  // hexadecimal-literal
  cout << 0Xc << endl;  // both x and X possible
  cout << 0XC << endl;  // both a-f and A-F possible

  cout << 0b1100 << endl;  // binary-literal
  cout << 0B1100 << endl;  // binary-literal


  cout << 1048576 << endl;
  cout << 1'048'576 << endl;  // you can add ' between integer-literals
  cout << 1'0'4'8'5'7'6 << endl;  // just to show it works...

  cout << 0x100000 << endl;
  cout << 0x10'0000 << endl;

  cout << 0004000000 << endl;
  cout << 0'004'000'000 << endl;

  cout << 0b1010101010 << endl;
  cout << 0b10'10101010 << endl;

}
