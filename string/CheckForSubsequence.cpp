#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int j=0;
    for(int i=0;i<b.length();i++){
        if(b[i]==a[j]){
            j++;
        }
    }
    if(j==a.length()){
        cout<<1;
    }
    else{
    cout<<0;}
    return 0;
}