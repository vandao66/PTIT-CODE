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
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		int check=0;
		for(int i=0;i<n-2 && !check;i++){
			int left=i+1;
			int right=n-1;
			if(i>0 && a[i]==a[i-1]) continue;
			while(left<right){
				ll sum=a[i]+a[left]+a[right];
				if(sum==k){
					check=1;
					break;
				}
				else if(sum<k) left++;
				else if(sum>k) right--;
			}
			
		}
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}