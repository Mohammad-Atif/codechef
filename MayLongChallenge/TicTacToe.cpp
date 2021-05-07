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


int checkvertically(string first,string second,string third,char c)
{
    int ans=0;
    for(int i=0;i<3;i++)
    {
        if(first[i]==c && second[i]==c && third[i]==c )
        ans++;
    }
    return ans;
}

int checkhorizontal(string first,string second,string third,char c)
{
    int ans=0;
    if(count(all(first),c)==3)
    ans++;
    if(count(all(second),c)==3)
    ans++;
    if(count(all(third),c)==3)
    ans++;
    return ans;
}

int checkdiogonal(string first,string second,string third,char c)
{
    int ans=0;
    if(first[0]==c && second[1]==c && third[2]==c)
    ans++;
    if(first[2]==c && second[1]==c && third[0]==c)
    ans++;
    return ans;
}

void solve(string first,string second,string third)
{
    int x_count=0,o_count=0,diff,for_x,for_o,f;
    x_count=count(all(first),'X')+count(all(second),'X')+count(all(third),'X');
    o_count=count(all(first),'O')+count(all(second),'O')+count(all(third),'O');
    diff=x_count-o_count;
    if(diff>1 || diff<0)
    {
        cout<<3<<endl;
        return;
    }
    for_x=checkvertically(first,second,third,'X');
    for_o=checkvertically(first,second,third,'O');
    if(for_x==1 && for_o<1 && diff==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(for_x==1 && for_o<1 )
    {
        cout<<3<<endl;
        return;
    }
    if(for_o==1 && for_x<1 && diff==0)
    {
        cout<<1<<endl;
        return;
    }
    else if(for_o==1 && for_x<1 )
    {
        cout<<3<<endl;
        return;
    }
    if((for_o>1 || for_x>1)||(for_o==for_x && for_o>0))
    {
        cout<<3<<endl;
        return;
    }

    for_x=checkhorizontal(first,second,third,'X');
    for_o=checkhorizontal(first,second,third,'O');
    if(for_x==1 && for_o<1 && diff==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(for_x==1 && for_o<1 )
    {
        cout<<3<<endl;
        return;
    }
    if(for_o==1 && for_x<1 && diff==0)
    {
        cout<<1<<endl;
        return;
    }
    else if(for_o==1 && for_x<1 )
    {
        cout<<3<<endl;
        return;
    }
   if((for_o>1 || for_x>1)||(for_o==for_x && for_o>0))
    {
        cout<<3<<endl;
        return;
    }

    for_x=checkdiogonal(first,second,third,'X');
    for_o=checkdiogonal(first,second,third,'O');
    if((for_x==1 || for_x==2) && for_o<1 && diff==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(for_x==1 && for_o<1 )
    {
        cout<<3<<endl;
        return;
    }

    if(for_o==1 && for_x<1 && diff==0)
    {
        cout<<1<<endl;
        return;
    }
    else if(for_o==1 && for_x<1 )
    {
        cout<<3<<endl;
        return;
    }
   if((for_o>1 || for_x>1)||(for_o==for_x && for_o>0))
    {
        cout<<3<<endl;
        return;
    }


    if(count(all(first),'_') || count(all(second),'_') || count(all(third),'_'))
    cout<<2<<endl;
    else
    cout<<1<<endl;

}

int main()
{
    int cases;
    string first,second,third;
    cin>>cases;
    while(cases--)
    {
        cin>>first>>second>>third;
        solve(first,second,third);
    }
    return 0;
}