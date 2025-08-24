#include <bits/stdc++.h>
using namespace std;
int nguyenam(char c){
	return c=='A' || c=='E';
}
int check(string a){
	for(int i=1;i<a.length()-1;i++){
		if(nguyenam(a[i]) && !nguyenam(a[i-1]) && !nguyenam(a[i+1])) return 0;
		
	}
	return 1;
}
int main(){
	char c;
	cin>>c;
	string a;
	a.resize(c-'A'+1);
	a[0]='A';
    for(int i=1;i<a.length();i++){
    	a[i]=a[i-1]+1;
	}
	do{
		if(check(a)) cout<<a<<endl;
	}while(next_permutation(a.begin(),a.end()));
}