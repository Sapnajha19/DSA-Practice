#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
        swap(a[l],a[h]);
        l++;
        h--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,n);
    return 0;
}