#include <iostream>
#include <string>

using namespace std;

int main(){
  int n, val = 0; cin >> n;

  for (size_t i = 0; i < n; i++) {
    string stat; cin >> stat;

    for (size_t j = 0; j < stat.length(); j++) {
      if (stat[j] == '+') {
      val++;
      break;
      } else if (stat[j] == '-') {
      val--;
      break;
      }
    }
  }

  cout<<val;

  return 0;
}
