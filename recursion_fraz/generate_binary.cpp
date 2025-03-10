#include<bits/stdc++.h> 
using namespace std;

vector<string> generate_binary(int n){
    if(n == 0){
        return {""};
    }

    vector<string> smallOutput = generate_binary(n-1);
    int size = smallOutput.size();
    vector<string> ans;
    for(int i=0;i<size;i++){
        string temp1 = to_string(0), temp2 = to_string(1);
        temp1+=smallOutput[i];
        temp2+=smallOutput[i];
        ans.push_back(temp1);
        ans.push_back(temp2);
    }
    return ans;
}

int main(){
    // generate all binary repr of size n digits
    
    int n = 3;
    vector<string> ans = generate_binary(n);
    for(string it: ans){
        cout << it << " ";
    }
    cout << endl;

    // gfg : https://www.geeksforgeeks.org/problems/generate-all-binary-strings/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
    // 3211 lc

    // see good sol

    return 0;
}