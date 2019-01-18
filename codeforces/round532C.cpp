#include<bits/stdc++.h>
# define PI  3.14159265358979323846
using namespace std;
int main(){
    double n,r;
    cin >> n >> r;
    double angle=360/n;
    angle=angle/2;
    angle=angle*PI/180;
    double sinn=sin(angle);
    double R=r*sinn/(1-sinn);
    cout<<setprecision(8)<< R;
}