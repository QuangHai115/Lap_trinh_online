#include<bits/stdc++.h>
#define QHaiz main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

ll delete(ll *a){
    string x = to_string(*a);
    string kq;
    for(char s: x){
        if(s != '0') kq+=s;
    }
    return stoi(kq);
}
QHaiz(){
    hacktime;
    ll id1,id2;
    cin>>id1>>id2;
    ll tong = id1+id2;
    if(delete(&id1) + delete(&id2) == delete(&tong)) cout<<"YES";
    else cout<<"No";
    
}