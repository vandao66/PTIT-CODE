#include <bits/stdc++.h>
using namespace std;
int main(){
	string s="22022022";
	sort(s.begin(),s.end());
	do{
		if(s[4]=='0' || s[1]=='0' || s[3]=='0') continue;
		for(int i=0;i<2;i++) cout<<s[i];
		cout<<"/";
		for(int i=2;i<4;i++) cout<<s[i];
		cout<<"/";
		for(int i=4;i<s.length();i++) cout<<s[i];
		cout<<" ";
	}while(next_permutation(s.begin(),s.end()));
}