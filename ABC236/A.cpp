#include <iostream>
using namespace std;
int main(void) {
  string s;
  int a, b = 0;
  cin >> s;
  cin >> a >> b;
  char a_moji, b_moji;
  a_moji = s[a-1];
  b_moji = s[b-1];
  s[a-1] = b_moji;
  s[b-1] = a_moji;
  cout << s << endl;
  return 0;
}
