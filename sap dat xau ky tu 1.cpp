#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> a;
		for(char c:s){
			a[c]++;
		}
		int maximum=0;
		for(auto p:a){
			maximum=max(maximum,p.second);
		}
		if(maximum > (s.length()+1)/2) cout<<-1<<endl;
		else cout<<1<<endl;
	}
}