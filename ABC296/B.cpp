#include <stdio.h>
#include <string.h>

#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int count_x, count_y = 0;
  vector<vector<char> > que(8, vector<char>(8));
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> que[i][j];
      if (que[i][j] == '*') {
        count_x = j;
        count_y = i;
        break;
      } else {
        continue;
      }
    }
  }
  char alphabet = 'a' + count_x;
  char number = 8 - count_y + '0';
  char ans[2];
  sprintf(ans, "%c%c\n", alphabet, number);
  cout << ans << endl;

  return 0;
}
