#include <iostream>
using namespace std;
int cal(int value) { return value * value + 2 * value + 3; }
int main(void) {
  int t;
  cin >> t;
  cout << cal(cal(cal(t) + t) + cal(cal(t))) << endl;
  return 0;
}
