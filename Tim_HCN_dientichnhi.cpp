#include<bits/stdc++.h>
#define QHaiz main

#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
class hcn{
    public:
        int x;
        int y;
        int s;
    void nhap(){
        cin>>x>>y;
    }
    void xuat(){
    	cout<<x<<" "<<y<<endl;
	}
    
};
bool soSanh(hcn a,hcn b){
	return a.s<b.s;
}
QHaiz(){
    hacktime;
    int n;cin>>n;
    hcn *h = new hcn[n+5];
    for(int i=0;i<n;i++){
        h[i].nhap();
        h[i].s=h[i].x*h[i].y;
    }
	sort(h,h+n,soSanh);
	int k = h[n-1].s;
	int vt=n-1;
	int nhi=INT_MIN;
	for(int i=0;i<n;i++){
		if(h[i].s != k && h[i].s>nhi) nhi=h[i].s;
	}
	
	if(n>2&& h[0].s != k){
		for(int i=0;i<n;i++){
		if(h[i].s == nhi ) h[i].xuat();
	}
	}
	else cout<<"NO";
	
}
