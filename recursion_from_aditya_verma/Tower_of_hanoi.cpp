#include<bits/stdc++.h>
using namespace std;


void print_tower_of_hanoi2(int n, int source, int aux, int dest, int& step){
    if(n == 0) return;

    print_tower_of_hanoi2(n-1, source, aux, dest, step);
    cout << "moving plate " << n << " from " << source << " to " << dest << endl;
    step++;
    print_tower_of_hanoi2(n-1, aux, dest, source, step);
}

int main(){
    int n=3;
    int source = 1;
    int aux = 2;
    int dest = 3;
    int step = 0;
    print_tower_of_hanoi2(n, source, aux, dest, step);
    cout << "total time " << step << endl;

    return 0;
}

