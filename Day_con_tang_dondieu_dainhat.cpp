#include"bits/stdc++.h"
#define QHaiz main
#define ll long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    int n,x;
    vector<int> A;
    cin>>n;
    while(n--){
        cin>>x;
        if(A.empty() or A.back()<x)  A.push_back(x);
        else{
            auto p=lower_bound(A.begin(),A.end(),x);
            *p=x;
        }
    }
    cout<<A.size();
}