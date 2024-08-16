#include<bits/stdc++.h>
using namespace std;

void patter_1(){
    int row, col;
    cin >> row >> col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_2(){
     int rows;
     cin >> rows;
     for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
     }
}

void pattern_3(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << j+1<< " ";
        }
        cout << endl;
    }
}

void pattern_4(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << i << " ";
        }

        cout << endl;
    }
}

void pattern_5(){
    int n;
    cin >> n;
    // for(int i=n;i>0;i--){
    //     for(int j=0;j<i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_6(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_7(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        // print space
        for(int j=0;j<n-i;j++){
            cout << " ";
        }

        // print star
        for(int j=0;j<2*i-1;j++){
            cout << "*";
        }

        // print space
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern_8(){
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        // spaces
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=0;j<2*i-1;j++){
            cout << "*";
        }
        // spaces
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern_9(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++) cout << " ";

        // star
        for(int j=0;j<2*i+1;j++) cout << "*";
    
        // space
        for(int j=0;j<n-i-1;j++) cout << " ";
        
        cout << endl;
    }

    for(int i=n;i>0;i--){
        // space
        for(int j=0;j<n-i;j++){
            cout << " ";
        }

        // start 
        for(int j=0;j<2*i-1;j++){
            cout << "*";
        }

        // space
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern_10(){
    int n;
    cin >> n;

    // upper part
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    // lower part
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_11(){
    int n;
    cin >> n;
    bool start = 1;
    for(int i=0;i<n;i++){
        if((i+1)%2!=0) start = 1;
        else start = 0;

        for(int j=0;j<=i;j++){
            cout << start<< " ";
            start = !start;
        }
        cout << endl;
    }
}

void pattern_12(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << j;
        for(int j=1;j<=2*(n-i);j++) cout << " ";
        for(int j=i;j>0;j--) cout << j;
        cout << endl;
    }
}   

void pattern_13(){
    int n;
    cin >> n;
    int start =1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << start++<<" ";
        }
        cout << endl;
    }
}

void pattern_14(){
    int n ;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(j+'A') << " ";
        }
        cout << endl;
    }
}

void pattern_15(){
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout << char(j+'A');
        }
        cout << endl;
    }
}

void pattern_16(){
    int n ;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(i+'A') << " ";
        }
        cout << endl;
    }
}

void pattern_17(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int start = ((2*i+1)/2)+1;
        for(int j=0;j<n-i-1;j++) cout << " ";
        for(int j=0;j<start;j++) cout <<char(j+'A');
        for(int j=start-1;j>0;j--) cout << char(j+'A'-1);
        for(int j=0;j<n-i-1;j++) cout << " ";
        cout << endl;
    }
}

void pattern_18(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char start = n-1-i+'A';
        for(int j=0;j<=i;j++) cout << start++<< " ";
        cout << endl;
    }
}

void pattern_19(){
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++) cout << "*";
        for(int j=0;j<2*(n-i);j++) cout << " ";
        for(int j=0;j<i;j++) cout << "*";
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout << "*";
        for(int j=0;j<2*(n-(i+1));j++) cout << " ";
        for(int j=0;j<=i;j++) cout << "*";
        cout << endl;
    }
}

void pattern_20(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++) cout << "*";
        for(int j=0;j<2*(n-i);j++) cout << " ";
        for(int j=0;j<i;j++) cout << "*";
        cout << endl;
    }

    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++) cout <<"*";
        for(int j=0;j<2*(n-i);j++) cout << " ";
        for(int j=0;j<i;j++) cout <<"*";
        cout << endl;
    }
}

void pattern_21(){
    int n;
    cin >> n;
    // for(int j=0;j<n;j++) cout << "*";
    // cout << endl;
    // for(int i=0;i<n-2;i++){
    //     cout << "*";
    //     for(int j=0;j<n-2;j++) cout << " "; 
    //     cout << "*";
    //     cout <<endl;
    // }
    // for(int j=0;j<n;j++) cout << "*";

    for(int i=0;i<n;i++){
        if(i==0 or i==n-1){
            for(int j=0;j<n;j++) cout << "*";
        }else{
            cout << "*";
            for(int j=0;j<n-2;j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_22(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<=i;j++) cout << n-j << " ";
        for(int k=0;k<2*(n-i-1)-1;k++) cout << n-j+1<<" ";
        int start = n-i;
        for(int k=0;k<=i;k++){
            if(start == 1){
                start++;
                continue;
            } 
            cout << start++ <<" ";
        } 
        cout << endl;
    }

    // rem n-1 lines
    for(int i=n-1;i>0;i--){
        int j;
        for(j=0;j<i;j++){
            cout << n-j << " ";
        }
        int start = n-j+1;
        for(int k=0;k<2*(n-i)-1;k++) cout << start<<" ";
        for(int k = 0;k<i;k++) cout << start++<< " ";
        cout << endl;
    }
}

int main(){
    // patter_1();
    // pattern_2();
    // pattern_3();
    // pattern_4();
    // pattern_5();
    // pattern_6();
    // pattern_7();
    // pattern_8();
    // pattern_9();
    // pattern_10();
    // pattern_11();
    // pattern_12();
    // pattern_13();
    // pattern_14();
    // pattern_15();
    // pattern_16();
    // pattern_17();
    // pattern_18();
    // pattern_19();
    // pattern_20();
    // pattern_21();
    pattern_22();


    return 0;
}