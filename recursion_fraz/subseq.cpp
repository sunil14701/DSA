#include<bits/stdc++.h>
using namespace std;


// recursive leap of faith
vector<vector<int>> subseqFaith(int s, vector<int> &vec){
    // base case
    if(s == vec.size()){
        return {{}};
    }

    // trust the fx
    vector<vector<int>> smallOutput = subseqFaith(s+1, vec);

    vector<vector<int>> ans;

    // smallwork
    for(int i=0;i<smallOutput.size();i++){
        ans.push_back(smallOutput[i]);
    }
    for(int i=0;i<smallOutput.size();i++){
        vector<int> temp;
        temp.push_back(vec[s]);
        for(int j=0;j<smallOutput[i].size();j++){
            temp.push_back(smallOutput[i][j]);    
        }
        ans.push_back(temp);
    }
    return ans;
}

// ek baar lena hai aur ek baar nhi lena hai element
void subseq(int i, vector<int> temp, vector<int> &nums){
    if(i >= nums.size()){
        for(int j=0;j<temp.size();j++){
            cout << temp[j] << " ";
        }
        cout << endl;
        return ;
    }

    // take the element 
    temp.push_back(nums[i]);
    subseq(i+1, temp, nums);

    // don't take this element
    temp.pop_back();
    subseq(i+1, temp, nums);
}

int main(){
    vector<int> nums = {1,2,3};

    // M1
    // vector<int> temp;
    // subseq(0, temp, nums);


    // M2 
    // vector<vector<int>> vec = subseqFaith(0, nums);
    // for(int i=0;i<vec.size();i++){
    //     for(int j=0;j<vec[i].size();j++){
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 78 lc

    return 0;
}