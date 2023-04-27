
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  string operation;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  cin >> operation;
  map<int, int> right_min;
  map<int, int> left_max;
  for (int i = 0; i < n; i++) {
    if (operation[i] == 'R') {
      if (left_max[y[i]] != 0 && x[i] < left_max[y[i]]) {
        cout << "Yes" << endl;
        return 0;
      }
    } else {
      if (right_min[y[i]] != 0 && right_min[y[i]] < x[i]) {
        cout << "Yes" << endl;
        return 0;
      }
    }

    if (operation[i] == 'R') {
      if (right_min[y[i]] != 0) {
        right_min[y[i]] = min(x[i], right_min[y[i]]);
      } else {
        right_min[y[i]] = x[i];
      }
    } else {
      if (left_max[y[i]] != 0) {
        left_max[y[i]] = max(x[i], left_max[y[i]]);
      } else {
        left_max[y[i]] = x[i];
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
