#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;

    int vanya, vova = 0;

    for (int j = 0; j < 10; j++) {
      if ((val - 1) % 3 || (val + 1) % 3) {
        cout << "First";
      } else if (j == 9) {
        cout << "Second";
      }
    }
  }
}
