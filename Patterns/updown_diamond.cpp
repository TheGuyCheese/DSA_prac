// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// Pattern


#include<iostream>
int main()
{
    int n=5;
    int spaces = 2*n-2;
    //outerloop
    for(int i=1;i<=2*n-1;i++){
        int temp = i;
        if(i>n) temp = 2*n-i;
        //dots
        for(int j=1;j<=temp;j++){
            std::cout<<"*";
        }

        //spaces
        for(int j=1;j<=spaces;j++){
            std::cout<<" ";
        }


        //dots
        for(int j=1;j<=temp;j++){
            std::cout<<"*";
        }

        std::cout<<"\n";
        if(i<n) spaces -= 2;
        else spaces += 2;
    }

    return 0;
}