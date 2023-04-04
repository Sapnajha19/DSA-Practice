#include<bits/stdc++.h>
#include<vector>
using namespace std;
int kThSmallestFactor(int N , int K) {
        // code here
        //vector<int>v;
        int c=0;
        
        for(int i=1;i<sqrt(N);i++){
            if(N%i==0){
                c++;
                if(c==K){
                    return i;
                    
                }
            }
        }
        for(int i=sqrt(N);i>=1;i--){
            if(N%i==0){
                
                c++;
                if(c==K)
                    return N/i;
                
                }
            
        }
        return -1;}
int main(){
    int n,k;
    cin>>n>>k;
    //brute force
    vector<int>v;
    int c=0;
    //To find factors of n
    for(int i=1;i<=n;i++){
        if(n%i==0){
            v.push_back(i);   //to put all the factors in a vector
            c++;
        }
    }
    if(k<=c){
        cout<<v[k-1]<<endl;
    }
    else
    {cout<<-1<<endl;}
    cout<<kThSmallestFactor(n,k);
    return 0;
}