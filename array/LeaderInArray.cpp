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
    /*int i=0;
    int j=i+1;
    int leader=0;
    while(i<n && j<n){
        if(a[i]>a[j]){
            j++;
            leader=a[i];
        }
        else
        {i++;
        j++;}
    }
    cout<<leader;*/
    vector<int>v;
    int i=n-1;
    int max=a[i];
    while(i>=0){
        if(a[i]>=max){
            max=a[i];
            v.push_back(max);
            i--;
        }
        else{
            i--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}