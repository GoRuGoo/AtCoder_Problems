#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void) {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
