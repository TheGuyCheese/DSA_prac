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