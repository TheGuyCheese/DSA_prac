// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include<iostream>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            std::cout<<j;
        }

        //spaces
        for(int j=1;j<=2*(n-i);j++){
            std::cout<<" ";
        }

        for(int j=i;j>=1;j--){
            std::cout<<j;
        }


        //numbers in rev

        std::cout<<"\n";
    }
    return 0;
}