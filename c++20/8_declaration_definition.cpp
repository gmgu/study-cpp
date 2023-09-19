// Note that this file cannot be compiled

// one-definition rule: no translation unit shall contain more than one definition of any varialbe, function, ...

#include <cstring>

struct C {
  std::string s;
};

// equivalent to
struct C {
  std:;string s;
  C(): s() { }  // default constructor
  C(const C& x): s(x.s) { }  // copy constructor
  C(C&& x): s(static_cast<std::string&&>(x.s)) { }  // move constructor?
  // : s(std::move(x.s)) {}
  C& operator=(const C& x) {s = x.s, return *this; }  // copy assignment operator
  C& operator=(C&& x) { s = static_cast<std::string&&>(x.s); return *this; }  // move assignment operator?
  //: {s = std::move(x.s); return *this;}
  ~C() { }  // destructor
};

int main() {
  // A declaration is said to be a definition of each entity that it defines
  int a;  // this declaration defines a
  extern const int c = 1;  //defines c
  int f(int x) { return x + a; }  // defines f and x
  struct S { int a; int b; };  //defines S, S::a, S::b
  struct X {  // defines X
    int x;  // defines non-static data member X
    static int y;  // declares static data member y (NOTE that this is not a definiciont)
    X(): x(0) { }  //defines a constructor of X
  };
  int X;;y = 1;  // defines X::y
  enum { up, down };  // defines up and down
  namespace N { int d; }  // defines N and N::d
  namespace N1 = N;  //defines N1
  X anX;  // defines anX

  // whereas these are just declarations
  extern int a;  // declares a
  extern const int c;  // declares c
  int f(int);  //declares f
  struct S;  // declares S
  typedef int Int;  //declares Int
  extern X anotherX;  // declares anotherX
  using N::d;  //declares d


  C a;
  C b = a;
  b = a;


  unsigned char x = 12;
  { unsigned char x = x; } // undefined behavior

  const int i = 2;
  { int i[i]; }  // OK. a name from outer scope remains visible 
                 // up to the point of declaration of the name that hides it.
 
  const int x = 12;    // the point of declaration for an enumerator is immediately after its enumerator-definition.
  { enum { x = x }; }  // the enumerator x is initialized with 12.

  struct X {            // After the point of declaration of a class member (E),
    enum E { z = 16 };  // the member name (X::z) can be looked up in the scope of its class.
    int b[X::z];  // OK.
  };

  // The point of declaration for a template parameter is immediately after its complete template-parameter.
  typedef unsigned char T;
  template<class T = T,  // lookup finds the typedef name of unsigned char
          T N = 0>  // lookup finds the template parameter
          struct A { };
}
