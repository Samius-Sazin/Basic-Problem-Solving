#include<bits/stdc++.h>
using namespace std;

int main()
{
    //log()
    double l = log(5);          // 1.60944
    double l_2base = log2(5);   // 2.32193
    double l_10base = log10(5); // 0.69897




    //exp(5) == e^5
    double ex = exp(5); //148.413




    //sin(), cos(), tan()
    double radian = M_PI / 180.0; //M_PI = 3.14159
    double si = sin(90 * radian); // 1
    double co = cos(0 * radian);  // 1
    double ta = tan(45 * radian); // 1



    //round
    double Round = round(11.48); // 11
    double Round2 = round(11.52); // 12



    //truncate(cut the right part after point)
    double Trunc = trunc(11.48); // 11
    double Trunc2 = trunc(11.99);// 11





    //ceil
    //convert a number to its upper integer number if it has any decimal part
    double Ceil = ceil(11.98);   // 12 is the upper integer of 11.98
    double Ceil2 = ceil(11.001); // 12 is the upper integer of 11.001
    double Ceil3 = ceil(-2.5);   // -2 is the upper integer of -2.5
    double Ceil4 = ceil(5);      // 5, remains same




    //floor
    //convert a number to its lower integer number if it has any decimal part
    double Floor = floor(11.98);   // 11 is the lower integer of 11.98
    double Floor1 = floor(11.001); // 11 is the lower integer of 11.001
    double Floor2 = floor(-2.5);   // -3 is the lower integer of -2.5
    double Floor3 = floor(5);      // 5, remains same
}
