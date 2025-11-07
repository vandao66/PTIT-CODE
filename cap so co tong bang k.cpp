#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll> a(n);
		ll ans=0;
		map<ll,ll> s; 
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(!s.count(k-a[i])) s[a[i]]++; // tìm số + a[i]=k có trong map chưa, nếu chưa thì thêm a[i] vào map và xuất hiện 1 lần
			else{
				ans+=s[k-a[i]];  // nếu đã tìm thấy số+a[i]=k thì số đó có bao nhiêu lần thì bấy nhiêu cặp thỏa mãn
				s[a[i]]++; // thêm số a[i] vào map 
			}
		}
		cout<<ans<<endl;
	}
}