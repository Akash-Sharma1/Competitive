#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int skip=1;
    for(int i=0;i<n;){
        skip++;
        cout << str[i];
        i+=skip;
    }
    return 0;
}