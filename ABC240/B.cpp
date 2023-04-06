#include <iostream>
#include <map>
#include <vector>
using namespace std;
template <typename K, typename V>
void print_map(map<K, V> const &m) {
  int count = 0;
  for (auto const &pair : m) {
    count++;
  }
  cout << count << endl;
}
int main(void) {
  int n;
  cin >> n;
  vector<int> que(n);
  map<int, int> remember;
  for (int i = 0; i < n; i++) {
    cin >> que[i];
    remember[que[i]] += 1;
  }
  print_map(remember);
  return 0;
}
