#include <bits/stdc++.h>
using namespace std;
int check(string s){
	for(int i=0;i<s.length()-1;i++){
		if(abs((s[i+1]-'0') - (s[i]-'0'))==1) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		s.resize(n);
		s[0]='1';
		for(int i=1;i<n;i++) s[i]=s[i-1]+1;
		do{
			if(check(s)) cout<<s<<endl;
		}while(next_permutation(s.begin(),s.end()));
	}
}