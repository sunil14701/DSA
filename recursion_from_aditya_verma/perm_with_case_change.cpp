#include<bits/stdc++.h>
using namespace std;
// problem
// Input : ab
// Output : AB Ab ab aB

// Input : ABC
// Output : abc Abc aBc ABc abC AbC aBC ABC

char to_lower_case(char ch){
    if(ch >='a' and ch<='z') return ch;
    else return ch + ('a' - 'A');
}

void print_perm_cases(int i, string output, string s){
    if(i >= s.size()) {
        cout << output << ": ";
        return;
    }

    string o1 = output;
    string o2 = output;
    o1+=(to_lower_case(s[i]));
    o2+=(to_lower_case(s[i])- ('a' - 'A'));

    print_perm_cases(i+1, o1, s);
    print_perm_cases(i+1, o2, s);

}

int main(){
    string s = "ABC";
    string output = "";
    int i = 0;
    print_perm_cases(i, output, s);

    return 0;
}