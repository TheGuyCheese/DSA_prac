#include<bits/stdc++.h>
void solution(int i, int n){
    if(i>n) return;
    std::cout<<i<<"\n";
    solution(i+1,n);
}
int main()
{
    int n;
    std::cin>>n;
    solution(1,n);
    return 0;
}