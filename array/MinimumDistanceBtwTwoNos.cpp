#include<bits/stdc++.h>
using namespace std;
bool find(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,y;
    cin>>x>>y;
    int d1=-1;
    int d2=-1;
    int mnd=INT_MAX;
    if(find(a,n,x)==0 || find(a,n,y)==0){
        cout<<-1;
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]==x){
                d1=i;
            }
            if(a[i]==y){
                d2=i;
            }
            if(d1!=-1 && d2!=-1){
                mnd=min(mnd,abs(d1-d2));
            }
        }
    }
    cout<<mnd;
    return 0;
}