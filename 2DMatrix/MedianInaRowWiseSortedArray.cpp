#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    vector<int>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(),v.end());
        
    
        cout<<v[v.size()/2];
    return 0;
}