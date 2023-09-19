#include <iostream>

using namespace std;

int main() {
  cout.precision(32);
  cout << fixed << 49.625 << endl;  // double type
  cout << 49.625f << ' ' << 49.625F << endl;  // float type
  cout.unsetf(ios::fixed);
  cout << 49.625l << ' ' <<49.625L << endl;  // long double type

  cout << 49.625 << endl;  // if exponent-part is not present, exponent e is 0
  cout << 49.625e+0 << endl;  // 49.625 * 10^(+0)
  cout << 49.625e-0 << endl;  // 49.625 * 10^(-0)
  cout << 0xC.68p+0 << endl;  // binary-exponent-part is necessary for hexadecimal-floating-point-literal
  cout << 0xC.68p+0 * 4 << endl;  // 0xC.68 * 4 = 12.40625 * 4
  cout << 0xC.68p+2 << endl;      // 0xC.68 * 2^(+2)

  cout << sizeof(double) << endl;  // 8
  cout << sizeof(float) << endl;  //4
  cout << sizeof(long double) << endl;  //16
  cout << sizeof(49.625) << endl;  //8
  cout << sizeof(0xC.68p+2) << endl;  //8
  cout << sizeof(49.625L) << endl;  //16
  cout << sizeof(0xC.68p+2L) << endl;  //16
}
