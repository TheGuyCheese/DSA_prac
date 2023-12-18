// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10
// 11 12 13 14 15

#include<iostream>
int main()
{
    int n=5;
    //outerloop
    int counter = 1;
    for(int i=0;i<n;i++){
        //innerloop
        for(int j=0;j<=i;j++){
            std::cout<<counter<<" ";
            counter+=1;
        }
        std::cout<<std::endl;
    }
    return 0;
}