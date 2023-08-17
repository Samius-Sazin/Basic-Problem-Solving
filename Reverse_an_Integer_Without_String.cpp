//Reverse an Integer
//123 --> 321

#include<iostream>
using namespace std;

int main(){

    int n = 123;
    int temp = n;

    int sum = 0, rem;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp/10;
    }

    cout << "Reversed : " << sum << endl;
}
