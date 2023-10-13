//----//Shoodler//----//

#include  <bits/stdc++.h>
using namespace std;
long long a[100001], i, n, k;

int main(void)
{
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>k;
            a[k]+=k;
        }
        for(i=2;i<100001;i++)
            a[i]=max(a[i-1], a[i]+a[i-2]);
        cout<<a[i-1];
}
