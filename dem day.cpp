#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=123456789;
ll luythua(int a,ll n){
	if(n==0) return 1;
	ll x=luythua(a,n/2);
	if(n%2==0) return (x*x)%mod;
	else return (x*x*a)%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;cin>>n;
		cout<<luythua(2,n-1)<<endl;	
	}
}