// can use 2 ways, using if to check j & k or using map
#include <iostream>
  
using namespace std;

int main(){

  int n,score = 0; cin >> n;

  char x[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };

  for (int i = 0; i<n; i++) {
    score = 0;
    for (int j = 0; j<10; j++) {
    for (int k = 0; k<10; k++) {
      char curr; cin>>curr;
      if(curr == 'X'){
        score += x[j][k];
      }
    }
    }
    cout<<score<<"\n";
  }

  return 0;
}
