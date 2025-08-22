#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
void solve(vector<int> a){
	if(a.size()<=0) return;
	else{
		cout<<"[";
		for(int i=0;i<a.size();i++){
			if(i==a.size()-1) cout<<a[i];
			else cout<<a[i]<<" ";
		}
		cout<<"]"<<endl;
	}
	vector<int> cur;
	for(int i=0;i<a.size()-1;i++){
		cur.push_back(a[i]+a[i+1]);
	}
	solve(cur);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		a.resize(n);
		for(int i=0;i<n;i++) cin>>a[i];
		solve(a);
	}
}