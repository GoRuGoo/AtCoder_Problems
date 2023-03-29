#include <iostream>
#include <string>
using namespace std;
int main(void) {
  char first,x,second;
  cin >> first >> x >>second;
  cout << int(first-'0') * int(second-'0')<<endl;
  return 0;
}

