#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<string> a,cur;
void solve(int len,int j){
	if(len==k){
		for(string c: cur) cout<<c<<" ";
		cout<<endl;
		return;
	}
	for(int i=j;i<a.size();i++){
		cur.push_back(a[i]);
		solve(len+1,i+1); //truyền i+1 lúc này đã trở thành j mới, không truyền j+1 vì i đã dịch lên rồi
		cur.pop_back();
	}
}
int main(){
	cin>>n>>k;
	a.resize(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(),a.end()),a.end());
	solve(0,0);
}