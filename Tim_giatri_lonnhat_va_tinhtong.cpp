#include<bits/stdc++.h>
#define QHaiz main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    int n;cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n==1) cout<<a[1]<<" "<<a[1];
}