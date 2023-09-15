// Let's print the 96 basic characters of C++20 !

#include <stdio.h>

int main() {
  printf("abcdefghijklmnopqrstuvwxyz\n");  // \n is a control character representing a new-line
  printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\v");  // \v is a control character representing a vertical tab
  printf("_{}[]#()<>%%:;.?*+-/^&|~!=,\\\"'");  //note the %%, \\, and \" for printing %, \ and ", respectively
  printf("Horizontal\tTab\n");
  printf("Form\fFeed\n");
  printf("spa ce\n");
}
