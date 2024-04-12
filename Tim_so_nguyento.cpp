#include<bits/stdc++.h>
#define QHaiz main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
bool isPrime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) return false;
    }
    return true;
}
int isPrime(int a,int b){
    for(int i=a;i<=b;i++){
        
    }
}
QHaiz(){
    hacktime;
    int n; cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        for(int i=x;i<=y;i++){
            if(isPrime(i) == true) cout<<i<<" ";
        }
        cout<<endl;
    }
}
