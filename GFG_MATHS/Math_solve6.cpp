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


int inSequence(int a, int b, int c) {
    // code here

    if (c == 0) { return a == b; }


    if ((b - a) % c == 0 && (b - a) / c >= 0) {
        return 1;
    } else {
        return 0;
    }
}

//
// int main() {
//
//     int a,b,c;
//
//     a = 17, b=49, c = 8;
//
//
//     if ((b - a) % c == 0 && (b - a) / c >= 0) {
//
//         cout<<"success";
//     } else {
//         cout<<"Failed";
//     }
//
//     return 0;
// }
