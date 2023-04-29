#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
#include <cstring>
using namespace std;
int main(void) {
  int h, w;
  cin >> h >> w;
  char a[h][w];
  char b[h][w];
  for (int i = 0; i < h; i++) {
    for (int s = 0; s < w; s++) {
      cin >> a[i][s];
    }
  }
  for (int i = 0; i < h; i++) {
    for (int s = 0; s < w; s++) {
      cin >> b[i][s];
    }
  }

  map<int, int> dot_memory_a;
  map<int, int> sharp_memory_a;

  for (int i = 0; i < h; i++) {
    for (int k = 0; k < w; k++) {
      if (a[i][k] == '.') {
        dot_memory_a[i]++;
      } else {
        sharp_memory_a[i]++;
      }
    }
  }
  map<int, int> dot_memory_b;
  map<int, int> sharp_memory_b;
  for (int i = 0; i < h; i++) {
    for (int k = 0; k < w; k++) {
      if (a[i][k] == '.') {
        dot_memory_b[i]++;
      } else 
        sharp_memory_b[i]++;
      }
    
  }
  char nigeru_first[h];
  char nigeru_second[w];
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
    }
  }
}
