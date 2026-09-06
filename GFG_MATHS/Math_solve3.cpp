#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>

#define ll long long


bool isPerfect(int n) {
    if (n <= 1) return false;


    ll sum = 1;

    for (ll i = 2; i*i <= n; ++i) {
        if (n % i == 0) {
            sum += i;

            if (i != n/i) {
                sum += n/i;
            }
        }
    }

    return n == sum;
}


