// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <iostream>
int main()
{
    int n=4;
    //outerloop
    for(int i=0;i<2*n-1;i++){
        //innerloop
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            std::cout<<(n-std::min(std::min(top, bottom), std::min(left, right)));
        }
        std::cout<<"\n";
    }
    return 0;
}