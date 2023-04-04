#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int frq[26]={0};
    for(int i=0;i<s.size();i++){
        frq[s[i]-'a']++;
    }
    string str="";
    for(int i=0;i<26;i++){
        if(frq[i]>0){
        int c=frq[i];
        while(c--){
            str.push_back(i+'a');
        }
    }
    }
    cout<<str;
    return 0;
}