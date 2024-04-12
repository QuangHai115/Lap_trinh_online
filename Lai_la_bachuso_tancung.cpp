#include<bits/stdc++.h>
#define QHaiz_UTC main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

long long P(long long a, long long n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0) {
        long long temp = P(a, n / 2) % 1000;
        return (temp * temp) % 1000;
    }
    long long temp = P(a, n / 2) % 1000;
    return (((temp * temp) % 1000) * a) % 1000;
}

QHaiz_UTC() {
    long long n, a;
    cin >> a >> n;
    cout<<setw(3)<<setfill('0')<<fixed<<P(a,n);
    return 0;
}