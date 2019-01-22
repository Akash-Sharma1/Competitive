#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int n=str.length();
    int zero=0;
    int one=0;
    for(int k=0;k<n;k++){
        if(str[k]=='1'){
            one++;
            if(one==2){
                one=0;
                cout<< "4 3\n";
            }
            else if(one==1){
                cout << "4 1\n";
            }
        }
        else{
            zero++;
            if(zero==1){
                cout << "1 1\n";
            }
            else if(zero==2){
                cout << "1 2\n";
            }
            else if(zero==3){
                cout << "1 3\n";
            }
            else if(zero==4){
                cout << "1 4\n";
                zero=0;
            }
        }
    }
}