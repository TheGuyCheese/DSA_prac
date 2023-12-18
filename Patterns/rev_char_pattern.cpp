// ABCDE
// ABCD
// ABC
// AB
// A

#include<iostream>
int main()
{
    int n=5;
    //outerloop
    for(int i=n;i>=1;i--){
        //innerloop
        for(char ch='A';ch<='A'+i-1;ch++){
            std::cout<<ch;
        }
        std::cout<<"\n";
    }
    return 0;
}