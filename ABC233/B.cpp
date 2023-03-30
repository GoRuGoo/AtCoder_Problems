#include <iostream>
#include <iterator>
#include <string_view>
using namespace std;
int main(void) {
  int l, r = 0;
  string s;
  cin >> l >> r;
  cin >> s;
  reverse(s.begin() + l - 1, s.begin() + r);
  cout << s << endl;
  return 0;
}
