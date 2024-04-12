#include"bits/stdc++.h";
using namespace std;
int main(){
   int n;
   cin>>n;
   long a[n+5], L[n+5], R[n+5];
   fill(L, L + n + 5, 0);
   fill(R, R + n + 5, 0);
   for(int i=1;i<=n;i++){
   		cin>>a[i];
   }
   for(int i=1;i<=n;i++){
   		L[i]= max(L[i-1], a[i]);
   }
   for(int i=n;i>=1;i--){
   		R[i]=max(R[i+1], a[i]);
   }
   int ketqua =0;
   for(int i=1;i<=n;i++){
   		int m=min(L[i-1],R[i+1]);
   		if(m>a[i]) ketqua+=m-a[i];
   }
   cout<<ketqua;
}
