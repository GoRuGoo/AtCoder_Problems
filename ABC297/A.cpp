#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int n, d;
  cin >> n >> d;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  bool click_flag = false;

  for (int i = 1; i < n; i++) {
    if ((t[i] - t[i - 1]) <= d) {
      cout << t[i] << endl;
      return 0;
    } else {
      continue;
    }
  }
  cout << -1 << endl;
  return 0;
}
