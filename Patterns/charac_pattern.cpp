// A
// AB
// ABC
// ABCD
// ABCDE

#include<iostream>
int main()
{
    int n=5;
    //outerloop
    for(int i=0;i<n;i++){
        //innerloop
        for(char ch='A';ch<='A'+i;ch++){
            std::cout<<ch;
        }
        std::cout<<"\n";
    }
    return 0;
}