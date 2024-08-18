#include<bits/stdc++.h>
using namespace std;

void say_hello(string name){
    cout << "Hello World, " << name<< endl;
}

int summ(int a, int b){
    b = 100;
    return a+b;
}

int main(){
    // cout << "Hello world"<< '\n';
    // cout << "Hello world 2" << endl;
    // int x,y;
    // float x,y;
    // cin >> x >> y;
    // cout <<"The value of x: " << x << endl;
    // cout <<"The value of y: " << y << endl;


    // string name;
    // getline(cin,name);
    // cout << name;

    // char ch;
    // cin >> ch;
    // cout << ch << endl;


    // int age=16;
    // cin >> age;
    // if(age >=18) cout<< "Adult" << endl;
    // else cout << "Baby"<< endl;
    
    // int marks = 0;
    // cin >> marks;

    // if(marks >=0 and marks <=100){
    //     if(marks >= 80) cout << 'A' << endl;
    //     else if(marks >= 60) cout << 'B' << endl;
    //     else if(marks >= 50) cout << 'C' << endl;
    //     else if(marks >= 45) cout << 'D' << endl;
    //     else if(marks >= 25) cout << 'E' << endl;
    //     else cout <<'F' << endl;
    // }else{
    //     cout << "Enter number in range between 0 to 100."<<endl;
    // }

    // int age =0;
    // cin >> age;

    // if(age > 0){
    //     if(age > 57) cout <<"Retirement time" << endl;
    //     else if (age >= 55) cout << "Eligible for job, but retirement soon." << endl;
    //     else if(age >=18) cout << "Eligible for Job"<<endl;
    //     else cout <<"Not Eligible for job " << endl;
    // }else{
    //     cout << "Enter a positive age." << endl;
    // }

    //  int day_num;
    //  cin >> day_num;

    //  switch(day_num){
    //     case 1:
    //         cout <<"Monday"<< endl;
    //         break;
    //     case 2:
    //         cout <<"Tuesday"<< endl;
    //         break;
    //     case 3:
    //         cout <<"Wednesday"<< endl;
    //         break;
    //     case 4:
    //         cout <<"Thrusday"<< endl;
    //         break;
    //     case 5:
    //         cout <<"Friday"<< endl;
    //         break;
    //     case 6:
    //         cout <<"Saturday"<< endl;
    //         break;
    //     case 7:
    //         cout <<"Sunday"<< endl;
    //         break;  
    //     // default:
    //     //     cout <<"Error! Enter Day between 1-7" << endl;  
    //     //     break;
    //     cout << "Check out inside" << endl; 
    //  } 

    //  cout << "Hello world outside" << endl;

    // int arr[] = {1,2,3,4};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<size;i++){
    //     cout << arr[i] << " "; 
    // }

    // int size;
    // cin >> size;
    // int *arr = new int[size];
    // for(int i=0;i<size;i++) cin >> arr[i];
    // for(int i=0;i<size;i++) cout << arr[i] << " ";
    // cout << endl;

    // int arr[3][5] = {{1,2,3,4,5},{ 5,6,7,8,9},{1,2,3,4,5}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<5;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // string name = "sunil";
    // int size = name.size();
    // cout << size << endl;

    string name = "Sunil kumar";
    // for(int i=0;i<5;i++){
    //     cout << name << endl;
    // }

    // for(int i=name.size()-1;i>=0;i--){
    //     cout << name[i]; 
    // }
    // int i=0;
    // while(i<5){
    //     cout << name << endl;
    //     i++;
    // }do(i);


    // say_hello("Sunil");
    int n1, n2;
    cin >> n1>> n2;
    cout << n1 << " " << n2 << endl;
    cout << summ(n1,n2) << endl;
    cout << n1 << " " << n2 << endl;

    return 0;   
}