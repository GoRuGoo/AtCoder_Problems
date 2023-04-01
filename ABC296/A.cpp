#include <iostream>
#include <string_view>
using namespace std;
int main(void) {
  int n;
  string s;
  cin >> n;
  cin >> s;
  if (n == 1) {
    cout << "Yes" << endl;
    return 0;
  } else {
    char before_sex;
    before_sex = s[0];
    bool ok_flag = false;
    for (int i = 1; i < n; i++) {
      if (before_sex != s[i]) {
        ok_flag = true;
        before_sex = s[i];
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
    if (ok_flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  return 0;
}
