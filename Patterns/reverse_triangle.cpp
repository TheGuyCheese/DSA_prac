// *********
//  *******
//   *****
//    ***
//     *
// Pattern to print

#include<iostream>

int main()
{
    int n=5;
    //outer loop
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            std::cout<<" ";
        }

        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            std::cout<<"*";
        }

        //spaces
        for(int j=0;j<i;j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}