#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin>>n;
	vector<ll> a(n),c,l;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i%2!=0) c.push_back(a[i]);
		else l.push_back(a[i]);
	}
	
	sort(c.begin(),c.end());
	sort(l.begin(),l.end());
	int x=0,y=c.size()-1;
	for(int i=0;i<n;i++){
		if(i%2==0 && x<l.size()){
			cout<<l[x]<<" ";
			x++;
		}
		else if(i%2!=0 && y>=0){
			cout<<c[y]<<" ";
			y--;
		}
	}
}