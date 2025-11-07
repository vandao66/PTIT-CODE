#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		int minx=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minx]){
				minx=j;
			}
		}
		swap(a[minx],a[i]);
		cout<<"Buoc "<<i+1<<": ";
		for(int c:a) cout<<c<<" ";
		cout<<endl;
	}
}