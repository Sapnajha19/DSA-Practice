#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];}
    }
    //for finding diagonal sum
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                sum+=a[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}