#include<bits/stdc++.h> 
using namespace std; 
struct mycompmin
{bool operator()(double a ,double b )
    {
        string one=to_string(a);
    string two=to_string(b);
    return one > two;
    }
};
struct mycompmax
{ bool operator()(double a ,double b )
    {
        string one=to_string(a);
    string two=to_string(b);
    return one < two;
    }
};
void prdoubleMedians(double arr[], double n) 
{
    priority_queue<double,vector<double>,mycompmax> s;
    priority_queue<double,vector<double>,mycompmin > g;
    double med = arr[0]; 
    s.push(arr[0]); 
    cout << med << endl; 
    for (int i=1; i < n; i++) 
    {   double x = arr[i]; 
        if (s.size() > g.size()) 
        { if (x < med) 
            { g.push(s.top()); 
                s.pop(); 
                s.push(x); 
            } 
            else
            g.push(x); 
    
            med = (s.top() + g.top())/2.0; 
        }
        else if (s.size()==g.size()) 
        { if (x < med) 
            { s.push(x); 
                med = (double)s.top(); 
            } 
            else
            { g.push(x); 
                med = (double)g.top(); 
            } 
        } 
        else
        { if (x > med) 
            { s.push(g.top()); 
                g.pop();
                g.push(x); 
            } 
            else
                s.push(x); 
                med = (s.top() + g.top())/2.0; 
        }
        cout << fixed<<setprecision(1)<<med << endl; 
    } 
}
int main() 
{ 
    int n;
    cin >> n;
    double arr[n];
    for(int i=0;i<n;i++){cin >> arr[i];}
    prdoubleMedians(arr, n); 
    return 0;
}