#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        stack<char> st;
        for(int i=0;i<str.length();i++){
            if((int)str[i]>=97 && (int)str[i]<=97+26){cout<<str[i];}
            else if(str[i]==')'){
                while(!st.empty() && st.top()!='('){
                    cout <<st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                st.push(str[i]);
            }
        }
        cout << endl;
    }
}
