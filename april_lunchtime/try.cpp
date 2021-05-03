#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a='a';
    vector<int> aa{1,2,4};
    swap(aa[0],aa[2]);
    for(int i=0;i<3;i++)
    cout<<aa[i]; 

    return 0;
}