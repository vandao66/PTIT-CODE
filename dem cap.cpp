#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		vector<long long> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		int cnt=0;
		for(int i=0;i<n;i++){
			auto it=lower_bound(a.begin()+i+1,a.end(),k+a[i]); // tìm phần tử đầu tiên trừ a[i]>=k
			cnt+=distance(a.begin()+i+1,it);
		}
		cout<<cnt<<endl;
	}
}