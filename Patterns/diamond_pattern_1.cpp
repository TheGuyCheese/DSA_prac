// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// Pattern to print


#include<iostream>


void upperpattern(int n){
    //outerloop
    for(int i=0;i<n;i++){
        //dots
        for(int j=i;j<n;j++){
            std::cout<<"*";
        }

        //spaces
        for(int j=0;j<2*i;j++){
            std::cout<<" ";
        }

        //dots
        for(int j=i;j<n;j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }

}

void lowerpattern(int n){
    //outerloop
    for(int i=1;i<=n;i++){
        //dots
        for(int j=1;j<i+1;j++){
            std::cout<<"*";
        }

        //space
        for(int j=1;j<=2*(n-i);j++){
            std::cout<<" ";
        }


        //dots
        for(int j=1;j<i+1;j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }

}
int main()
{
    int n=5;

    upperpattern(n);
    lowerpattern(n);
    return 0;
}