#include <bits/stdc++.h>
using namespace std;
void solve(int n,char batdau,char trunggian,char dich){
	if(n==1){
		cout<<batdau<<" -> "<<dich<<endl;
		return;
	}
	solve(n-1,batdau,dich,trunggian);
	cout<<batdau<<" -> "<<dich<<endl;
	solve(n-1,trunggian,batdau,dich);
}
int main(){
	int n;cin>>n;
	solve(n,'A','B','C');
}