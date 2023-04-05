#include <math.h>

#include <iostream>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  double ans = pow(2, n);
  if (ans > n * n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
