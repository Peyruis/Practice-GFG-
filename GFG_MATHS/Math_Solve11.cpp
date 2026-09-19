//
// Created by Christian R. Apaza Turpo on 17/09/26.
//


#include <iostream>
#include <string>
#include <map>
#include <vector>

#define ll long long
#define tt int64_t

using namespace std;

bool is_prime(tt n) {
    if (n < 2) return false;


    for (tt p = 2; p * p <= n; p += p % 2 + 1) {
        if (n % p == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);













    return 0;

}
