#include<bits/stdc++.h>
#define QHaiz main
#define ll int
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    double triangle[3][2]; 
    double M[2]; 

    for (int i = 0; i < 3; ++i) {
        cin >> triangle[i][0] >> triangle[i][1];
    }

    cin >> M[0] >> M[1];

    double maxDistance = 0;
    double dist =0;
    double vitri=0;
    for (int i = 0; i < 3; ++i) {
        dist = sqrt(pow(M[0] - triangle[i][0], 2) + pow(M[1] - triangle[i][1], 2));
        if (dist > maxDistance) {
            maxDistance = dist;
            vitri=i;
        }
    }
    cout<<triangle[vitri][0]<<" "<<triangle[vitri][1];
   
    return 0;
}
