#include <iostream>
using namespace std;
int main(void) {
  string s;
  cin >> s;
  int first_b = 0;
  bool first_b_flag = false;
  int second_b = 0;

  int first_r = 0;
  bool first_r_flag = false;
  int second_r = 0;

  int position_k = 0;

  for (int i = 0; i < 8; i++) {
    if (s[i] == 'B' && first_b_flag == false) {
      first_b = i;
      first_b_flag = true;
    } else if (s[i] == 'B' && first_b_flag) {
      second_b = i;
    }

    if (s[i] == 'R' && first_r_flag == false) {
      first_r = i;
      first_r_flag = true;
    } else if (s[i] == 'R' && first_r_flag) {
      second_r = i;
    }

    if (s[i] == 'K') {
      position_k = i;
    }
  }


  if ((((first_b % 2 == 0 && second_b % 2 == 1) ||
        (first_b % 2 == 1 && second_b % 2 == 0)) &&
       (first_r < position_k && position_k < second_r))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
