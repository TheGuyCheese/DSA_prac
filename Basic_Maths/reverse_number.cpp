#include<iostream>
int main()
{
    //given a number reverse it
    int number;
    std::cin>>number;
    int reverse = 0;
    while(number>0){
        int digit = number%10;
        reverse = reverse*10 + digit;
        number /= 10;
    }
    std::cout<<reverse;
    return 0;
}