#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int s=a[0][0];
int e=a[n-1][n-1];
if(k==n*n){
    return e;
}
//int m=s+(e-s)/2;
while(s<e){
    int m=s+(e-s)/2;
    int smaller=0;
    for(int i=0;i<n;i++){
        smaller+=lower_bound(a[i],a[i]+n,m)-a[i];
    }
    if(smaller<k){
        s=m+1;
    }
    else{
        e=m;
    }
}
cout<<s-1;
    /*vector<int>v;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        v.push_back(a[i][j]);
    }
}
sort(v.begin(),v.end());
cout<<v[k-1];*/
    return 0;
}