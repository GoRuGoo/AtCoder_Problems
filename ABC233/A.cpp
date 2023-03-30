#include <iostream>
using namespace std;
int main(void) {
  int x, y;
  cin >> x >> y;
  if (x >= y) {
    cout << 0 << endl;
    return 0;
  } else {
    int count_kitte = 0;
    for (int i = 0; x < y; i++) {
      x += 10;
      count_kitte++;
    }
    cout << count_kitte << endl;
    return 0;
  }
  return 0;
}
