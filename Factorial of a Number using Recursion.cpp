#include<iostream>
using namespace std;

int Factorial(int n)
{
    if(n == 1) return 1;
    return n * Factorial(n-1);
}

int main()
{
    int n, res;
    cout<<"Enter a Number : ";
    cin>>n;
    res = Factorial(n);
    cout<<n<<"! = "<<res<<endl;
    return 0;
}
