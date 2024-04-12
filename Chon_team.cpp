#include"bits/stdc++.h"
#define QHaiz main
#define ll long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void chonTeam(const vector<string> &s){
    vector<int> p = {'M','A','R','C','H'};
    int count=0;
    
    for(int i=0;i<p.size();i++){
        for(int j=i+1;j<p.size();j++){
            for(int t=j+1;t<p.size();t++){
                if(s[i][0] != s[j][0] && s[j][0] != s[t][0] && s[t][0] != s[i][0] 
                && find(p.begin(),p.end(), s[i][0] != p.end())
                && find(p.begin(),p.end(), s[j][0] != p.end())
                && find(p.begin(),p.end(), s[t][0] != p.end())
                 )
                count++;
            }
        }
    }
    return count;
}
int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;
    
    vector<string> students(N);
    cout << "Enter the names of students: ";
    for (int i = 0; i < N; ++i) {
        cin >> students[i];
    }
    
    int ways = countTeams(students);
    cout << "Number of ways to choose a team: " << ways << endl;

    return 0;
}