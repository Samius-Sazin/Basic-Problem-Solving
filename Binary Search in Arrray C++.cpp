#include<iostream>
using namespace std;

int bin_search(int *A,int el,int K)
{
    int S=0;
    int E=el-1;

    while(S<=E)
    {
        int M=(S+E)/2;
        if(A[M] == K) return M;
        else if(A[M] > K)
        {
            E=M-1;
        }
        else if(A[M]< K)
        {
            S=M+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]= {10,20,30,40,50,60,70,80,89};//Binary search work if and only if numbers are in either increasing form or decreasing form;
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int res = bin_search(arr,n,key);

    if(res != -1) cout<<"Element "<<key<<" is found at position "<<res+1<<endl;
    else cout<<"Element "<<key<<" not found"<<endl;
}
