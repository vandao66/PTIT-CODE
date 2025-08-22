#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=s.length()-1;
		while(i>=0){
			if(s[i]=='1'){
				s[i]='0';
				break;
			}
			else{
				s[i]='1';
			}
			i--;	
    	}
    	cout<<s<<endl;
	}
	return 0;
}