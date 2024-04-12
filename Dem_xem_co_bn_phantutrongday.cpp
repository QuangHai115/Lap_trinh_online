#include<bits/stdc++.h>
#define QHaiz_UTC main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
QHaiz_UTC(){
    hacktime;
    int n;cin>>n;
    int c,d;cin>>c>>d;
    int a[n+5];
    int dem=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if((c*-1.0)<=a[i]<=d) dem++;
    }
}