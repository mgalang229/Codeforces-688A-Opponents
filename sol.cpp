#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, d;
	cin >> n >> d;
	int cnt=0, mx=0;
	for(int i=0; i<d; ++i) {
		string s;
		cin >> s;
		bool ok=0;
		for(char c : s)
			if(c=='0')
				ok=1;
		if(ok)
			cnt++;
		else 
			cnt=0;
		mx=max(mx, cnt);
	}
	cout << mx << "\n";
}
