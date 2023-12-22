#include<bits/stdc++.h>
int count = 1;
void name(int n){
    if(count>n) return;
    std::cout<<"Sample_Name"<<"\n";
    count++;
    name(n);
}

int main()
{
    int n;
    std::cin>>n;
    name(n);
    return 0;
}