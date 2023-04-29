#include <iostream>
using namespace std;
int main(void) {
  int n, a, b;
  cin >> n >> a >> b;
  int c[n];
  int sum = a + b;
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    if (c[i] == sum) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}
