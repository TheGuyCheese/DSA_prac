#include<bits/stdc++.h>
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a % b;
        else b = b % a;
    }
    if(a==0) return b;
    else return a;
}

int main()
{
    int a,b;
    std::cin>>a>>b;
    std::cout<<gcd(a,b);
    return 0;
}