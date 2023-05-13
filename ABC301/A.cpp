#include <iostream>
using namespace std;
int main(void) {
  int n;
  string que;
  cin >> n;
  cin >> que;

  int count_takahasi = 0, count_aoki = 0;
  int last_count_takahashi, last_count_aoki;

  for (int i = 0; i < n; i++) {
    if (que[i] == 'A') {
      count_aoki++;
      last_count_aoki = i;
    } else {
      count_takahasi++;
      last_count_takahashi = i;
    }
  }

  if (count_aoki > count_takahasi) {
    cout << "A" << endl;
  } else if (count_takahasi > count_aoki) {
    cout << "T" << endl;
  } else {
    if (last_count_aoki < last_count_takahashi) {
      cout << "A" << endl;
    } else {
      cout << "T" << endl;
    }
  }
  return 0;
}
