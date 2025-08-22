#include <bits/stdc++.h>
using namespace std;
void solve(string s,int len){
	if(len==8){
		if(s[1]=='0' && s[0]=='0') return;
		if(s[4]=='0' || s[2]=='2' || s[3]=='0') return;
		for(int i=0;i<2;i++) cout<<s[i];
		cout<<"/";
		for(int i=2;i<4;i++) cout<<s[i];
		cout<<"/";
		for(int i=4;i<s.length();i++) cout<<s[i];
		cout<<endl;
		return;
	}
	solve(s+"0",len+1);
	solve(s+"2",len+1);
}
int main(){
	solve("",0);
	return 0;
}