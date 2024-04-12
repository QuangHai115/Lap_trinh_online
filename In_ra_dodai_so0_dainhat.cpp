#include<bits/stdc++.h>
#define QHaiz main

#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    int n;cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dem0=0;
    int max_dem0=0;
    if(n>0){
    	for(int i=0;i<n;i++){
        if(a[i] == 0){
            dem0 ++;
            max_dem0=max(dem0,max_dem0);
        }else dem0=0;
    }
    cout<<max_dem0;
	}
    else if(n==0) cout<<0;
}