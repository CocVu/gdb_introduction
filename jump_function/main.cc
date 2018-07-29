#include <iostream>
using namespace std;

int b,c,d;

int main (int argc, char **argv) {
  int a = 0;
  b  = 10;
  // cin >> b >> c >>d;

  for (int i = 0; i < 10; ++i) {
    a += i;
  }

  a *= b;
  cout << a << endl;
  return 0;
}
