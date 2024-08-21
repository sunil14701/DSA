#include<bits/stdc++.h>
using namespace std;
// KFC
// 1. online judge -> 1sec = 10^8 operations(approx)
// 2. array ,ax size when declared in main -> 10^6, array max size when declared globally -> 10^7 for datatype of array as int. else segmentaion fault
// 3. for datatype of arrary as bool -> main func max size of array -> 10^7 , global array max size of bool -> 10*8 
// 4. if array declared globally everything inside array =0, if declared in main than we have to explicilty declare 0.

int cnt_num(int arr[], int size, int num){
    // TC: O(n)
    // SC: O(1)
    int cnt = 0;
    for(int i=0;i<size;i++){
        if(num == arr[i]) cnt++;
    }
    return cnt;
}

int cnt_num_using_map(unordered_map<int,int> mp,int num){
    // TC: 1
    // SC: O(N)
    return mp[num];
}

int main(){
    // // Hashing

    /*
    //1. number hashing
    int arr[] = {1,2,1,3,2};
    int size = sizeof(arr)/sizeof(int);
    int num;
    cin >> num;

    // using for loop
    int ans1 = cnt_num(arr, size, num);

    // using hashmap by with limited values 
    // eg: 0-12
    int hashmap[13] = {0};
    for(int i=0;i<size;i++) hashmap[arr[i]]++;//pre-calc



    // using STL map: with unlimited range
    unordered_map<int,int> mp;
    for(int i=0;i<size;i++) mp[arr[i]]++; //pre-calc
    int ans2 = cnt_num_using_map(mp, num);
    cout << ans1 << " " << ans2 << endl;
    */

   /*
    // 2. char hashing
    string s = "abcdabefc";
    char find = 'a';
    // m1
    int cnt = 0;
    for(int i=0;i<s.size();i++) {
        if(find == s[i]) cnt++;
    }
    cout << cnt << endl;

    // m2: lower case letters
    int arr[26] = {0};
    for(int i=0;i<s.size();i++) arr[s[i]-'a']++;
    for(int i=0;i<26;i++){
        cout << char(i+'a') << " "<< arr[i] << endl;
    }

    // you could have taken 256 size array
    */

    /*
    // STL map: map and unordered_map
    // map stores all values in sorted order, storing or fecthing takes log(n)  time complexity in all cases i.e best, avg, worst case
    // unordered_map stores all values in unsorted manner. stroing a fecthing in avg and best case is O(i) but worst case is O(N). where n is number of element in the map. 
    // worst case in unordered map rarely happens so when encounter with a TLE than shift to map. first preference should be unordered map. why worst case happens in unordered_map-> bcs of internal collisions
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++) cin >> arr[i];

    // precompute using map: sorted manner
    map<int,int> mp1;
    // map<char,int> mp2; // map of char freq
    for(int i=0;i<size;i++) mp1[arr[i]]++;
    // iterate in map
    for(auto it:mp1) {
        cout << it.first << " -> " << it.second << endl;
    }

    int testcases;
    cin >> testcases;
    while(testcases--){
        int num;
        cin >> num;
        cout << mp1[num] << endl;
    }

    // in hashmap collisions happens. bcs we are using some algo to store the element in limited amount of array.
    // hasing -> 1. division method -> linear chaning comes in picture. i.e usage of linked list like structure to store elements
                // 2. folding method
                // 3. mid square method

    // any data strucure can be a key in a map. eg->map<pair<int,int>,char> mpp;. but key can only be a single datatype in unordered map

    */

//    Q1 https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
//     Q2 unable to do


  
    
    return 0;
}