#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c, d, e, n;
    e=0;
    cin>>a;
    for (b=0;b<a;b++)
    {
        d=0;
        for (c=0;c<3;c++)
        {
            cin>>n;
            if (n==1)
                d++;
            n=0;
        }
        if (d>=2)
            e++;
    }
    cout<<e;
}
