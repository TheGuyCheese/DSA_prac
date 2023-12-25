//factorial of a number iterative approach
#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    std::cout<<fact<<"\n";
    return 0;
}