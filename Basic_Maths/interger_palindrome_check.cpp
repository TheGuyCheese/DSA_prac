#include<iostream>
int main()
{
    //check palindrome
    int number;
    std::cin>>number;
    int temp = number;
    int reverse = 0;
    while(number>0){
        int digit = number%10;
        reverse = reverse*10 + digit;
        number /= 10;
    }

    if (temp==reverse) std::cout<<"It is a Palindrome.";
    else std::cout<<"It is not a palindrome.";
    return 0;
}