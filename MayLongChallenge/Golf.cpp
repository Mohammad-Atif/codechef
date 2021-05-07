#include<bits/stdc++.h>
using namespace std;

void solve(int n,int x,int k)
{
    n++;
    if(x%k==0 || (n-x)%k==0)
    printf("YES\n");
    else
    printf("NO\n");
}
int main()
{
    int cases,n,x,k;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d%d%d",&n,&x,&k);
        solve(n,x,k);
    }

    return 0;
}