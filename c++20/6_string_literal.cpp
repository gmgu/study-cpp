#include <iostream>
#include <cassert>  //assert
#include <cstring>  //strcmp

using namespace std;

int main() {
  const char* str1 = "a\\\n  b\n  c";
  const char* str2 = R"(a\
  b
  c)"; // raw string literal (including new-line)
  assert(strcmp(str1, str2) == 0);  // pass

  const char* str3 = R"(x = "\"y\"")";
  const char* str4 = "x = \"\\\"y\\\"\"";
  assert(strcmp(str3, str4) == 0);  //pass

  cout << u8"UTF-8 string literal" << endl;  // array of n const char8_t
  cout << u"UTF-16 string literal" << endl;  // array of n const char16_t
  cout << U"UTF-32 string literal" << endl;  // array of n const char32_t
  cout << L"wise string literal" << endl;  // array of n const wchar_t
  // cout supports only char*
  // for other types such as char32_t, cout will prints the pointer

  cout << "adjacent"" string-literals ""are concatenated" << endl;
  cout << u8"if both string-literals have the same encoding-prefix,"
          u8" the resulting concatenated string-literal has that encoding-prefix" << endl;
  cout << u8"if one string-literal has no encoding-prefix,"
          " it is treated as a string-literal of the same encoding-prefix as the other operand" << endl;

  cout << "\xA" "B" << endl;  // '\xA' + 'B' (not '\xAB')
}
