#include<iostream>
int main()
{
    int n=5;

    //outerloop
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            std::cout<<" ";
        }        

        //letters
        char ch='A';
        int bp = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            std::cout<<ch;
            if(j<=bp) ch++;
            else ch--;
        }

        //spaces
        for(int j=0;j<n-i-1;j++){
            std::cout<<" ";
        } 
        std::cout<<"\n";
    }
    return 0;
}