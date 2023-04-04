#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=INT_MAX;
    int l=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<s)
        {s=a[i];}
        else if(a[i]>l)
        {l=a[i];}

    }
    cout<<s<<l;
    return 0;

}