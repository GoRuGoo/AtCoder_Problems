#include <iostream>
using namespace std;
int main(void) {
  int abc;
  cin >> abc;
  int a = abc / 100;
  int b = (abc - a * 100) / 10;
  int c = (abc - a * 100 - b * 10);
  int ans = ((100 * a) + (10 * b) + c) + ((100 * b) + (10 * c) + a) +
            ((100 * c) + (10 * a) + b);
  cout << ans << endl;
  return 0;
}
