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


bool armstrongNumber(int n) {
    // code her

    if (n < 100) return false;



    int val = n;


    int sum = 0;
    int temp = 0;

    while (n > 0) {

        temp = n%10;
        sum += temp*temp*temp;

        temp=0;
        n/=10;

    }

    return sum == val;
}


