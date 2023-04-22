// Find first occurance of number in an Array
// ARRAY - 9 3 5 8 3 4
// Index - 0 1 2 3 4 5
// 3 found at position 2

#include<iostream>
using namespace std;

int first_occurance(int *arr, int n, int key)
{
    if(n == 0) return -1;
    if(arr[0] == key) return 0;
    int index = first_occurance(arr+1, n-1, key);
    if(index != -1)
    {
        index += 1;
        return index;
    }
    return -1;
}

int main()
{
    int n, key, res, arr[] = {2, 4, 7, 9, 3, 5, 8, 3, 4, 2};
    n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    cout<<"\nEnter Element to found : ";
    cin>>key;

    res = first_occurance(arr, n, key);

    if(res != -1) cout<<"Element Found at Position : "<<res<<endl;
    else cout<<"Element Not Found"<<endl;

    return 0;
}

