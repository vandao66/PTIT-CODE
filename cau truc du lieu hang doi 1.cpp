#include <bits/stdc++.h>
using namespace std;
int solve(int a,int b,queue<int> &ss){
	if(a==1) return ss.size();
	else if(a==2) return ss.empty() ? 1 : 0;
	else if(a==3) ss.push(b);
	else if(a==4){
		if(!ss.empty()) ss.pop();
	}
	else if(a==5) return ss.empty() ? -1 : ss.front();
	else if(a==6) return ss.empty() ? -1 : ss.back();
	return 0;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<int> ss;
		while(n--){
			int a;cin>>a;
			if(a==3){
				int b;cin>>b;
				solve(a,b,ss);
			}
			else if(a==2){
				if(solve(a,0,ss)) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else if(a==1 || a==5 || a==6) cout<<solve(a,0,ss)<<endl;
			else solve(a,0,ss);
		}
	}
}