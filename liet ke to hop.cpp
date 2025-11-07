#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a,cur;
int cnt=0;
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void solve(int len,int now){
	if(len==k){
		cnt++;
		if(snt(cnt)){
			cout<<cnt<<": ";
			for(int x:cur) cout<<x<<" ";
			cout<<endl;
		}
		return;
	}
	for(int i=now;i<a.size();i++){
		cur.push_back(a[i]);
		solve(len+1,i+1); 
		cur.pop_back();
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) a.push_back(i);
	solve(0,0);
}