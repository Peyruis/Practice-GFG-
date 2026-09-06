#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>


using namespace std;


/*
Second Largest
Solved
Difficulty: EasyAccuracy: 26.72%Submissions: 1.6MPoints: 2Average Time: 15m
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.
*/


int solve4(vector<int> &arr) {


    unordered_set<int> st(arr.begin(), arr.end());

    vector<int> b(st.begin(), st.end());

    if (b.size() < 2) return -1;


    nth_element(b.begin(), b.begin() + 1, b.end(), greater<int>());


    return b[1];
}


void compile4(vector<int> &arr) {
    for (auto a: arr) {
        cout << a << " ";
    }
}

