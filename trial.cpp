#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int L, n, p, maxv = 0, minv = 0;
    cin>>L;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>p;
        maxv = max(maxv, max(p, L - p + 1));
        minv = max(minv, min(p, L - p + 1));
    }
    cout<<minv<<" "<<maxv<<endl;

    return 0;
}