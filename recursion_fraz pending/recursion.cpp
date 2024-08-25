#include<bits/stdc++.h>
using namespace std;
// TBR
// TC-> number of nodes in the tree, SC-> max  height of the internal stack

// general way to solve recursion problem
// 1. identify the problem can be solved with recurison or not.
// 2. do small work
// 3. Ask recursion to do remaining work.
// 4. base condition
// 5 step 2 and 3 are interchangable



int sum_till_n(int n){
    if(n == 0) return 0;

    int smallOutput = sum_till_n(n-1);
    return n + smallOutput;
}

long long fibo(int n){
    if(n<0) return -1;
    if(n == 0 or n==1) return n;

    int smallOutput1 = fibo(n-1);
    int smallOutput2 = fibo(n-2);
    return smallOutput1 + smallOutput2;
}

int calc_power(int base, int power){
    if(base == 1 or power ==0) return 1;

    return base*calc_power(base,power-1);
}

int calc_power2(int base, int power){
    if(base == 1 or power ==0) return 1;

   if(power%2 == 0) return calc_power2(base*base, power/2);
   else return base*calc_power2(base*base, power/2); 
}

bool check_palindrome(string str, int start, int end){
    if(start >= end) return true;

    if(str[start] != str[end]) return false;
    return check_palindrome(str, start+1, end-1);
}

bool check_palindrome2(string s){
    if(s.size()<=1) return true;
    if(s[0] != s[s.size()-1]) return false;
    return check_palindrome2(s.substr(1,s.size()-2));
}

void reverse_array(int arr[], int size){
    if(size<=1) return;
    swap(arr[0], arr[size-1]);
    reverse_array(arr+1, size-2);
}

