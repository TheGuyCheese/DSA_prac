//sum of first N numbers using recursion
#include<bits/stdc++.h>
void solution(int n, int sum){
    if(n<1){
        std::cout<<sum<<"\n";
        return;
    }
    solution(n-1,sum+n);
}

int main()
{
    int n;
    std::cin>>n;
    solution(n,0);
    return 0;
}