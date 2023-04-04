#include<iostream>
using namespace std;
//Approach 1: by counting no of 0,1 and 2 then iterating each count to change the elements to 0,1 and 2 accordingly.
/*void sort(int a[],int n){
int c0=0;
int c1=0;
int c2=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        c0++;
    }
    else if(a[i]==1){
        c1++;
    }
    else
    {c2++;}
}
int i=0;
while(c0--){
    a[i]=0;
    i++;
}
int j=i;
while(c1--){
    a[j]=1;
    j++;
}
int k=j;
while(c2--){
    a[k]=2;
    k++;
}
for(int i=0;i<n;i++){
    cout<<a[i];
}
}*/


//by Dutch National Flag Algorithm
void sort(int a[],int n){
    int l=0;
    int m=0;
    int h=n-1;
    for(int i=0;i<n;i++){
        if(a[m]==0){
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if(a[m]==1){
            m++;  
        }
        else
        {swap(a[h],a[m]);
        h--;}n //we are not incrementing m here, bcz after replacing with h, m can be 0, so we need to replace it with l
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
    sort(a,n);
    return 0;
}