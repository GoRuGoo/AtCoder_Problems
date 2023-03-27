#include <iostream>
using namespace std;

int main(void) {
  int s, t, x = 0;
  cin >> s >> t >> x;
  if (s < t) {
    if (s <= x && x < t) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (x < t | x >= s) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
