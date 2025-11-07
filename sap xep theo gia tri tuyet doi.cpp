#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		vector<pair<int,int>> b;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b.push_back({abs(x-a[i]),i});
		}
		sort(b.begin(),b.end());
		for(auto p:b) cout<<a[p.second]<<" ";
		cout<<endl;
	}
}