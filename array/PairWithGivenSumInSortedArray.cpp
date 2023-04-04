#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int l=0;
    int r=n-1;
    int count=0;
    while(l<r){
        if((a[l]+a[r])>sum){
            r--;
        }
        else if((a[l]+a[r])<sum){
            l++;
        }
        else{
            count++;
            l++;
            r--;
        }
    }
    cout<<count;
    return 0;
}