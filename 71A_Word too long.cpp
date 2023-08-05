#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
    int a, b, c;
    char ch[101][101];

    cin>>a;
    for(b=0;b<a;b++)
    {
        cin>>ch[b];
    }

    for(b=0;b<a;b++)
    {
        c=(strlen(ch[b]));
        if (c>10)
            cout<<ch[b][0]<<(c-2)<<ch[b][c-1]<<endl;
        else
            cout<<ch[b]<<endl;
    }
}
