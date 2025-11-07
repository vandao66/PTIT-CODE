#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		auto it=upper_bound(a.begin(),a.end(),k);
		if(it==a.begin()) cout<<-1<<endl;
		else cout<<(it-a.begin())<<endl;
	}
}