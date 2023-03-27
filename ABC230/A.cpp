#include <cstdio>
#include <iostream>
using namespace std;
int main(void) {
  int n = 0;
  cin >> n;
  if (n >= 42) {
    printf("AGC%03d\n", n + 1);
  } else {
    printf("AGC%03d\n", n);
  }
  return 0;
}
