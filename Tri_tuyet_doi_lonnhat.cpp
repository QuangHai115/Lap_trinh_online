#include<bits/stdc++.h>
#define QHaiz main

#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    int n;cin>>n;
    int a[n];
    int min=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sumPositive = abs(a[n-1]+a[n-2]);
    int sumNegative = abs(a[0]+a[1]);
    if(sumPositive>sumNegative) cout<<sumPositive;
    else cout<<sumNegative;
}