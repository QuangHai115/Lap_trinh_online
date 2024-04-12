#include<bits/stdc++.h>
#define QHaiz main
#define ll long long
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
struct Customer{
    ll h;
    ll m;
};
bool Compare(Customer a,Customer b){
	if(a.h == b.h) return a.m<b.m;
	return a.h<b.h;
}
QHaiz(){
	hacktime;
    ll n;cin>>n;
    vector<Customer> cus(n);
    for(ll i=0;i<n;i++){
        cin>>cus[i].h>>cus[i].m;
    }
    sort(cus.begin(),cus.end(),Compare);
    ll dem1 =0;
    ll dem2 =0;
    for(ll i=0;i<n;i++){
        if(i==0 ||(cus[i].h == cus[i-1].h && cus[i].m==cus[i-1].m)){
            dem1++;
        }else{
            dem2=max(dem2,dem1);
            dem1=1;
        }
    }
    dem2=max(dem2,dem1);
    cout<<dem2;
}
