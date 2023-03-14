/*  -------------------------------------------
    @ Name : Nawab Khairuzzaman Mohammad Kibria
    @ CSE, BRUR
    @ Nov 2022
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

void solve()
{
    string text;
    int upperCase = 0, lowerCase =0;
    cin>>text;
    for(int i=0; i<text.length(); i++){
        if((int)text[i] <= 90){
            upperCase++;
        }else{
            lowerCase++;
        }
    }
    if(upperCase > lowerCase){
        transform(text.begin(), text.end(), text.begin(), ::toupper);
    }else{
        transform(text.begin(), text.end(), text.begin(), ::tolower);
    }
    cout<<text<<nn;
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