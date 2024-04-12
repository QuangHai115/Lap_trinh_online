#include<bits/stdc++.h>
#define code { ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL); }

using namespace std;
typedef long long ll;

ll uoc_le(ll n){
	ll sum = 0;
	for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i%2==1)
        sum+=i;
    }   
	return sum;
}
ll cnt[100001];
int main(){
	code
	for(ll i=1; i<100001; i++)
		cnt[i] = uoc_le(i);
	ll t;cin>>t;
	while(t--){
		ll a, b, tong = 0;cin>>a>>b;
		for(ll i=a; i<=b; i++)
			tong += cnt[i];
		cout<<tong<<endl;
	}
	return 0;
}