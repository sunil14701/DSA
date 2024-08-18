#include <bits/stdc++.h>
using namespace std;

int cntDigit1(int num)
{
    int cnt = 0;
    while (num)
    {
        cnt++;
        num /= 10;
    }
    return cnt;
}

int reverse(int num)
{
    int rev = 0;
    while (num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int cntDigit2(int num)
{
    int cnt = int(log10(num) + 1);
    return cnt;
}

void factors(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            if (num / i != i)
                cout << num / i << " ";
        }
    }
}

int gcd(int n1, int n2)
{
    int mi = min(n1, n2);

    // m1 optimized
    for (int i = mi; i > 0; i--)
    {
        if (n1 % i == 0 and n2 % i == 0)
            return i;
    }

    // m2
    // int ans = 1;
    // for(int i=1;i<=mi;i++){
    //     if(n1%i == 0 and n2%i ==0){
    //         if(i > ans) ans = i;
    //     }
    // }
    // return ans;
}

// int lcm(int n1, int n2){

// }

long long calc_gcd(long long A, long long B)
{
    if (A == B)
        return A;
    cout << A << " " << B << endl;
    if (A > B)
        return calc_gcd(A - B, B);
    else
        return calc_gcd(B - A, A);
}

int calc_gcd_optimal(int a, int b)
{
    while (a and b)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (!a)
        return b;
    if (!b)
        return a;
}

int main()
{
    cout << "jell";
    int n1, n2;
    cin >> n1 >> n2;

    // int digits = cntDigit2(num);
    // cout << digits << endl;

    // int rev = reverse(num);
    // cout << rev << endl;
    cout << calc_gcd(n1, n2) << endl;
    cout << calc_gcd_optimal(n1, n2) << endl;
    return 0;
}