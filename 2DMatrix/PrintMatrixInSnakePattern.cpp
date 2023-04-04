#include<iostream>
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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                continue;
            }
            else{
                if(j<n/2){
                swap(a[i][j],a[i][n-j-1]);}
            }
        }
    }
    vector<int>v;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            v.push_back(a[i][j]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}