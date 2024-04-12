#include"bits/stdc++.h"
#define QHaiz main
#define ll long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    int n,x;
    map<int,int> A;
    cin>>n;
    while(n--){
        cin>>x;
        auto it=A.upper_bound(-x);
        if(it==A.end()) cout<<0<<"\n";
        else cout<<-(*it).first<<" "<<(*it).second<<"\n";
        A[-x]++;
    }
}