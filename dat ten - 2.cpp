#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<char> a,cur;
void solve(int len,int j){
	if(len==k){
		for(char c: cur) cout<<c;
		cout<<endl;
		return;
	}
	for(int i=j;i<a.size();i++){
		cur.push_back(a[i]);
		solve(len+1,i+1);
		cur.pop_back();
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a.resize(n);
		a[0]='A';
		for(int i=1;i<n;i++) a[i]=a[i-1]+1;
		solve(0,0);
	}
}