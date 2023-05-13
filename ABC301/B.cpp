#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, vector<int> > mem;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (abs(a[i] - a[i + 1]) == 1) {
      continue;
    } else if (a[i] < a[i + 1]) {
      vector<int> app;
      for (int k = a[i] + 1; k < a[i + 1]; k++) {
        app.push_back(k);
      }
      mem[i + 1] = app;
    } else if (a[i] > a[i + 1]) {
      vector<int> app;
      for (int k = a[i] - 1; k > a[i + 1]; k--) {
        app.push_back(k);
      }
      mem[i + 1] = app;
    }
  }

  int last_value = 0;
  for (auto itr = mem.begin(); itr != mem.end(); itr++) {
    int key = itr->first;
    vector<int> value = itr->second;
    a.insert(a.begin() + key + last_value, value.begin(), value.end());
    last_value += value.size();
  }

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  printf("\n");
  return 0;
}
