#include<bits/stdc++.h>
#define QHaiz main
using namespace std;
bool Test(int &x, int &y){
    int tich = x*y;
    int k = round(pow(tich,1.0/3));      
   if( k*k*k==tich ) return 1;
   else return 0;
}
int QHaiz(){
    int n;
    cin>>n;
    pair<int,int> x;
    for(int i=1;i<=n;i++){
        cin>>x.first>>x.second;
    }
    for(int i=1;i<=n;i++){
        if(Test(x.first,x.second) == 1 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
