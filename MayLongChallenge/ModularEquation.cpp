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
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009


//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;


ll check(ll m,ll a,ll b)
{
    if(((m%a)%b)==((m%b)%a))
    return 1;
    else 
    return 0;
}

void solve(ll n,ll m)
{
    ll  ans=n-1,j;
    for(ll i=2;i<=n;++i)
    {
        for(j=i+1;j<=n;++j)
        {
            if(check(m,i,j)) 
            {
            ans++;

             cout<<i<<" "<<j<<endl;

            }
        }
        
    }
    printf("%lld\n",ans);
}

int main()
{
    ll cases,n,m;
    scanf("%lld",&cases);
    while (cases--)
    {
        scanf("%lld%lld",&n,&m);
        solve(n,m);
    }
    
    return 0;
}