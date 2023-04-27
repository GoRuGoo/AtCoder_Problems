#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  int count_same_place_num = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for(int i=0;i<n;i++){
    if(a[i]==b[i]){
      count_same_place_num++;
    }
  }
  

  int count_different_place_num = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((a[i] == b[j]) && (i != j)) {
        count_different_place_num++;
      }
    }
  }
  cout << count_same_place_num << endl;
  cout << count_different_place_num << endl;
  return 0;
}
