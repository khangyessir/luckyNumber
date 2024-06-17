#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	bool isLucky(int n, int k = 2){
		if(k > n) return true; 
		if(n%k == 0) return false;
		int new_position = n - (n/k);
		return isLucky(new_position, k+1);
	}
};

int main(){
	int n;
	cin >> n;
	Solution x;
	if(x.isLucky(n)) cout << 1;
	else cout << 0;
	return 0;
}
