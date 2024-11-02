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

int remove_last_set_bit(int n){
    int mask = 1;
    while((n & mask) == 0){
        mask = mask << 1;
    }
    mask = ~mask;
    n = n & mask;
    return n;
}

int remove_last_set_bit2(int n){
    return n&(n-1);
}

bool check_power_of_2_or_not(int n){
    int cnt_1_bit = 0;
    while(n){
        int lst_digit = n%2;
        if(lst_digit == 1) cnt_1_bit++;
        n/=2;
    }
    if(cnt_1_bit == 1) return true;
    return false;
}
bool check_power_of_2_or_not2(int n){
    if((n &(n-1)) == 0) return 1;
    return 0;
}

int cnt_number_of_set_bits(int n){
    int cnt =0 ;
    while(n){
        // if((n%2) == 1) cnt++;
        // if((n&1) == 1) cnt++;
        // n/=2;
        cnt+=(n&1);
        n = n >> 1;
    }
    return cnt;
}

int cnt_number_of_set_bits2(int n){
    int cnt =0 ;
    while(n){
        cnt++;
       n = n&(n-1); // turn off the right most bit
    }
    return cnt;
    // tc: o(no_set_bits)
}
// CP programmer(bitwise use, bitwise is faster than normal operators)
// n%2 == 0 for even, n%2 == 1 for odd -> normal people; but cp programmers do  n&1 == 1 for odd, n&1==0 for even.
// in binary search (low+high)/2 for normal people; (low+high) >> 1 for cp programmers.
// STL to cnt set bits-> __builtin_popcnt(n)

int min_flip_bits(int n1, int n2){
    int cnt=0;
    while(n1 or n2){
        int last_bit1 = (n1&1);
        int last_bit2 = (n2&1);
        if(last_bit1 != last_bit2) cnt++;
        n1 = n1 >> 1;
        n2 = n2 >> 1;
    }
    return cnt;
}

int min_flip_bits2(int n1, int n2){
    int cnt=0;
    int ans = n1 ^ n2;
    while(ans){
        if((ans&1)) cnt++;
        ans = ans >> 1;
    }
    return cnt;
}

int pow(int base, int exp){
    int ans = 1;
    for(int i=0;i<exp;i++){
        ans*=base;
    }
    return ans;
}

void print_subset(vector<int> &vec){
    int size = vec.size();
    // int till_num = pow(2,size);
    int till_num = 1 << size;
    vector<vector<int>> ans;
    for(int i=0;i<till_num;i++){
        int steps = 0;
        vector<int> temp;
        int num = i;
        while(steps<size){
            int lst_dig = (num&1);
            if(lst_dig) temp.push_back(vec[steps]);
            num = num >> 1;
            steps++;
        }
        ans.push_back(temp);
    }

    for(auto it:ans){
        for(auto it2 : it){
            cout << it2 << " ";
        }
        cout << endl;
    }
    // TC: O(power(size(Arr))*(N))
    // SC: O(2^n * n) 
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

    // Q toggle the ith bit
    // int n, i;
    // cin >> n >> i;
    // cout << toggle_ith_bit(n, i) << endl;
    
    // Q removing the last set bit(right most)
    // int n;
    // cin >> n;
    // cout << remove_last_set_bit(n) << endl;
    // cout << remove_last_set_bit2(n) << endl;
    
    // Q check of number is power of two or not
    // int n;
    // cin >> n;
    // cout << check_power_of_2_or_not(n) << endl;
    // cout << check_power_of_2_or_not2(n) << endl;

    // Q cnt the number of set bits in number
    // int n;
    // cin >> n;
    // cout << cnt_number_of_set_bits(n) << endl;
    // cout << cnt_number_of_set_bits2(n) << endl;

    // Q https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
    // int n1, n2;
    // cin >> n1 >> n2;
    // cout << min_flip_bits2(n1, n2) << endl;

    // Q find all the subsets using bit wise opertaors
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin >> vec[i];
    print_subset(vec);
    return 0;
}