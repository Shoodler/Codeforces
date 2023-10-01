#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int g1=0,g2=0,g3=0,g4=0,t=0,n; cin>>n; //total n.o. grps
    
    while (n--)
    {
        int a; cin>>a; //enter group
        if(a==4) g4++;
        else if(a==3) g3++;
        else if(a==2) g2++;
        else g1++;
    }

    t+=g4;

    while(g2>1)
    {
        t++;
        g2-=2;
    }

    if(g3>g1)
    {
        t+=g3;
        g1=0;
    }
    else
    {
        t+=g3;
        g1-=g3;
    }

    while(g1>4)
    {
        t++;
        g1-=4;
    }

    while(g2!=0)
    {
        
	if(g1>2)
	{
            g1=g1-2;
            g2=0;
            t++;
        }
        else 
	{
            g2=0;
            g1=0;
            t++;
        }
    }
    
    while(g1!=0) 
    {
        g1=0;
        t++;
    }

    cout<<t<<endl;
}
