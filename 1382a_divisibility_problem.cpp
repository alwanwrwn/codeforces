#include <iostream>

using namespace std;

int main(){
  int n; cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;

    int count = 0;

    int loop = a-b+1;

    for (int j = 0; j<=a; j++) {
      if(a%b == 0){
        cout << count << "\n";
        break;
      } else {
        a++;
        count++;
      }
    }
  }

  return 0;
}
