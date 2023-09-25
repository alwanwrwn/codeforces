#include <algorithm>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int n, dist, curr=100000; cin>>n;
	
	for (int i = 0; i<n; i++) {
		int num; cin>>num;
		dist = abs(0-num);
		curr = min(dist,curr);
		if (curr==0) {
			break;
		}
	}
			
	cout<<curr;

	return 0;
}
