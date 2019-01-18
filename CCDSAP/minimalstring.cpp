#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int freq[26]={0};
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    int ind=0;
    stack<char> st;
    for(int i=0;i<str.length();i++){
        for(int i=0;i<26;i++){
            if(freq[i]==0){continue;}
            st.push(str[i]);
            freq[str[i]-97]--;
        }
    }
}