#include<bits/stdc++.h>
#define QHaiz main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
   hacktime;
   ll n; cin>>n;
   ll dem0=0;
   ll dem1=0;
   ll max1=0;
   for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(x){
         ++dem0;
         --dem1;
      }
      else dem1++;
      dem1=max(dem1,0);
      max1=max(dem1,max1);
   }
   cout<<(dem0 == n ? dem0-1 : dem0 +max1);

 }