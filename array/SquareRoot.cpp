#include<iostream>
using namespace std;
int root(int n){
    int s=0;
    int e=n;
    int ans=-1;
    if(n==1 or n==0){
        return n;
    }
    while(s<=e){
        int m=s+(e-s)/2;
        if(m*m<=n){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<root(n);
    return 0;
}