//1 to N without using global variable
#include<bits/stdc++.h>
void solution(int n){
    if(n<1) return;
    std::cout<<n<<" ";
    solution(n-1);
}
int main()
{
    int n;
    std::cin>>n;
    solution(n);
    return 0;
}