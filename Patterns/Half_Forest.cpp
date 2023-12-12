// *
// **
// ***
// ****
// Pattern to print

#include<iostream>
using namespace std;
int main()
{
    // outer loop for rows
    for(int i=0;i<4;i++){

        //inner loop for columns
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}