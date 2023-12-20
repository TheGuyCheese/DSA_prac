#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    for(int i =1;i<=sqrt(n);i++){
        if(n%i==0){
            std::cout<<i<<" ";
                if(i!=n/i) std::cout<<n/i<<" ";
        }
    }
  return 0;
}