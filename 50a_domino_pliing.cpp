#include<iostream>

using namespace std;

int main(){

  int m,n; cin>>m>>n;
  
  int area = m*n;

  int count = 0;

  while (area>=2) {
    count++;
    area -= 2;
  }

  cout<<count;

  return 0;
}
