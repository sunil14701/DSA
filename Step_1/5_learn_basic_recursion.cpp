#include<bits/stdc++.h>
using namespace std;

void print_1_to_n(int n){
    if(n<=0) return;

    print_1_to_n(n-1);
    cout << n << " ";
}

void print_GFG_n_times(int n){
    if(n==0) return;

    cout << "GFG" << endl;
    print_GFG_n_times(n-1);
}

void printNos(int N) {
        if(N==0) return;
        cout << N << " ";
        printNos(N-1);
    }

long long cube_it(long long n){
    return 1ll*n*n*n;
}
  
long long sumOfSeries(long long n) {
    
    if(n == 0) return 0;
    
    return cube_it(n) + sumOfSeries(n-1);
}

long long factorial(long long n){
    if(n==0) return 1;
    return n*factorial(n-1);
    
}

vector<long long> factorialNumbers(long long n) {
    vector<long long>vec;
    for(int i=1;factorial(i)<=n;i++){
        vec.push_back(factorial(i));
    }
    return vec;
}

void print_array(int arr[], int size){
    for(int i=0;i<size;i++) cout << arr[i] << " ";
    cout << endl;
}

void reverse_array(int arr[], int start, int end){
    if(start >= end) return;

    swap(arr[start], arr[end]);
    reverse_array(arr,++start,--end);
}

void reverse_array2(int arr[], int size){
    if(size<=1) return;

    swap(arr[0], arr[size-1]);
    reverse_array2(arr+1, size-2);
}

bool check_palindrome(string s, int start, int end){
    if(start >= end) return true;

    if(s[start] != s[end]) return false;
    return check_palindrome(s, start+1, end-1);
}

int calc_fibonacci(int num){
    if(num == 0 or num == 1) return num;
    return calc_fibonacci(num-1) + calc_fibonacci(num-2);
}

void print_fibonacci(int n){
    for(int i=0;i<=n;i++){
        cout << calc_fibonacci(i) << " ";
    }
    cout << endl;
}

int main(){
    //Q1 print 1 to N without loop
    // int n;
    // cin >> n;

    // print_1_to_n(n);
    // cout << endl;

    // Q2 Print GFG n times
    // int n;
    // cin >> n;
    // print_GFG_n_times(n);

    // Q3 same as 1

    // Q4 print n to 1
    // int n;
    // cin >> n;
    // printNos(n);


    // Q5 https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
    // int n;
    // cin >> n;
    // cout << (sumOfSeries(n));

    // Q6 Factorial of N numbers
    // https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1
    // int n;
    // cin >> n;
    // factorialNumbers(n);


    // Q7
    // int arr[] = {1,2,3,4,5,6,90};
    // int size = sizeof(arr)/sizeof(int);
    // cout <<"Before: ";
    // print_array(arr, size);
    // reverse_array2(arr,size);
    // cout << "After: ";
    // print_array(arr, size);

    // Q8 check if string is palindrome
    // string str;
    // cin >> str;
    // int ans = check_palindrome(str,0,str.size()-1);
    // cout << ans << endl;

    // Q9 print fibo series
    int n;
    cin >>n;
    print_fibonacci(n);

    return 0;
}