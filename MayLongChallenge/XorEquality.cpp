#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>

using namespace std;
#define ll long long
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

// int check(ll num)
// {
//     if((num^(num+1))==((num+2)^(num+3)))
//     return 1;
//     else 
//     return 0;
// }


/*
This question is totaly bases on modular expometiation mean a^b % m 

*/

ll modularexpo(ll n)
{
    ll res=1,a=2;
    while(n>0)
    {
        if(n&1)
        {
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        n=n>>1;
    }
    return res;
}
int main()
{
    unsigned ll cases,i,n,ans,p;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        cout<<modularexpo(n-1)<<endl;

    }

    return 0;
}