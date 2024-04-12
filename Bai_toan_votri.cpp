#include<bits/stdc++.h>
#define QHaiz main
#define ll long long
using namespace std;

QHaiz(){
    ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL); 
	ll n;
    cin>>n;
    bool mark[n+5] ={};
    ll *a = new ll[n+5];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll dem1 =0, dem2=0;
    for(int i=1;i<=n;i++){
        if(a[i]%2 == 1 ){
            if( a[i]-2 > 0 && !mark[a[i]-2] || a[i]-2 <0 ){
                dem1++;
            }
            mark[a[i]]=1;
        }
        else{
            if(a[i]-2 > 0 && !mark[a[i]-2] || a[i]-2 < 1 ){
                dem2++;
            }
            mark[a[i]]=1;
        }
    }
    
    cout<<dem1<<"\n"<<dem2;

}