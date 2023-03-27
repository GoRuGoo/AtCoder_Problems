#include <iostream>
#include <string>
using namespace std;
int main(void) {
  string s1, s2;
  cin >> s1;
  cin >> s2;
  if (s1 == ".#" && s2 == "#.") {
    cout << "No" << endl;
  } else if (s1 == "#." && s2 == ".#") {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}
