#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int ans=a[0];  //bcz if there is only one elemnet in the array and that is also negative,then that would be the sum
    for(int i=0;i<n;i++){
        sum+=a[i];
         ans=max(ans,sum); //isko upar likha qki agr sare elements -ve hi h to vo km se km unka max sum store kr ske
        if(sum<=0){
            sum=0;
        }
    }
    cout<<ans;
    return 0;
}