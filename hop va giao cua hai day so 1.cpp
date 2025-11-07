#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		map<int,int> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s[a[i]]++;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			s[b[i]]++;
		}
		for(auto p:s) cout<<p.first<<" ";
		cout<<endl;
		for(auto p:s){
			if(p.second > 1) cout<<p.first<<" "; 
		}
		cout<<endl;
	}
	return 0;
}