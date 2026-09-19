//
// Created by Christian R. Apaza Turpo on 12/09/26.
//

#include <iostream>
#include <string>
#include <map>


#define ll long long
#define i64 int64_t

using namespace std;

//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//
//     i64 n;
//     cin >> n;
//
//
//     vector<i64> small, large;
//
//     for (i64 i = 1; i * i <= n; ++i) {
//         if (n % i == 0) {
//             small.push_back(i);
//             if (i * i != n) {
//                 large.push_back(n / i);
//             }
//         }
//     }
//
//
//     for (auto val : small ) {
//         cout<<val<<"\n";
//     }
//
//     ll len = large.size();
//     for (i64 i = len - 1 ; i>= 0 ; --i) {
//         cout<<large[i]<<"\n";
//     }
//
//
//
//     return 0;
// }
