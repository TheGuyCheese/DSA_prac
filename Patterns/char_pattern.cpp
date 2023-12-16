#include<iostream>
int main()
{
    int n=5;
    char count='A';
    //outerloop
    for(int i=1;i<=n;i++){
        //innerloop
        for(int j=1;j<=i;j++){
            std::cout<<count;
        }
        std::cout<<"\n";
        count='A'+i;
    }
    return 0;
}