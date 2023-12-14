// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// pattern to print 

#include<iostream>
int main()
{
    int n=5;
    int start = 1;
    //outerloop
    for(int i=0;i<n;i++){
        //innerloop
        if(i%2==0) start = 1;
        else start=0;
        for(int j=0;j<=i;j++){
            std::cout<<start;
            start = 1-start;
        }
        std::cout<<"\n";
    }
    return 0;
}