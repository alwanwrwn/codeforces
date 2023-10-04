#include <iostream>
#include <string>
#define ll long long int

using namespace std;

int main(){

  int t; cin >> t;

  for (int j = 0; j<t; j++) {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    ll temp=0;
    ll i=0;

    while(i<n)
    {
        temp=1;

        while(i<n && s[i]=='<')
        {
            temp++;
            i++;
        }

        if(cnt<temp)
        {
            cnt=temp;
        }

        temp=1;
        
        while(i<n && s[i]=='>')
        {
            temp++;
            i++;
        }
        
        if(cnt<temp)
        {
            cnt=temp;
        }
    }

    cout<<cnt<<endl;
  }

  return 0;
}
