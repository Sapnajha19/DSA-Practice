#include<iostream>
using namespace std;
bool anagram(string s){
    int frq[26]={0};
    int e=0;
    for(int i=0;i<s.size();i++){
        frq[s[i]-'a']++;
    }
    if(s.size()%2==0){
    for(int i=0;i<26;i++){
        if(frq[i]%2!=0){
            return 0;
        }
    }
}
else{
    for(int i=0;i<26;i++){
        if(frq[i]%2!=0){
            e++;
            if(e>1){
                return 0;
            }
        }
    }
}
return 1;
}
int main(){
    string s;
    cin>>s;
    cout<<anagram(s);
    return 0;
}