//goto conditional statement


#include<iostream>
using namespace std;

int main(){

    int a = 1;

    level_print:
    cout << a << " ";
    a++;
    
    if(a <= 5){
        goto level_print;
    }
}
//Print : 1 2 3 4 5
