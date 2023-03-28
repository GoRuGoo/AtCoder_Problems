#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int n;
  cin >> n;

  int most_koho = 0;
  string most_koho_name;

  vector<string> koho(n);
  for (int i = 0; i < n; i++) cin >> koho[i];

  for (int i = 0; i < n; i++) {
    string count_koho = koho[i];
    int count_val = 0;
    for (int j = 0; j < n; j++) {
      if (koho[j] == count_koho) {
        count_val++;
      }
      if (most_koho < count_val) {
        most_koho = count_val;
        most_koho_name = koho[j];
      }
    }
  }
  cout << most_koho_name << endl;
  return 0;
}
