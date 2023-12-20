#include<bits/stdc++.h>
int main()
{
    int a,b;
    std::cin>>a>>b;
    int gcd =1;
    for(int i=2;i<=std::min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    std::cout<<gcd;
    return 0;
}