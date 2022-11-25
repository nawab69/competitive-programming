/*  -------------------------------------------
    @ Name : Nawab Khairuzzaman Mohammad Kibria
    @ CSE, BRUR
    @ Nov 2022
    ------------------------------------------- */

#include <bits/stdc++.h>
#include <string>
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
    int n, a = 0, d = 0;
    string str;
    cin>>n;
    cin>>str;

    std::string::iterator it;

    for(it = str.begin(); it != str.end(); it++) {
        if(*it == 'A') {
            a++;
        }
        else if(*it == 'D') {
            d++;
        }
    }
    cout<<(a>d ? "Anton" : a<d ? "Danik" : "Friendship")<<nn;

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