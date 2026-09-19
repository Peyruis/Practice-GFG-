//
// Created by Christian R. Apaza Turpo on 5/09/26.
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

using namespace std;


long long sumOfDivisors(long long n) {
    if (n == 1) return 1;

    ll sum = 1;
    int sumDiv = 0;

    for (ll i = 2; i <= n; i++) {
        sumDiv = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                sumDiv += j;
            }
        }
        sum += sumDiv;
    }

    return sum;
}


long long solvedMath5(long long n) {
    ll sum = 0;

    for (ll i = 1; i <= n; i++) {
        sum += i * (n / i);
    }

    return sum;
}

//
// int main() {
//     int n = 4;
//     // 1 2 3 4
//     // 1 = 1;
//     // 2 = 1 + 2;
//     // 3 = 1 + 3;
//     // 4 = 1  + 2 + 4
//     ll sum = 1;
//     int sumDiv = 0;
//
//     for (int i = 2; i <= n; i++) {
//         sumDiv = 0;
//         for (int j = 1; j <= i; j++) {
//             if (i % j == 0) {
//                 sumDiv += j;
//             }
//         }
//         sum += sumDiv;
//     }
//
//     cout<<sum;
//
//     return 0;
// }
