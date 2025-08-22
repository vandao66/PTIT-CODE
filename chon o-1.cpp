#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		int b[n*n];
		int l=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				b[l++]=a[i][j];
			}
		}
	sort(b,b+l);
	int s=0;
	while(n--){
		s+=b[l-1];
		l--;
	}
	cout<<s<<endl;
	}
}