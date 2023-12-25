//factorial of a number recursive
#include<bits/stdc++.h>
void solution(int n, int fact){
    if(n<1){
        std::cout<<fact<<"\n";
        return;
    }
    solution(n-1,fact*n);
}
int main()
{
    int n;
    std::cin>>n;
    solution(n,1);
    return 0;
}