#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll luythua(ll a,ll b){
	if(b==1) return a;
	if(b==0) return 1;
	ll tmp=luythua(a,b/2);
	if(b%2==1) return tmp*tmp*a;
	else return tmp*tmp;
}
char solve(ll n,ll k){
	ll mid=luythua(2,n-1);
	if(k==mid) return 'A'+(n-1);
	else if(k<mid) return solve(n-1,k);
	else if(k>mid) return solve(n-1,k-mid);
}
int main(){
	int t;cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}