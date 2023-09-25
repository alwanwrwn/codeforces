#include <iostream>

using namespace std;
int main() {
  int n, k;
  cin >> n >> k;

  int arr[51];

  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = 0;

  for (size_t i = 0; i < n; i++) {
    if (arr[i] >= arr[k]) {
      count++;
    }
  }

  cout << count;
  return 0;
}
