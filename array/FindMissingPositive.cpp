#include<bits/stdc++.h>
using namespace std;
bool find(int a[],int n,int k){
    for(int j=0;j<n;j++){
        if(a[j]==k){
            return 1;
        }
    }
    return 0;
}
int missing(int a[],int n){
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    for(int i=1;i<=mx;i++){
        if(find(a,n,i)==0){
            return i;
        }
    }
    if(mx<0){
        return 1;
    }
    else{
    return mx+1;}

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<missing(a,n);
    return 0;
}