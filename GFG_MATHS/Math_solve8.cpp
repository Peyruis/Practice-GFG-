//
// Created by Christian R. Apaza Turpo on 7/09/26.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#define ll long long
#define i64 int64_t

using namespace std;


int digitsInFactorial(int n) {
    // code here

    i64 factorial = 0;

    for (i64 i = 1; i <= n; ++i) {
        factorial *= i;
    }


    return factorial;
}


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//     ll n = 120;
//
//     double val = 0.0;
//     for (i64 i = 2; i <= n; ++i) {
//         val += log10(i);
//     }
//
//     cout << (ll) val + 1 << endl;
// }
