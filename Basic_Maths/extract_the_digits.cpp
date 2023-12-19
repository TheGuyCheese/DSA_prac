#include<iostream>
int main()
{
    //program to extract the digits from a number
    int number;
    std::cin>>number;
    while(number>0){
        std::cout<<number%10<<"\n";
        number /= 10;
    }
    return 0;
}