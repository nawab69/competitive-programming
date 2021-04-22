/*  -------------------------------------------
    @ Name : Nawab Khairuzzaman Mohammad Kibria
    @ CSE, BRUR
    @ APRIL 2021
    ------------------------------------------- */

#include <bits/stdc++.h>
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
    tc{
        ll n , k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n>2){
            ll p {0}, q {n-1};
            while(arr[p] == 0){
                p++;
            }
            while(arr[q] == 0){
                q--;
            }
            arr[p] -=1;
            arr[q] +=1;
        }else{
            arr[0] -=1;
            arr[1] +=1;
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;

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