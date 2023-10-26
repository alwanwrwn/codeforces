// NOT SOLVED YET
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    set<int> a;

    while (n--) {
      int l;
      cin >> l;
      arr.push_back(l);
      a.insert(l);
    }

    if (arr.size() == a.size()) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
