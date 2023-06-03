#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int pos = 4;

    int Bit_Mask = 1 << pos;

    if(Bit_Mask & num)
        cout<< "Bit is ONE\n";
    else
        cout<< "Bit is Zero\n";

    return 0;
}