void print_array(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_powerset(int input[],int &size, vector<int> output, int index){
    if(index == size){
        for(int i=0;i<output.size();i++){
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    print_powerset(input, size,output, index+1);
    output.push_back(input[index]);
    print_powerset(input, size, output, index+1);
}

vector<vector<int>> print_powerset2(vector<int> input, int k){
    if(k == input.size()) return {{}};

    
    vector<vector<int>> smalloutput = print_powerset2(input, k+1);
    int size = smalloutput.size();
    for(int i=0;i<size;i++){
        vector<int> temp;
        temp.push_back(input[k]);
        for(int j=0;j<smalloutput[i].size();j++) temp.push_back(smalloutput[i][j]);
        smalloutput.push_back(temp);
    }
    return smalloutput;
}


// unable to understand
unordered_map<int,bool> mp;

void permuataion(vector<int> vec, int pos){
    if(pos >= vec.size()){
        // print perm
        for(int i=0;i<vec.size();i++){
            cout << vec[i] << " ";
        }   
        cout << endl;
        return;
    }

    // swaping pos with every element to get perm
    for(int i=pos;i<vec.size();i++){
        if(!mp[vec[pos]]){ 
            mp[vec[pos]] = true;
        }else{
            
        }
            swap(vec[i], vec[pos]);
            permuataion(vec, pos+1);
            swap(vec[i], vec[pos]);// cleaning the mess we have created before; backtracking
    }
}

void print_unique_subsets(vector<int> vec, int i, vector<int> output, set<vector<int>> &st){
    if(i >= vec.size()){
        if(st.find(output) == st.end()) {
            st.insert(output);
            for(auto it:output){
                cout << it << " ";
            }
            cout << endl;
        }
        return ;
    }

    print_unique_subsets(vec,i+1,output,st);
    output.push_back(vec[i]);
    print_unique_subsets(vec, i+1, output,st);
}

void print_unique_subsets2(vector<int> vec, int i, vector<int> output){
    if(i >= vec.size()){
       for(int j=0;j<output.size();j++){
        cout << output[j] << " ";
       }
       cout << endl;
        return ;
    }

    output.push_back(vec[i]);
    print_unique_subsets2(vec,i+1,output);
    output.pop_back();

    // skip
    while(vec[i] == vec[i+1]) i++;
    print_unique_subsets2(vec, i+1, output);
}

void combination1(vector<int> &vec,int i, vector<int> output,int &k){
    if(i>vec.size()) return ;
    if(output.size() == k){
        for(int j=0;j<output.size();j++){
            cout << output[j] << " ";
        }
        cout << endl;
        return ;
    }

    output.push_back(vec[i]);
    combination1(vec, i+1, output,k);
    output.pop_back();
    combination1(vec, i+1, output,k);
}


vector<string> phone_number(string s, unordered_map<char, string> &mp){
    if(s.size() <= 0) return {};
    if(s.size() == 1) {
        vector<string> str;
        for(int i=0;i<mp[s[0]].size();i++){
            string t;
            t += mp[s[0]][i];
            str.push_back(t);
        }
        return str;
    }

    vector<string> smallOutput = phone_number(s.substr(1,s.size()), mp);
    vector<string> ans;
    string curr = mp[s[0]];
    for(int i=0;i<curr.size();i++){
        for(int j=0;j<smallOutput.size();j++){
            string temp = "";
            temp += curr[i];
            temp += smallOutput[j];
            ans.push_back(temp);
        }
    }
    return ans;
}

string phone_number2(string s, unordered_map<char, string> &mp, vector<string> &ans){
    if(s.size() == 0) return "";

    string curr =mp[s[0]]; 
    
    for(int i=0;i<curr.size();i++){
        string t = "";
        t+=curr[i];
        ans.push_back(t + phone_number2(s.substr(1,s.size()), mp, ans));
    }
}

int main(){
    // sum of n natural numbers
    // int n;
    // cin >> n;
    // cout << sum_till_n(n);

    // nth term of fibonacci series: 0 1 1 2 3 5 8 13 21 34 
    // int n;
    // cin >> n;
    // for(int i=0;i<=n;i++)
    // cout << fibo(i)<<" ";

    // calc power of a number
    // int base, pow;
    // cin >> base >> pow;
    // cout << calc_power2(base, pow)<<endl;

    // check if string is palindrome or not
    // string str;
    // cin >> str;
    // cout << check_palindrome2(str) << endl;

    // reverse an array
    // int arr[] = {1,2,3,4,5,5};
    // int size = sizeof(arr)/sizeof(int);
    // print_array(arr,size);
    // reverse_array(arr,size);
    // print_array(arr,size);

    // power set i.e all possible subsets
    // int size;
    // cin >> size;
    // int arr[size];
    // for(int i=0;i<size;i++) cin >> arr[i];
    // vector<int> output;
    // print_powerset(arr,size, output, 0);
    
    // vector<int> input = {1,2,3};
    // vector<vector<int>> ans = print_powerset2(input,0);
    // for(auto it:ans){
    //     for(auto it2:it){
    //         cout << it2 << " ";
    //     }
    //     cout << endl;
    // }

    // permutation of array
    // int size;
    // cin >> size;
    // vector<int>vec(size);
    // for(int i=0;i<size;i++) cin >> vec[i];

    // permuataion(vec, 0);
   
    // unique powerset
    // int size;
    // cin >> size;
    // vector<int> vec(size);
    // for(int i=0;i<size;i++) cin >> vec[i];
    // vector<int> output;
    // set<vector<int>> st;
    // set<int> s;
    // print_unique_subsets(vec,0,output,st);
    // print_unique_subsets2(vec,0,output);


    // int k = 4;
    // cin >> k;
    // combination1(vec,0,output,k);

    string s;
    cin >> s;
    unordered_map<char,string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    // vector<string> ans= phone_number(s, mp);
    // for(string it: ans){
    //     cout << it << " ";
    // }
    // cout << endl;
    vector<string> ans;
    phone_number2(s, mp, ans);
    for(string it: ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}