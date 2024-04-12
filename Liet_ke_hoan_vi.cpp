#include <bits/stdc++.h>
#define QHaiz main
#define ll long long
#define M 1000000007
#define hacktime                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                 \
    cout.tie(NULL)
using namespace std;
int a[100] = {};

void Try(int *x, int k, int n) {
    if (k - 1 == n) {
        for (int i = 1; i < k; i++)
            cout << x[i];
        cout << "\n";
        return;
    }
    for (int t = 1; t <= n; t++) {
        if (a[t] == 0) {
            x[k] = t;
            a[t] = 1;
            Try(x, k + 1, n);
            a[t] = 0;
        }
    }
}

QHaiz() {
    hacktime;
    int n, x[100];
    cin >> n;
    Try(x, 1, n);
    return 0;
}
