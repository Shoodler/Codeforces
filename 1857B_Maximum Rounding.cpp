#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        s='0'+s;
        int n=s.size();

        for(int k=s.size()-1;k>=0;k--)
        {
            if(s[k]>='5')
                s[k-1]++,n=k;
        }

        for(int k=(s[0]=='0');k<s.size();k++)
        {
            if (k>=n)
                cout<<'0';
            else
                cout<<s[k];
        }
        cout<<"\n";
    }
}
