//
// Created by Christian R. Apaza Turpo on 7/09/26.
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

string addBinary(string a, string b) {
    auto a_size = a.length() - 1;
    auto b_size = b.length()- 1;

    string result = "";

    int sum = 0, c= 0;

    while (a_size >= 0 && b_size >= 0) {

        sum = (a[a_size] - '0');
        sum += (b[b_size] - '0');
        sum += c;
        result += ('0' + sum%2);
        c = sum/2;
        a_size--;
        b_size--;
    }

    while (a_size>=0) {
        sum = (a[a_size] - '0');
        sum += c;
        result += ('0' + sum%2);
        c = sum/2;
        a_size--;
    }
    while (b_size>=0) {
        sum = (b[b_size] - '0');
        sum += c;
        result += ('0' + sum%2);
        c = sum/2;
        b_size--;
    }

    if (c == 1) result += "1";
    int l = 0, h = result.length() - 1;
    char cc;
    while (l<=h) {
        cc = result[l];
        result[l] = result[h];
        result[h] = cc;
        l++;
        h--;
    }

    return result;
}


string solvedBinary(string a, string b) {

    string result = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += (sum % 2) + '0';
        carry = sum / 2;
    }
    reverse(result.begin(), result.end());
    return result;

}





