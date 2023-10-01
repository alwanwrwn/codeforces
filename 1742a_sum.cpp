#include <iostream>

using namespace std;

int main(){

  int n; cin >> n;

  int sum1, sum2, sum3;

  for (size_t i = 0; i < n; i++) {
    int a, b, c; cin >> a >> b >> c;

    sum1 = a + b;    
    sum2 = a + c;
    sum3 = b + c;

    if (sum1 == c || sum2 == b || sum3 == a) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }

  return 0;
}
