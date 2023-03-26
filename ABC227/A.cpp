#include <iostream>

using namespace std;

int main(void) {
  int n, k, a;
  cin >> n >> k >> a;
  int ans = (a + k - 1) % n;
  if (ans == 0) ans = n;
  cout << ans << endl;
}


//解答参照
