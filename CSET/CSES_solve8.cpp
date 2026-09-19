//
// Created by Christian R. Apaza Turpo on 16/09/26.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>

#define ll long long
#define tt int64_t

using namespace std;

bool is_prime(tt n) {
    if (n < 2) return false;


    for (tt p = 2; p * p <= n; p += p % 2 + 1) {
        if (n % p == 0) {
            return false;
        }
    }

    return true;
}


// 6 -> 1 2 3 4 5 6

//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//     ll t;
//     cin >> t;
//
//     ll sum = (t * (t + 1)) / 2;
//
//     if (sum % 2 != 0) {
//         cout << "NO" << "\n";
//         return 0;
//     }
//
//     cout << "YES" << "\n";
//
//     vector<int> s1;
//     vector<int> s2;
//
//     ll s = sum / 2;
//
//     for (int i = t; i >= 1; --i) {
//         if (s >= i) {
//             s1.push_back(i);
//             s-=i;
//         } else {
//             s2.push_back(i);
//         }
//     }
//
//     cout<<s1.size()<<"\n";
//     for (auto  a : s1) {
//         cout<<a<<" ";
//     }
//     cout<<"\n";
//     cout<<s2.size()<<"\n";
//     for (auto  b : s2) {
//         cout<<b<<" ";
//     }
//
//
// }
