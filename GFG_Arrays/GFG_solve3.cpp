#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>


using namespace std;

void solved(vector<int> &arr) {

    auto n = arr.size();

    int qz = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            qz++;
        }
    }

    erase_if(arr, [](int a) { return a == 0;});

    for (int i = 0; i < qz; i++) {
        arr.push_back(0);
    }


}

void pushZerosToEnd(vector<int> &arr) {
    auto n = arr.size();


    int qz = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            qz++;
        }
    }


    arr.erase(
        remove_if(
            arr.begin(), arr.end(),
            [](int a) { return a == 0;}),
            arr.end());

    for (int i = 0; i < qz; i++) {
        arr.push_back(0);
    }


}


void compile3(vector<int> &arr) {
    for (auto a: arr) {
        cout << a << " ";
    }
}

