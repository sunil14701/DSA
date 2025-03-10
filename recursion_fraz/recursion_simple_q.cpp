#include "bits/stdc++.h"
using namespace std;


// sum of num from 1 to n
// 1 +2 +3 +4 +5 . . . +(n-1) + n
int sum_till_n(int n){
    if(n == 0) return 0;

    int smalloutput = sum_till_n(n-1);
    return n + smalloutput;
}

int sum_of_digits(int num){
    if(num == 0) return 0;

    int last_digit = num%10;
    int rem_num = num/10;
    int smallOutput = sum_of_digits(rem_num);
    return smallOutput + last_digit;
}

int factorial_of_n(int n){
    if(n ==0) return 1;
    int sm = factorial_of_n(n-1);
    return n * sm;
}

// pattern printing
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 . . . n
void print_patt1(int n){
    if(n ==0) return;
    print_patt1(n-1);
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout << endl;
}

// pattern2
// 1 2 3 4 . . n 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void print_patt2(int n){
    if(n == 0) return ;
    for(int i=1;i<=n;i++){
        cout << i << " " ;
    }
    cout << endl;
    print_patt2(n-1);
}

// patt3
// 1 2 3 .. n
// 1 2 3
// 1 2 
// 1
// 1 2
// 1 2 3
// 1 2 3 .. n

void print_patt3(int n){
    if(n==1) {
        cout << n << endl;
        return;
    }

    for(int i=1;i<=n;i++){
        cout << i << " " ;
    }
    cout << endl;
    print_patt3(n-1);
    for(int i=1;i<=n;i++){
        cout << i << " " ;
    }
    cout << endl;

}

// check if string is palindrome
// abcbca -> false
// aabaa -> true
bool is_palindrome(string str){
    if(str.size() == 1 or str.size() == 0) return true;

    if(str[0] != str[str.size()-1]) return false;
    bool so = is_palindrome(str.substr(1, str.size()-2));
    return so;
}

// 1 2 3 4 5 6 7 8  9 10  11
// 0 1 1 2 3 5 8 13 21 34 55
int fibo(int term){
    if(term == 1 or term == 2) return term-1;

    int so1 = fibo(term - 1);
    int so2 = fibo(term - 2);
    return so1 + so2;
}

// find ncr
// ncr = (n-1)c(r) + (n-1)c(r-1)
int ncr(int n, int r){
    if(n < r) return 0;
    if(n ==0) return 1;
    if(r==0) return 1;

    int so1 = ncr(n-1, r);
    int so2 = ncr(n-1, r-1);
    return so1 + so2;
}


int main(){
    // say_hello(5);

    // cout << sum_till_n(100) << endl; 
    // cout << sum_of_digits(123455) << endl;
    // cout << factorial_of_n(5) << endl;
    // print_patt1(4);
    // print_patt2(4);
    // print_patt3(4);

    // string str = "abxzba";
    // cout << str<<(is_palindrome(str));

    // cout << fibo(7) << endl;
    cout << ncr(10, 5) << endl;


    return 0;
}

// src: utkarsh gupta yt recurison