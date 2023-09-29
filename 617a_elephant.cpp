#include<iostream>

using namespace std;

int main() {

  int n; cin >> n;

  int steps = 0;

  while(n > 0) {
    if(n >= 5) {
      n -= 5;
      steps++;
    } else if(n >= 4) {
      n -= 4;
      steps++;
    } else if(n >= 3) {
      n -= 3;
      steps++;
    } else if(n >= 2) {
      n -= 2;
      steps++;
    } else if(n >= 1) {
      n -= 1;
      steps++;
    }
  }

  cout << steps << endl;

  return 0;
}
