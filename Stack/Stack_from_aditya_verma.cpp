#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &vec){
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

void Q1(){
    // find next greater element from right
    // https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
    // tried both brute force and optimzed sol
}

vector<int> next_greater_element_from_left_brute(vector<int> &arr){
    int size = arr.size();
    vector<int> ans(size);
    for(int i=0;i<size;i++){
        int left_greater = -1;
        int curr = arr[i];
        for(int j=i-1;j>=0;j--){
            if(curr < arr[j]){
                left_greater = arr[j];
                break;
            }
        }
        ans[i] = left_greater;
    }
    return ans;
}

vector<int> next_greater_element_from_left_optimized(vector<int> &arr){
    int size = arr.size();
    stack<int> st;
    vector<int> ans(size);
    for(int i=0;i<size;i++){
        while(!st.empty() and arr[i] > st.top()){
            st.pop();
        }

        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}


void Q2(){
    // Next greater element from left
    // vector<int> arr = {4,3,1,2};
    vector<int> arr = {1,3,2,4};//o/p [-1,-1,3,-1]

    // M1
    // vector<int> ans = next_greater_element_from_left_brute(arr);
    // print_vector(ans);

    // M2
    vector<int> ans = next_greater_element_from_left_optimized(arr);
    print_vector(ans);
}

void Q3(){
    // https://www.interviewbit.com/problems/nearest-smaller-element/
    // done brute force and optimized sol
}

void Q4(){
    // https://www.naukri.com/code360/problems/next-smaller-element_1112581?leftPanelTabValue=PROBLEM
    // done brute force and optimized sol
}

int main(){

    // if the inner loop is dependent on outer loop than use stack for optimization
    // Q1();
    // Q2();
    // Q3();
    Q4();

    return 0;
}