#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
int countPrime(int n) {
    int res = 0;
    bool isPrime[n + 5];
    fill(isPrime, isPrime + n + 5, true);
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        if (isPrime[p])
            res++;
    }
    return res;
}

int QHaiz() {
    int n; cin>>n;
    int a[n+5];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
    for(int i=n;i<n;i--){
        if(countPrime(a[i]) > max){
            k=i;
        }
    }
    cout<<a[k];
    return 0;
}