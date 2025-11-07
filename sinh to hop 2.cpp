#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> x;
vector<bool> chuaxet;
void result(){
	for(int i=1;i<=n;i++) cout<<x[i];
	cout<<endl;
}
void solve(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j;chuaxet[j]=false;
			if(i==n) result();
			else solve(i+1);
			chuaxet[j]=true;
		}
	}
}
int main(){
	cin>>n>>k;
	x.resize(k);
	chuaxet.assign(n+1,true);
	solve(1);
}