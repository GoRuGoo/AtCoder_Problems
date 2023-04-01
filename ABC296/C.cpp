#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void) {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  vector<string> resume;
  bool can_flag = false;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (x == 0) {
    cout << "Yes" << endl;
    return 0;
  } else {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        string resume_onetime;
        resume_onetime = to_string(a[i]) + "-" + to_string(a[j]);
        if (!count(resume.begin(), resume.end(), resume_onetime)) {
          if (a[i] - a[j] == x) {
            can_flag = true;
          } else {
            resume.push_back(resume_onetime);
            can_flag = false;
          }
        }
      }
    }
  }
  if (can_flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
