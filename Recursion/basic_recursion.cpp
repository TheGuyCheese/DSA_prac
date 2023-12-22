#include<bits/stdc++.h>
int c = 0;
void count(int n){
    if(c==n) return;
    std::cout<<c<<"\n";
    c++;
    count(n);

}
int main()
{
    int n;
    std::cin>>n;
    count(n);   
    return 0;
}