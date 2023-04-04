#include<iostream>
using namespace std;
//brute force tc-O(n)
int peak(int a[],int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        int m= max(a[0],a[1]);
        if(m==a[0]){
            return 0;
        }
        else{
            return 1;
        }
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            return i;
        }
    }
}

//binary search
int peakele(int a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(m>0 && m<n-1){
        if(a[m]>a[m-1] && a[m]>a[m+1]){
            return m;
        }
        else if(a[m]>a[m-1]){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    else if(m==0){
        if(a[0]>a[1]){
            return 0;
        }
        return 1;
    }
    else if(m==n-1){
        if(a[n-1]>a[n-2]){
            return n-1;
        }
        return n-2;
    }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<peak(a,n);
    return 0;
}