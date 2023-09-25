#include<iostream>
#include<string>

using namespace std;

int main(){
  
  int n; cin>>n;

  for (size_t i = 0; i < n; i++) {
    string str; cin>>str;
    int len = str.length();

    if (len>10) {
      cout<<str[0]<<len-2<<str[len-1];
    }else {
      cout<<str;
    }

    cout<<"\n";
  }

  return 0;
}
