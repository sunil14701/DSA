#include<bits/stdc++.h>
using namespace std;




// n 
// n-1
// .
// .
// 1
// 1
// 2 
// n-1
// n
void print_incr_desc(int n){
    // base case
    if(n == 0) return ;

    cout << n << endl; // smalltask
    print_incr_desc(n-1); // recursive assumption i.e green box
    cout << n << endl; // smalltask
}

void Q1(){
    // 1. You are given a positive number n. 
    // 2. You are required to print the counting from n to 1 and back to n again.
    // 3. You are required to not use any loops.
    int n;
    cout << "Enter a number: "; 
    cin >> n;
    print_incr_desc(n);
}

int factorial(int n){
    if(n == 0) return 1;
    int smallOutput = factorial(n-1);
    return n * smallOutput;
}

void Q2(){
    // i/p: given an number n.
    // o/p: return factorial of n.
    int n;
    cout << "Enter a number: " ;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
}

int find_power(int n, int x){
    if(x == 0) return 1;

    int smallOutput = find_power(n, x-1);
    return n * smallOutput;
}   

int find_power_log(int x, int n){
    if(n == 0) return 1;
    int smallOutput = find_power_log(x, n/2);
    int small_power = smallOutput * smallOutput;
    if(n%2 == 1) small_power *= x;
    return small_power;
    // if n is odd =  x * x^n/2 * x^n/2
    // if n is even = x^n/2 * x^n/2
}

void Q3(){
    // input: n->base, x->power
    // output: n^x
    int x,n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    // M1
    // int ans = find_power(n, x);
    // cout << ans << endl;

    // M2
    int ans = find_power_log(x, n);
    cout << ans << endl;
}

void print_zig_zag(int n){
    if(n ==0) return ;

    cout <<"Pre "<< n << endl; // pre space in euler area
    print_zig_zag(n-1); // rec call
    cout <<"In "<< n << endl; // in space in euler area
    print_zig_zag(n-1); // rec call
    cout <<"Post "<< n << endl; // post space in euler area
}

void Q4(){
    //**Important:** explained euler area i.e more than 1 recursion calls
    // https://youtu.be/R7qja_gZrvI?si=tmWY7c_ASQsWNT4s
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    print_zig_zag(n);
    
    // profit of having euler area
    // 1. after making a tree struct for rec we can have pre, in, post area.
    // 2. we can tell ata anypoint of time about the stack. we can tell inc or dec stack at any point of time.
}

void print_tower_of_hanoi(int n, int source, int dest, int aux){
    // base case
    if(n == 0) return ;

    print_tower_of_hanoi(n-1, source, aux ,dest); // rec assumption
    cout << "Moving plate " << n <<" from Pole " << source << " to " << dest << endl; // smallwork
    print_tower_of_hanoi(n-1, aux, dest ,source); // rec assumption
}

void Q5(){
    int n;
    cout << "Enter number of rings: ";
    cin >> n;
    int source = 1;
    int dest = 2;
    int aux = 3;
    print_tower_of_hanoi(n,source, dest, aux);
}

void print_array_elements(vector<int> &arr,int start){
    if(start == arr.size()) return;

    cout << arr[start] << endl;
    print_array_elements(arr, start+1);
}

void Q6(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int start = 0;
    print_array_elements(arr,start);
}

// i/p: 1 2 3 4 5
// o/p: 5 4 3 2 1
void print_reverse(vector<int> &arr, int idx){
    if(idx == arr.size()) return ;

    print_reverse(arr, idx+1);
    cout << arr[idx] << endl;
}

void Q7(){
    //  display array in reverse
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int start = 0;
    print_reverse(arr, start);
}


int find_maxi_element(vector<int> &arr, int i){
    if(i == arr.size()-1) return arr[i]; 
    int smallOutput = find_maxi_element(arr, i+1);
    return max(arr[i],smallOutput);
}

void Q8(){
    // find max in arr
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxi = find_maxi_element(arr, 0);
    cout << maxi << endl;
}

int find_first_index(vector<int> &arr, int i, int target){
    if(i == arr.size()) return -1;
    if(arr[i] == target) return i;
    int smallOutput = find_first_index(arr, i+1, target);
    return smallOutput;
}

