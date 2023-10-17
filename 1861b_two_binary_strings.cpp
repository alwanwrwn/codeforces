#include <cstddef>
#include <iostream>
#include <string>

using namespace std;

int main(){

  int n; cin >> n;

  while(n--){
    string a, b; cin >> a >> b;

    int flag = true;
    for (int i = 0; i< a.length(); i++) {
      if (a[i] != b[i]) {
        flag = false;
      }
    }

    if (flag) {
      cout << "YES" << "\n";
      continue;
    }

    int l0 = 0, r0 = NULL;
    int l1 = NULL, r1 = ;

    for (int i = 0; i< a.length(); i++) {
      if (a[i] == b[i]) {
        if (a[i] == 0) {
          if (l0 == NULL) {
            l0 = i;
          } else if (l0 != NULL && r0 == NULL) {
            r0 = i;
          }
    
        } else if (a[i] == 1) {
          if (l1 == NULL) {
            l1 = i;
          } else if (l1 != NULL && r1 == NULL) {
            r1 = i;
          }
        }
      }
    }

    
    if (a == b) {
      cout << "YES" << "\n";
    } else {
      cout << "NO"  << "\n";
    }

    cout << 'd' << '\n';
  }

  return 0;
}
