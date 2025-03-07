#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num<0) return -1;
    if(num == 0) return 1;
    int smallOutput = factorial(num-1);
    return num*smallOutput;
}

int sum_of_n_numbers(int n){
    if(n == 0) return 0;

    int smallOutput = sum_of_n_numbers(n-1);
    return n + smallOutput;
}

int nth_fibonacci_series(int n){
    if(n==0) return -1;
    if(n == 2 or n==1) return 1;

    int smallOutput1 = nth_fibonacci_series(n-1);
    int smallOutput2 = nth_fibonacci_series(n-2);
    return smallOutput1 + smallOutput2;
}

int find_power(int base, int exp){
    if(exp == 0) return 1;
    int smallOutput = find_power(base, exp/2);
    if(exp%2 == 0){
        return smallOutput*smallOutput;
    }else{
        return base *smallOutput *smallOutput;
    }
}

bool check_palindrome(int start, int end, string word){
    if(start>=end) return true;

    if(word[start] != word[end]) return false;
    bool smallOutput = check_palindrome(start+1, end-1, word);
    return smallOutput;
}

bool check_palindrome(string word){
    if(word.size() <= 1) return true;

    if(word[0] != word[word.size()-1]) return false;
    bool smallOutput = check_palindrome(word.substr(1,word.size()-2));
    return smallOutput;
}

int main(){
    // L0. Lets master recursion: "Baap" of all imp topics
    // notes
    // 1. Used to solve recursion problems, backtracking problems, Tree problem, dynamic programming, graph questions
    // 2. hw questions, assignments, live doubt session
    // 3. consistency is the key

    // L1 What is recursion
    // 1. find factorial of a number
    // cout << factorial(4) << endl; 

    //L3 find the sum of n natural numbers
    // cout << sum_of_n_numbers(10) << endl;

    // nth term of fibonacci series
    // cout << nth_fibonacci_series(7) << endl;

    // L4: find the power of number
    // int base = 3;
    // int pow = 4;
    // cout << find_power(base,pow) << endl; 
    // ep4 ende

    // check palindrome
    // string str = "pass";
    string str = "caar`aac";

    // cout << check_palindrome(0, str.size()-1, str) << endl;
    cout << boolalpha << endl;
    cout << check_palindrome(str) <<endl; 

    // sum of array
    vector<int> vec = {4, 5,6 ,7};
    while(vec.size()!=2){
        
    }

    

    return 0;
}