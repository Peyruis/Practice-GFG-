#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>


using namespace std;

long long solve1(vector<int> &arr) {
    nth_element(arr.begin(), arr.begin() + 1, arr.end(), greater<int>());
    return arr[0] * arr[1];
}

int maxProduct(vector<int> &arr) {
    // code here

    auto n = arr.size();

    sort(arr.begin(), arr.end());

    return arr[n - 1] * arr[n - 2];
}




long long mustGreather(vector<int> &arr) {
    nth_element(
        arr.begin(),
        arr.begin() + 1,
        arr.end(),
        greater<int>());

    return arr[0];
}


long long mayor(vector<int> &arr) {
    auto max = max_element(
        arr.begin(),
        arr.end()
    );

    return *max;
}

