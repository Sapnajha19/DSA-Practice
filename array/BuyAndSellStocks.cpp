#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int buy=a[0];
    int sell=a[0];
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]<buy){
            buy=a[i];
        }
        sell=a[i];
        ans=max(ans,(sell-buy));
    }
    cout<<ans;
    return 0;
}