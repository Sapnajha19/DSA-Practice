#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    int mx=INT_MIN;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            c=a[i];
        }
        if(a[i]>mx){
            mx=a[i];
        }
    }
    int arr[mx]={0};
    for(int i=0;i<n;i++){
        arr[a[i]]=1;
    }
    for(int i=1;i<mx;i++){
        if(arr[i]==0){
            ans=i;
            break;
        }
    }
    cout<<c<<" "<<ans;
    return 0;
}