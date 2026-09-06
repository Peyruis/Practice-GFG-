
#include <iostream>   // Para cin y cout
#include <vector>     // Para usar vectores dinámicos
#include <string>     // Para manipulación de texto
#include <algorithm>  // Para sort, lower_bound, upper_bound, min, max
#include <map>         // Para mapas (árboles balanceados)
#include <set>         // Para conjuntos de elementos únicos
#include <unordered_map>
#include <unordered_set>

#define ll long long int


/*
 *
* Prime Number
Solved
Difficulty: EasyAccuracy: 22.2%Submissions: 652K+Points: 2
Given a number n, determine whether it is a prime number or not.
Note: A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

Examples :

Input: n = 7
Output: true
Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.
Input: n = 25
Output: false
Explanation: 25 has more than two divisors: 1, 5, and 25, so it is not a prime number.
Input: n = 1
Output: false
Explanation: 1 has only one divisor (1 itself), which is not sufficient for it to be considered prime.
 *
 *
 *
 */








using namespace std;



bool isPrime(int n) {

    if (n <= 1) return false;


    for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
    }

    return true;
}


/*

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    ll N;

    cin>>N;

    while (N != 1) {
        cout << N << " ";

        if (N%2!=0)
            N = N * 3 + 1;

        else
            N /= 2;
    }
    cout << 1;



    return 0;
}
*/