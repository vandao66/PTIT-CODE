#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    int cnt=0;
    int check=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    if(k==a[i]){
    cnt++;
    check=1;
    }
    }
    if(!check) cout<<-1<<endl;
    else cout<<cnt<<endl;
    }
}