#include <iostrea>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, l;

    cin >> n >> l;
    int a[n], b;

    for (b = 0; b < n; b++)
        cin >> a[b];

    int len=sizeof(a)/sizeof(a[0]);

    sort(a,a+len);

    double high=0;

    for(b=0; b<n; b++)
    {
        if ((a[b+1]-a[b])>high)
            high=a[b+1]-a[b];
    }
    if (a[0]>(high/2))
        high=2*a[0];

    if ((l - a[n-1])>(high/2))
        high=2*(l-a[n-1]);

    cout<<high/2;
}
