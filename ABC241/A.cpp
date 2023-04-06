#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int memory = 0;
  vector<int> number(10);
  for (int i = 0; i <= 9; i++) {
    cin >> number[i];
  }
  for (int i = 0; i <= 3; i++) {
    if (i == 3) {
      cout << memory << endl;
    } else {
      memory = number[memory];
    }
  }
  return 0;
}
