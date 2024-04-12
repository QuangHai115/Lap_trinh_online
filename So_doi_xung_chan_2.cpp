#include<bits/stdc++.h>
#define QHaiz main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    ll x;
    cin>>x;
    string s = to_string(x);
    reverse(s.begin(),s.end());
    cout<<x<<s;
}
