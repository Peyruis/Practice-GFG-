//
// Created by Christian R. Apaza Turpo on 11/09/26.
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






//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//     string word;
//
//     cin>>word;
//
//     auto len = word.length();
//
//
//     char val = ' ';
//     ll mx = 0;
//     ll cont=0;
//
//     for (int i = 0;i <= len; ++i) {
//
//         if (word[i] == val) { // A
//             cont++;
//         } else {
//             val = word[i];
//             mx = max(cont,mx);
//             cont=1;
//         }
//
//
//     }
//
//     cout<<mx<<endl;
//
//
//
//     return 0;
// }