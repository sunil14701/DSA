#include<bits/stdc++.h>
using namespace std;

string dec_to_bin(int num){
    string bin = "";
    while(num){
        bin=to_string(num%2)+bin;
        num/=2;
    }
    // reverse(bin.begin(), bin.end());
    return bin;
    // tc-> log2(n)
    // sc-> log2(n)
}

int power(int base, int power){
    int ans = 1;
    for(int i=0;i<power;i++){
        ans *= base;
    }
    return ans;
}

int bin_to_dec(string bin){
    int ans = 0;
    // int ind = 0;
    // for(int i=bin.size()-1;i>=0;i--){
    //     ans += (bin[i]-'0')*power(2,ind++); 
    // }
    int base = 1;
    for(int i=bin.size()-1;i>=0;i--){
        if(bin[i] == '1') ans += base;
        base*=2;
    }
    return ans;
    // tc-> O(N)*log2(N)
    // sc-> O(1)
}

int bin_to_dec2(string bin){
    int base = 1;
    int ans = 0;
    for(int i=bin.size()-1;i>=0;i--){
        ans += (bin[i]-'0')*base; 
        base*=2;
    }
    return ans;
    // tc-> O(len(bin))
    // sc-> O(1)
}

// using left shift operator
bool ith_bit_set_or_not(int n, int i){
    int mask = 1;
    mask = mask<<i;
    int ans = n & mask;
    if(ans == 0) return 0;
    else return 1;
}

bool ith_bit_set_or_not3(int n, int i){
    return (n & (1<<i)) != 0;
}

bool ith_bit_set_or_not2(int n, int i){
    int mask = 1;
    n = n>>i;
    int ans = n & mask;
    if(ans == 0) return 0;
    else return 1;
}

bool ith_bit_set_or_not4(int n, int i){
    return (n>>i & 1) !=0;
    // TC: O(1)
    // SC: O(1)
}

int set_ith_bit(int n, int i){
    int mask = 1;
    mask = mask << i;
    n = n | mask;
    return n;
}

int set_ith_bit2(int n, int i){
    return n | (1 << i);
}

int clear_ith_bit(int n, int i){
    int mask = 1;
    mask = mask << i;
    mask = ~mask;
    int ans = n & mask;
    return ans;
}

int toggle_ith_bit(int n, int i){
    int mask = 1;
    mask = mask << i;
    int ans = n ^ mask;
    return ans;
}

int main(){

    // decimal to binary
    // int n;
    // cin >> n;
    // cout << dec_to_bin(n) << endl;

    // binary to decimal
    // string str;
    // cin >> str;
    // cout << bin_to_dec2(str) << endl;

    // int n = 5;
    // cout << ~n << endl;

    // Pratice Q1
    // https://www.geeksforgeeks.org/problems/bit-manipulation-1666686020/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bit-manipulation
    
    // Q swap two numbers
    // int n1, n2;
    // cin >> n1 >> n2;
    // cout << n1 << " " << n2 << endl;

    // using third variable M1
    // int temp = n1;
    // n1 = n2;
    // n2 = temp;

    // M2 without using 
    // n1 = n1 + n2;
    // n2 = n1 - n2;
    // n1 = n1 - n2;
    
    // M3 
    // n1 = n1 ^ n2;
    // n2 = n1 ^ n2;
    // n1 = n1 ^ n2;

    // cout << n1 << " " << n2 << endl;

    // Q check if ith bit is set or not
    // int num, k;
    // cin >> num >> k;
    // cout << ith_bit_set_or_not2(num,k) << endl;

    // Q set ith bit
    // int n, i;
    // cin >> n >> i;
    // int ans =  set_ith_bit(n, i);
    // cout << ans << endl;

    // Q clear the ith bit
    // int n, i;
    // cin >> n>> i;
    // cout << clear_ith_bit(n, i) << endl;

    // toggle the ith bit
    int n, i;
    cin >> n >> i;
    cout << toggle_ith_bit(n, i) << endl;
    return 0;
}