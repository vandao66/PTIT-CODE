#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll m,n,k;
		cin>>m>>n>>k;
		vector<ll> a;
		for(int i=0;i<m;i++){
			ll x;
			cin>>x;
			a.push_back(x);
		}
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		cout<<a[k-1]<<endl;
	}
}