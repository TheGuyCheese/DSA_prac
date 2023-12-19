#include<iostream>
int main()
{
    //for a given number count the number of digits it has
    int number;
    std::cin>>number;
    int counter=0;
    while(number>0){
        number /= 10;
        counter++;
    }
    std::cout<<"The Number of Digits: "<<counter;
    return 0;
}