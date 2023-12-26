//reversing an array using recursion
#include<bits/stdc++.h>
void printA(int arr[], int i, int n){
    if(i<n){
        std::cout<<arr[i]<<" ";
        printA(arr, i+1, n);
    }
}
void solution(int arr[], int i, int n){
    if(i<n){
        std::swap(arr[i], arr[n]);
        solution(arr, i+1, n-1);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    solution(arr,0,len-1);
    printA(arr, 0, len);
    return 0;
}