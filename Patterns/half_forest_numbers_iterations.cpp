// 1
// 22
// 333
// 4444
// Pattern to print

#include<iostream>
using namespace std;
int main()
{
    // outer loop for rows
    for(int i=1;i<5;i++){

        //inner loop for columns
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}