// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  // 1st -> TLE
  // Bruteforce
  // O(n log n)
  int n,q; cin >> n >> q;

  vector<int> p(n);

  for (size_t i = 0; i < n; i++)
  {
    cin >> p[i];
  }

  // sort(p.begin(), p.end(), greater<int>());

  // for (size_t i = 0; i < q; i++)
  // {
  //   int x, y; cin >> x >> y;
  //   int sum = 0;

  //   int count = x-y;

  //   for (size_t j = count; j < x; j++)
  //   {   
  //     sum += p[j];
  //   }

  //   cout << sum << "\n";
  // }

  // return 0;

  // 2nd -> TLE
  // Hash map
  // O(n log n)

  sort(p.begin(), p.end());

  vector<long long> map(n+1);

  for (size_t i = 0; i < n; i++)
  {
    map[i+1] = map[i] + p[i];
  }
  
  while (q--)
  {
    int x, y; cin >> x >> y;
    int sum = map[n-(x-y)] - map[n-x];

    cout << sum << "\n";
  }
  

  return 0;
}
