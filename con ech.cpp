#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll n){
	ll buoc[51];
	buoc[1]=1;
	buoc[2]=2;
	buoc[3]=4;
	for(int i=4;i<=n;i++){
		buoc[i]=buoc[i-1]+buoc[i-2]+buoc[i-3];
	}
	return buoc[n];
}
int main(){
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		cout<<solve(n)<<endl;
	}
}