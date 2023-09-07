#include <iostream>
using namespace std;

int main(void)
{
    int n, k, b;
    cin>>n>>k;

    int a[51];
    for(b=0;b<n;b++)
        cin>>a[b];

    int c=0;
    for(b=0;b<n;b++)
    {
        if(a[b]>=a[k-1] && a[b]!=0)
            c++;
    }
    cout<<c;
}
