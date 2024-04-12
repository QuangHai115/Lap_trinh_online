#include<bits/stdc++.h>
#define QHaiz main
using namespace std;
int QHaiz(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<y<<" "<<(x-y)/2;
    }else if(x <= y){
        cout<<x<<" "<<(y-x)/2;
    }
}
