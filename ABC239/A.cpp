#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
  double h;
  cin >> h;
  double ans = sqrt(h * (h + 12800000));
  printf("%7f\n", ans);
  return 0;
}
