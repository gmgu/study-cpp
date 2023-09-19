#include <iostream>

using namespace std;

int main() {
  cout << 'a' << endl;  //ordinary character literal
  cout << (int)'a' << endl; 
  cout << hex << (int)'a' << dec << endl; 

  cout << u8'a' << endl;  // character-literal of type char8_t (UTF-8)

  cout << u'a' << endl;  // character-literal of type char16_t (UTF-16)

  cout << U'a' << endl;  // character-literal of type char32_t (UTF-32)

  cout << L'a' << endl;  // wide-character literal of type wchar_t

  // escape sequences
  cout << '\n' << endl;  // new-line
  cout << '\t' << endl;  // horizontal tab
  cout << '\v' << endl;  // vertical tab
  cout << '\b' << endl;  // backspace
  cout << '\r' << endl;  // carriage return
  cout << '\f' << endl;  // form feed
  cout << '\a' << endl;  // alert
  cout << '\\' << endl;  // backslash
  cout << '\?' << endl;  // question mark
  cout << '\'' << endl;  // single quote
  cout << '\"' << endl;  // double quote
  cout << '\13' << endl;  // octal number
  cout << '\x1f' << endl;  // hex number
}
