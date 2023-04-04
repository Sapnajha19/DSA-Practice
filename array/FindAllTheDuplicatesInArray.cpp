#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
       v[a[i]]++;
    }
    vector<int>v1;
    for(int i=0;i<v.size();i++){
        if(v[i]>1){
            v1.push_back(i);
        }
    }
    if(v1.size()==0){
        v1.push_back(-1);
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" "<<endl;
        }
    }
    else{
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" "<<endl;
        }
    }
    return 0;
}