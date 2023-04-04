#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(),v.end());
        vector<vector<int>>temp;
        int c=0;
        for(int i=0;i<n;i++){
            vector<int>v1;
            for(int j=0;j<n;j++){
                v1.push_back(v[c]);
                c++;
            }
            temp.push_back(v1);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<temp[i][j];
            }
            cout<<endl;
        }
    return 0;
}