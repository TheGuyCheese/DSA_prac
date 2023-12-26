//Printing the fibonacchi numbers using recursion

#include<bits/stdc++.h>
void solution(int n, int p1, int p2){
    if(n>0){
        std::cout<<p2<<" ";
        solution(n-1, p2, (p1+p2));

    }
}
int main()
{
    int n;
    std::cin>>n;
    std::cout<<"0"<<" ";
    solution(n, 0, 1);
    return 0;
}