#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define int long long
using namespace std;

vector<bool> isPrime;

void sieveOfEratosthenes(int n) {
    isPrime.assign(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }
}

int countPrime(int n) {
    int res = 0;
    for (int p = 2; p <= n; p++) {
        if (isPrime[p] && n % p == 0)
            res++;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n + 5];
    int maxCount = 0;
    int result = -1;

    sieveOfEratosthenes(1000000); // Sàng Eratosthenes v?i n = 10^6

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int primeCount = countPrime(a[i]);
        if (primeCount > maxCount || (primeCount == maxCount && a[i] < result)) {
            maxCount = primeCount;
            result = a[i];
        }
    }
    cout << result;
    return 0;
}

