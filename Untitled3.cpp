#include<bits/stdc++.h>
#define QHaiz_UTC main
#define int long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int tinhTongGiaTri(const string &s){
    string soHienTai="";
    int tong =0;
    for(char c :  s){
        if(c == '+'){
            tong+= stoi(soHienTai);
            soHienTai="";
        }
        else soHienTai+=c;
    }
    tong+=stoi(soHienTai);
    return tong;
}

void taoBieuThuc(string &s, int index, string bieuThucHienTai, vector<int> &tongALL){
    if(index == s.length()){
        tongALL.push_back(tinhTongGiaTri(bieuThucHienTai));
        return;
    }
    taoBieuThuc(s,index+1,bieuThucHienTai + "+" + s[index], tongALL);
    taoBieuThuc(s,index+1,bieuThucHienTai + s[index],tongALL);
}

int tongDay(string &s){
    vector<int> tongALL;
    taoBieuThuc(s,1,string(1,s[0]),tongALL);
    int tong=0;
    for(int x: tongALL){
        tong+=x;
    }
    return tong;
}

QHaiz_UTC(){
    hacktime;
    string n; cin>>n;
    cout<<tongDay(n);
    return 0;
}

