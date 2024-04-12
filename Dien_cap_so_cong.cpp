#include<bits/stdc++.h>
#define QHaiz main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
ll a[1000001];
QHaiz(){
    hacktime;
    ll n = 0;
    ll x;
    while(cin>>x){
//     if (x==-1) break;
        a[n++] = x;
    }
    ll id1,id2;
    for(ll i=0;i<n;i++){
       if(a[i] != 0){
            id1=i;
            break;
       }
    }
    for(ll i=id1+1;i<n;i++){
       if(a[i] != 0){
            id2=i;
            break;
       }
    }
    ll d=(a[id2]-a[id1])/(id2-id1);
    ll start = (a[id1]-d*(id1));
//    cout<<start;
    	for(ll i=0;i<n;i++){
    		cout<< start + i*d<<" ";
	 }
}
