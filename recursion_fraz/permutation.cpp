#include<bits/stdc++.h>
using namespace std;


// Leap of faith method
vector<vector<int>> print_perms2(int i, int size, vector<int> &vec){
    if(size == 1){
        return {{vec[i]}};
    }

    vector<vector<int>> smallOutput = print_perms2(i+1, size-1, vec);
    int s_size = smallOutput.size();
    vector<vector<int>> ans;
    for(int i=0;i<=size;i++){
        for(int j=0;j<smallOutput.size();j++){
            for(int s=0;s<smallOutput[j].size();s++){
                
            }
        }

        for(int j=0;j<s_size;j++){
            vector<int> perm;
            for(int k=0;k<i;k++){
                perm.push_back(vec[k]);
            }
            perm.push_back(vec[i]);
            for(int k=i;k<s_size;k++){
                perm.push_back(vec[k]);
            }   
            ans.push_back(perm);
        }
    }
    return ans;

}


void print_perms(vector<int> &vec, vector<int> freq, vector<int> temp){
    if(temp.size() == vec.size()){
        for(int i=0;i<temp.size();i++){
            cout << temp[i]<< " ";
        }
        cout << endl;
    }

    for(int i=0;i<vec.size();i++){
        if(!freq[i]){
            temp.push_back(vec[i]);
            freq[i] = 1;
            print_perms(vec, freq, temp);
            temp.pop_back();
            freq[i] = 0;
        }
    }
}


int main(){
    vector<int>vec = {1,2,3,4};

    // m1
    // vector<int> freq(vec.size(),0), temp;
    // print_perms(vec, freq, temp);

    // m2: leap of faith
    vector<vector<int>> ans = print_perms2(0, vec.size(), vec);
    for(vector<int> it: ans){
        for(int it2: it){
            cout << it2 << " ";
        }
        cout << endl;
    }

    return 0;
}