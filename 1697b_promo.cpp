#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n,q; cin >> n >> q;

  vector<int> p;

  for (size_t i = 0; i < n; i++)
  {
    int num; cin >> num;
    p.push_back(num);
  }

  sort(p.begin(), p.end(), greater<int>());

  for (size_t i = 0; i < q; i++)
  {
    int x, y; cin >> x >> y;
    int sum = 0;

    int count = x-y;

    for (size_t j = count; j < x; j++)
    {   
      sum += p[j];
    }

    cout << sum << "\n";
  }

  return 0;
}
