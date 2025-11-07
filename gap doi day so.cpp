#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll luythua(ll a,ll  b){
	if(b==0) return 1;
	ll x=luythua(a,b/2);
	ll tmp=(x*x);
	if(b%2==0) return tmp;
	else return tmp*a;
}
ll solve(ll n,ll k){
	ll mid=luythua(2,n-1);
	if(k==mid) return n;
	else if(k<mid) return solve(n-1,k);
	else if(k>mid) return solve(n-1,k-mid);
}
int main(){
	int t;cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}