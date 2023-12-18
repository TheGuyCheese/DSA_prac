// E 
// D E 
// C D E 
// B C D E
// A B C D E

#include<iostream>
int main()
{
    int n=5;
    //outerloop
    for(int i=0;i<n;i++){
        for(char j='E'-i;j<='E';j++){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}