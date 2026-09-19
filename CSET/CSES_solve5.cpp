//
// Created by Christian R. Apaza Turpo on 11/09/26.
//

#include <iostream>
#include <string>
#include <map>


#define ll long long
#define i64 int64_t

using namespace std;


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//
//     // spiral
//
//     int t;
//     cin>>t;
//
//     while (t--) {
//
//         ll x ,y, ans;
//         cin>>x>>y;
//
//         // z is equals to layer result.
//       if (x <= y) {
//
//           if (y%2 == 0) { // y is even
//                 ans = (y-1)*(y-1) + x;
//           } else { // y is odd
//               ans = (y*y) -x +1;
//           }
//       } else {
//
//           if (x%2 == 0) { // x is even
//
//               ans = (x*x) - y +1;
//           } else { // x is odd
//             // 3 -> 2*2 = 4 + 1
//               ans = (x-1)*(x-1) +y;
//
//           }
//
//       }
//
//         cout<<ans<<"\n";
//
//     }
//
//     return 0;
// }