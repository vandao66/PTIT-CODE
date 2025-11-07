#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll luythua(ll a,ll b){
	if(b==1) return a;
	if(b==0) return 1;
	ll tmp=luythua(a,b/2);
	ll x=(tmp*tmp)%mod;
	if(b%2==0) return x;
	else return (x*(a%mod))%mod;
}
int main(){
	while(1){
		ll a,b;cin>>a>>b;
		if(a==0 && b==0) return 0;
		cout<<luythua(a,b)<<endl;
	}
}