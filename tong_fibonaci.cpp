#include<bits/stdc++.h>
#define QHaiz main
#define ll long long
#define M 1000000007 
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

void fibonaci(ll n, ll &a, ll &b){
    if(n==0){a=1;b=0;return;}
    ll x,y;
    fibonaci(n/2,x,y);{
	a=(x*x %M + y*y%M)%M;
    b=(x*y%M + y*(x-y)%M)%M; 
	}
    if(n%2){a=(a+b)%M;b=(a-b)%M;}
}

QHaiz(){
    ll n;cin>>n;
    ll a,b;
    fibonaci(n+2,a,b);
    cout<<(a-1+M)%M;
   
}