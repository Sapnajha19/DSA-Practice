#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i<j){
            swap(a[i][j],a[j][i]);
        }
    }
}
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i<n/2){
        swap(a[i][j],a[n-i-1][j]);
    }
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}