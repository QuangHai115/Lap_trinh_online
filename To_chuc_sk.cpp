#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
typedef pair<int,int> sk;
#define bd second
#define kt first
bool cmp(sk a, sk b) {
    return a.kt < b.kt;
}
QHaiz(){
    hacktime;
    int n;
    cin >> n;
    int res = 0, x = -INT_MAX, y = -INT_MAX;
    sk A[n];
    for(auto &a : A) 
        cin >> a.bd >> a.kt;
    sort(A, A + n, cmp);
    for(auto a : A) {
        if(x < y) 
            swap(x, y);
        if(a.bd > x) {
            res++;
            x = a.kt;
        }
        else if(a.bd > y) {
            res++;
            y = a.kt;
        }
    }
    cout << res;
    return 0;
}
