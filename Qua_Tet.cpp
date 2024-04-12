#include<bits/stdc++.h>
#define QHaiz main
#define ll long long
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

 QHaiz(){
    hacktime;
    ll n,m;
    cin>>n>>m;
    ll a[m+5];
        for(ll i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a,a+m);
        ll dis_min = a[n-1] - a[0];
        ll index = 0;
        for(ll i=1;i<=m-n;i++){
        	ll dis = a[i+n-1] - a[i];	 
           if(dis < dis_min){
           		dis_min = dis;
		   }
    	}
    	cout<<dis_min;
    
  }
 