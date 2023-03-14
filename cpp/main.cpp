/*  -------------------------------------------
    @ Name : Nawab Khairuzzaman Mohammad Kibria
    @ CSE, BRUR
    @ Mar 2023
    ------------------------------------------- */

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
 
typedef long long  ll;
typedef double     dl;
typedef string     str;
typedef char       ch;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define nn "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i < b; i++)
#define tc ll t;cin>>t;while(t--)

#define  fast ios_base::sync_with_stdio(false); cin.tie(NULL)


double solveEquation(double cofficient[], int degree, double x){
    double result = 0;
    for(int i=0;i< degree ;i++) {
        result = result + (pow(x,i) * cofficient[i]);
    }
    return result;
}


void solve()
{
    cout<<"Enter the degree of the equation: ";
    int degree;
    cin>>degree;
    degree++;
    double cofficient[degree];
    cout<<"Enter the cofficients of the equation: ";
    for(int i=degree-1; i>=0; i--) {
      cout<<"x^"<<i<<" = ";
      cin>>cofficient[i];
      cout<<endl;
    }

    double error,x1,x2,x0,f1,f2,f0;
    cout<<"Enter the brackets"<<endl;
    cout<<"x1 = ";
    cin>>x1;
    cout<<"x2 = ";
    cin>>x2;
    cout<<endl;
    cout<<"Enter the error: ";
    cin>>error;
    cout<<endl;

    f1 = solveEquation(cofficient,degree,x1);
    f2 = solveEquation(cofficient,degree,x2);

    if(f1*f2 > 0) {
        cout<<"No root in the given interval"<<endl;
        return;
    }else{
        while(true) {
            if(abs(x2-x1) / x2 <= error) {
                cout<<"Root is: "<<x0<<endl;
                break;
            }
            x0 = (x1+x2)/2;
            f0 = solveEquation(cofficient,degree,x0);
            if(f1*f0 < 0) {
                x2 = x0;
            }else{
                x1 = x0;
                f1 = f0;
            }
        }
    }
}
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fast;
    solve();
    return 0;
}