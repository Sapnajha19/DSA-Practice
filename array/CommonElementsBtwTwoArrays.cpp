#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> common(int a[],int n,int b[],int m){
    vector<int>v;
    sort(a,a+n);
    sort(b,b+n);
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            v.push_back(a[i]);
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return v;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    common(a,n,b,m);
    return 0;
}