#include <iostream>
using namespace std;

int main(void) {
    int d[100], s[100];
    int t, n, k, c, n1, n2;
    cin >> t;

    for (n1 = 0; n1 < t; n1++) {
        cin >> n;
        for (n2 = 0; n2 < n; n2++) {
            cin >> d[n2] >> s[n2];
        }

        c = 1; // Initialize c to 1
        k = 1; // Initialize k to 1

        for (n2 = 0; n2 < n; n2++) {
            k = d[n2]; // Set k to the current trap room

            // Calculate the difference between s and d, divided by 2
            int x = (s[n2] - d[n2]) / 2;

            if (x > 0) {
                // If x is positive, add it to k
                k += x;
            } else if (x <= 0) {
                // If x is non-positive, subtract 1 from k
                k--;
            }

            // Update c if k is less than or equal to c
            if (k <= c) {
                c = k;
            }
        }

        cout << c << "\n";
    }
    return 0;
}
