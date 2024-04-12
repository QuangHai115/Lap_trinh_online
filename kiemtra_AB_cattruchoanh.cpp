#include<bits/stdc++.h>
#define QHaiz main

#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    pair<double,double> p1;
    pair<double,double> p2;
    cin>>p1.first>>p1.second;
    cin>>p2.first>>p2.second;
    if(p1.first*p2.first < 0 && p2.second*p1.second <0 || p1.first == 0 && p2.second == 0 
    || p1.first == 0 && p2.second == 0 ) cout<<"YES";
    else cout<<"NO";
    
}