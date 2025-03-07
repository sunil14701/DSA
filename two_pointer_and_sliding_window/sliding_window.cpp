#include<bits/stdc++.h>
using namespace std;

// for +ves
int longest_subarray(vector<int> &arr, int k)
{
    int sum = 0, left=0, size = arr.size();
    int maxi = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
        if(sum > k) sum-=arr[left++];
        if(sum == k) maxi = max(maxi, i-left+1);
    }
    return maxi;
}

int main(){
    int k=4;
    vector<int> vec = {-1, 2,3 ,3,4 ,5, -1};
    int left = 0, size = vec.size();
    int pot =0;
    int subarr = 0;
    int maxi = 0;
    for(int i=0;i<size;i++){
        pot++;
        subarr+=vec[i];
        if(pot > k){
            subarr-=vec[left++];
            pot--;
        }
        if(pot == k)  maxi = max(subarr, maxi);
    }
    cout << maxi;

    return 0;
}