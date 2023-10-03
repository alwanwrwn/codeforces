#include <iostream>
#include <string>

using namespace std;

int main(){

  int t,s,x; cin >> t >> s >> x;

  int curr = 0, num = 0;
  
  string ans = "NO";

  for (int i = 1; i<=x; i++) {
    if (i%2 == 0) {
      curr = t+num*s;
      num++;
    } else {
      curr = t+num*s;
      if (i>1) {
        curr++;
      }
    }

    if (curr == x) {
      ans = "YES";
      break;
    }
  }

  cout << ans;

  return 0;
}
