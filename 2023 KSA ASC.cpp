#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    string k_str;
    cin >> k_str;

    double epsilon = 1e-6;
    double k = stod(k_str); // Convert k to a double

    int p = round(k * 1e6);  // Scale up k to an integer
    int q = 1e6;             // Initial denominator

    // Handle repeating decimals
    string k_fractional = k_str.substr(k_str.find('.') + 1); // Extract fractional part

    for (int i = 1; i <= 9; i++) {
        string pattern = k_fractional.substr(0, i);

        if (k_fractional.find(pattern) != string::npos && k_fractional.find(pattern) < 6) {
            int repeat_length = pattern.size();
            q = pow(10, repeat_length) - 1;
            p = round(k * q);
            break;
        }
    }

    int common = gcd(p, q);  // Calculate the greatest common divisor
    p /= common;
    q /= common;

    cout << "YES" << endl;
    cout << p << " " << q << endl;

    return 0;
}
