#include <bits/stdc++.h>
using namespace std;
void benhat(string &a){
	for(int i=0;i<a.length();i++){
		if(a[i]=='6') a[i]='5';
	}
}
void lonnhat(string &a){
	for(int i=0;i<a.length();i++){
		if(a[i]=='5') a[i]='6';
	}
}
int main(){
	string a,b;
	cin>>a>>b;
	benhat(a);
	benhat(b);
	int tmp=stoi(a)+stoi(b);
	lonnhat(a);
	lonnhat(b);
	int tmp1=stoi(a)+stoi(b);
	if( tmp1 > tmp) cout<<tmp<<" "<<tmp1;
	else cout<<tmp1<<" "<<tmp;
}