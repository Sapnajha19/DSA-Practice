#include<iostream>
using namespace std;
int zmain(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][i];
        }
    }
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}