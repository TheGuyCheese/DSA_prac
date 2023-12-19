#include<bits/stdc++.h>
int main()
{
    int number;
    std::cin>>number;
    int temp = number;
    int number_of_digits = floor(log10(number)+1);
    int sum =0;
    while(number>0){
        int last_digit = number%10;
        sum = sum + pow(last_digit, number_of_digits);
        number /= 10;
    }

    if(temp == sum) std::cout<<"It is an Armstrong Number.";
    else std::cout<<"It is not an armstrong Number.";

    return 0;
}

