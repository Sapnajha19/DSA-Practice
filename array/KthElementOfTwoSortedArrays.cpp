#include<bits/stdc++.h>
using namespace std;
// int f(int a1[],int n,int a2[],int m,int k){
//     int s=0;
//     ine e=
// }

//tc-o(n), sc-O(1)
int findK(int a1[],int n,int a2[],int m,int k){
    int i=0;
    int j=0;
    int c=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            c++;
            if(c==k){
                return a1[i];
            }
            i++;
        }
        else{
            c++;
            if(c==k){
                return a2[j];
            }
            j++;
        }
    }
    //if a2 is traversed completely
    while(i<n){
        c++;
        if(c==k){
            return a1[i];
        }
        i++;
    }
    //if a1 is traversed completely
    while(j<n){
        c++;
        if(c==k){
            return a2[j];
        }
        j++;
    }
}

//tc-O(n),sc-O(n)
int kthe(int a1[],int n,int a2[],int m,int k){
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(a1[i]);
    }
    for(int i=0;i<m;i++){
        v.push_back(a2[i]);
    }
    sort(v.begin(),v.end());
    return v[k-1];
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a1[n];
    int a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    cout<<kthe(a1,n,a2,m,k)<<endl;
    cout<<findK(a1,n,a2,m,k);
    return 0;
}