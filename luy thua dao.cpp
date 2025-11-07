#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll luythua(ll a,ll b){
	if(b==0) return 1;
	ll x=luythua(a,b/2);
	if(b%2==0) return x%mod * x%mod;
	else return x%mod*x%mod*a%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;cin>>n;
		string tmp=n;
		reverse(tmp.begin(),tmp.end());
		cout<<luythua(stoll(n),stoll(tmp))%mod<<endl;
	}
}