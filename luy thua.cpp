#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9 +7;
ll luythua(ll a,ll  b){
	if(b==0) return 1;
	ll x=luythua(a,b/2);
	ll tmp=(x*x)%mod;
	if(b%2==0) return tmp;
	else return (tmp*(a%mod))%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<luythua(n,k)<<endl;
	}
}