#include <algorithm>
#include <stdio.h>

#include <iostream>
#include <string>
using namespace std;
int main(void) {
  bool judge_flag = false;
  string char_a, char_b;
  long a, b = 0;
  cin >> a >> b;
  char_a = to_string(a);
  reverse(char_a.begin(),char_a.end());
  char_b = to_string(b);
  reverse(char_b.begin(),char_b.end());
  for (int i = 0; i < char_a.size(); i++) {
    string in_for_a, in_for_b;
    in_for_a = char_a[i];
    in_for_b = char_b[i];
    if ((stoi(in_for_a) + stoi(in_for_b)) >= 10) {
      judge_flag = true;
      break;
    }
  }
  if (judge_flag) {
    cout << "Hard" << endl;
  } else {
    cout << "Easy" << endl;
  }
  return 0;
}
