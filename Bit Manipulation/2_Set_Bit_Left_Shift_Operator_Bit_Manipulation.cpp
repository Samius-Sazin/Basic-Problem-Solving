#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int pos = 1;

    int Bit_Mask = 1 << pos;

    int New_Numb = Bit_Mask | num;

    cout<< "New Number : " << New_Numb;

    return 0;
}
