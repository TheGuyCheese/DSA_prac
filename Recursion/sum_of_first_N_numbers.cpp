//sum of first N numbers using recursion
#include<bits/stdc++.h>
int solution(int n){
    int sum=0;
    if(n<=0){
        return sum; // error
    }else {
        sum +=n;
        solution(n-1);
    }
    return sum;
}

int main()
{
    int n;
    std::cin>>n;
    std::cout<<solution(n);
    return 0;
}