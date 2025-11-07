#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		priority_queue<int,vector<int>,greater<int>> pq;
		for(int i=0;i<n;i++){
			ll x;cin>>x;
			pq.push(x);
		}
		ll ans=0;
		while(pq.size()>1){
			ll a=pq.top(); pq.pop();
			ll b=pq.top(); pq.pop();
			ans+=(a+b);
			pq.push(a+b);
		}
		cout<<ans<<endl;
	}
}