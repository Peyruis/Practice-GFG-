#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>

#define ll long long int



using namespace std;

//
//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//
//     string str;
//
//     cin>>str;
//
//     size_t n = str.length();
//
//     char val = str[0];
//
//     ll result = 0, cont = 1;
//                                 // AAAACCCGGT
//     for (int i = 1; i <= n; i++) {  // AAAC
//
//         if (str[i] == val) {
//             cont++;      // 2 3 4
//         } else {
//             val = str[i]; // C
//             result = max(result, cont); // 4
//             cont = 1;
//         }
//     }
//
//     cout<<result<<endl;
//
//
//
//
//     return 0;
// }