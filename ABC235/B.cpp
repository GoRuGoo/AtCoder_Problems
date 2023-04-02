#include <chrono>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  vector<int> high(n);
  int last_standing_number = 0;
  for (int i = 0; i < n; i++) {
    cin >> high[i];
  }
  for (int i = 0; i < n; i++) {
    if (high[i] > last_standing_number) {
      last_standing_number = high[i];
      continue;
    } else {
      cout << last_standing_number << endl;
      return 0;
    }
  }
  cout << last_standing_number << endl;
  return 0;
}
