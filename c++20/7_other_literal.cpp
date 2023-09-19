#include <iostream>
#include <cassert>  //assert
#include <cstring>  //strcmp

using namespace std;

int main() {
  cout << true << " " << false << endl; // boolean literals

  char* pointer = nullptr;  // pointer literals
  cout << pointer << endl;

  // user-defined literal
  long double operator "" _w(long double);
  string operator "" _w(const char16_t*, size_t);
  unsigned operator "" _w(const char*);

  //cout << 1.2_w << endl;  // calls operator "" _w(1.2L)
  //cout << u"one"_w << endl;  // calls operator "" _w(u"one", 3)
  //cout << 12_w << endl; // calls operator "" _w("12")
  //cout <<"two"_w << endl;  // no applicable literal operator
}
