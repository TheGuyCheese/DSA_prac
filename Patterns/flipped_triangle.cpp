// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// Pattern to print
#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    //outerloop
    for(int i=1;i<=2*n-1;i++){
        int t = i;
        //innerloop
        if(i>n) t=2*n-i;
        for(int j=1;j<=t;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;

    }
    return 0;
}