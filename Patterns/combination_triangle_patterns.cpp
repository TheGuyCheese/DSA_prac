//     *    
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
// Pattern to Print
#include<iostream>
void triangle(int n){
    //outerloop
    for(int i=0;i<n;i++){
        //inner loop
        //spaces
        for(int j=0;j<n-i-1;j++){
            std::cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1;j++){
            std::cout<<"*";
        }

        //spaces
        for(int j=0;j<n-i-1;j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;

    }
}

void reverse_triangle(int n){
    //outerloop
    for(int i=0;i<n;i++){
        //outerloop
        //spaces
        for(int j=0;j<i;j++){
            std::cout<<" ";
        }

        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            std::cout<<"*";
        }

        //spaces
        for(int j=0;j<i;j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int n;
    std::cin>>n;
    triangle(n);
    reverse_triangle(n);    

 
    return 0;
}