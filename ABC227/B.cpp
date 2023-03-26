#include <climits>
#include <iostream>
using namespace std;

int main(void) {
  int n, pass = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    bool f = false;
    int s;
    cin >> s;
    for (int a = 1; a < 1000; a++) {
      for (int b = 1; b < 1000; b++) {
        if ((4 * a * b + 3 * a + 3 * b) == s) {
          f = true;
        }
      }
    }
    if (f == true) pass++;
  }
  cout << n-pass <<endl;
}

//ほんの少しだけヒント見たけどほぼ自分の力でやれた
