#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

int QHaiz() {
    int n;
    cin >> n;
    int x = 1;
    while ((x * (x + 1)) / 2 <= n) {
        x++;
    }
    int sum=x*(x+1)/2;
	if(x%2==1) cout<<sum-n<<" "<<x+1-(sum-n);
	if(x%2==0) cout<<x+1-sum+n<<" "<<sum-n;
}