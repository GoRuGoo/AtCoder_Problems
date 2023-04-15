#include <iostream>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  string hyouka;
  int count_good, count_bad, count_bad_bad = 0;
  cin >> hyouka;
  for (int i = 0; i < n; i++) {
    if (hyouka[i] == 'o') {
      count_good++;
    } else if (hyouka[i] == '-') {
      count_bad++;
    } else {
      count_bad_bad++;
    }
  }
  if (count_bad_bad == 0 && count_good > 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
