#include<iostream>
using namespace std;
// First find the row which have the maximum no of 1s and put them in ans variable
// Then check which is the first row which has sum of 1s equal to ans
int rowWithMax1(int m, int n,int a[3][3]){
    int ans=0;
    int index=0;
    for(int i=0;i<m;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                c++;
                //index=i;
            }
            ans=max(ans,c);
            if(ans==c && c!=0){
                index=i;
            }
        }
    }
    for(int i=0;i<m;i++){
        int c1=0;
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                c1++;
            }
            if(ans==c1 && c1!=0){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<rowWithMax1(m,n,a);
    return 0;
}