void Q9(){
    // find first index of occurance
    // int n = ;
    // cout << "Enter size of array: ";
    // cin >> n;
    vector<int> arr = {2,3,6,98,3,2,6,2,4};
    int target = 1;
    // cout << "Enter the elements: ";
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
    int idx = find_first_index(arr, 0, target);
    cout << idx << endl;
    
}

int find_last_index(vector<int> &arr, int i, int target){
    if(i == arr.size()) return -1;
    int smallOutput = find_last_index(arr, i+1, target);
    if(smallOutput !=-1 ) return smallOutput;
    else{
        if(arr[i] == target){
            return i;
        }else return -1;
    }
}

void Q10(){
    // find first index of occurance
    // int n = ;
    // cout << "Enter size of array: ";
    // cin >> n;
    //                 0,1,2,3,4,5,6,7,8,9
    vector<int> arr = {2,3,6,9,8,3,2,6,2,4};
    int target = 2;
    // cout << "Enter the elements: ";
    // for(int i=0;i<n;i++){
        //     cin >> arr[i];
        // }
    int idx = find_last_index(arr, 0, target);
    cout << idx << endl;
}

vector<int> find_all_indexs(vector<int> &arr, int i, int &target){
    if(i == arr.size()) return {};

    vector<int> so = find_all_indexs(arr, i+1, target); // [6, 8]
    vector<int> ans;
    if(arr[i] == target) ans.push_back(i);
    for(int i=0;i<so.size();i++){
        ans.push_back(so[i]);
    }
    return ans;
}

vector<int> find_all_indexs_optimised(vector<int> &arr, int i, int &target, int &ans_size){
    if(i >= arr.size()){
        vector<int> ans(ans_size, 0);
        return ans;
    }
    if(arr[i] == target) ans_size++;
    vector<int> sm = find_all_indexs_optimised(arr, i+1, target, ans_size);
    if(arr[i] == target){
        sm[--ans_size] = i;
    }
    return sm;
}

void Q11(){
    // find all the indexes in array of target
    int n = 3;
    //                 0,1,2,3,4,5,6,7,8,9
    vector<int> arr = {2,3,6,9,8,3,2,6,2,4};
    int target = 11;
    // M1
    // vector<int> ans = find_all_indexs(arr,0,target);
    // M2
    int ans_size = 0;
    vector<int> ans = find_all_indexs_optimised(arr,0,target, ans_size);
    cout << "indexes for ele "<< target <<" : ";
    for(int it: ans){
        cout << it << " ";
    }
    cout << endl;
}


void Q12(){
    // https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
}

vector<string> subseq(string s, int i){
    // base case
    if(i >= s.size()) return {""};

    // rec assumption: 
    vector<string> so = subseq(s, i+1);

    // smallwork
    vector<string> ans;
    for(int j=0;j<so.size();j++){
        string s1 = "";
        string s2 = "" + string(1, s[i]);
        s1 += so[j];
        s2 += so[j];
        ans.push_back(s1);
        ans.push_back(s2);
    }
    return ans;
}

void Q13(){
    // find subsequence of a string
    string s = "abc";
    vector<string> ans = subseq(s, 0);
    for(int i=0;i<ans.size();i++){
        cout <<":"<< ans[i] << ":";
    }    
    cout << endl;
}

void helper(int i, int j, string path, vector<string>&paths,vector<vector<int>> mat){
    if(i<0 or j<0 or i>=mat.size() or j >= mat[0].size()) return ;
    if(mat[i][j] == 0) return;
    if(i == mat.size()-1 and j == mat[0].size()-1) {
        paths.push_back(path);
        return;
    }
    mat[i][j] = 0;
    helper(i-1,j,path+"U",paths, mat);
    helper(i+1,j,path+"D",paths, mat);
    helper(i,j-1,path+"L",paths, mat);
    helper(i,j+1,path+"R",paths, mat);
}



void Q14(){
    // flood fill
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans;
    helper(0,0,"",ans,mat);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
}

int main(){
    // Q1();

    // Q2();

    // Q3();

    // Q4(); 

    // Q5(); // see video

    // Q6(); 

    // Q7(); 

    // Q8();

    // Q9();

    // Q10();

    // Q11();

    // Q12();

    // Q13();

    Q14();

    return 0;
}