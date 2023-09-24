#include <iostream>
#include <cmath> // Include the cmath header for type casting
using namespace std;

int main(void)
{
    int a, b, t, l1;
    float c, d, x;

    cin >> t;

    for (l1 = 0; l1 <t; l1++)
    {
        cin >> a >> b >> c;
        d = (a + b) / 2;

        if((c>a)&&(c>b))
        {
            if (a==b) cout<<0<<endl;

            else cout<<1<<endl;
        }

        else if (a == b)
        {
            cout<<0<<endl;
        }

        else if (b<a)
        {
            x = (a - d);
            cout<<static_cast<int>(x / c) + static_cast<int>(fmod(x, c))<<endl;
        }
        else if (a < b)
        {
            x = (b - d);
            cout<<static_cast<int>(x / c) + static_cast<int>(fmod(x, c))<<endl;

        }
    }
}
