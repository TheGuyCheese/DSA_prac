#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
        std::cout<<"Not a prime!";
        return 0;
        }
    }
    std::cout<<"It is a Prime!";
    return 0;
}