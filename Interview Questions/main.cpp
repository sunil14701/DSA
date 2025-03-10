#include<bits/stdc++.h>
using namespace std;

// Q1
bool check_even(int n){
    // check if number is even or odd w/o using %  
    if((n & 1) == 0) return true;
    return false; 
}

int main(){
    int n;
    cin >> n;
    cout << check_even(n) << endl;

    return 0;
}