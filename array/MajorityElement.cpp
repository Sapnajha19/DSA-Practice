#include<iostream>
using namespace std;
//most optimal approach(Moore voting algorithm)
int majority(int a[],int n){
    int count=0;
        int curr=0;
    for(int i=0;i<n;i++){
        if(count==0){
            curr=a[i];
            count++;
        }
        else if(a[i]==curr){
            count++;
        }
        else if(a[i]!=curr){
            count--;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==curr){
            cnt++;
        }
    }
    if(cnt>n/2){
        return curr;
    }
    else{
        return -1;
    }
}

int major(int a[],int n){
    long long int ar[1000000]={0};   //this is absolutely correct but idk this cannot be able to create a 1000000 size array.
    for(int i=0;i<n;i++){  //this i snot an optimal algo
        ar[a[i]]++;
    }
    for(long long int i=0;i<1000000;i++){
        if(ar[i]>(n/2)){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   // cout<<majority(a,n)<<endl;
    cout<<major(a,n)<<endl;
    return 0;
}