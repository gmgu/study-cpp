#include <iostream>

using namespace std;;

// static variables are initialized as a consequence of program initiation (or thread execution)
// static initialization includes constant-initialization and zero-initialization
int static_a = 10;  // constant-initialized
int static_b;  // zero-initialized

// all other initialization is dynamic initialization
// all static initialization happens before any daynmic initialization

int main(int argc, char** argv) {
  cout << "constant-initialized: " << static_a << endl;
  cout << "zero-initialized: " << static_b << endl;

  return 0;  // will call std::exit(0)
}
