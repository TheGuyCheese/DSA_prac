//basic of hashing

#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    //hashing
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    //fetching
    int query;
    std::cin>>query;
    while(query--){
        int n;
        std::cin>>n;
        std::cout<<"The Number of times: " << hash[n]<<"\n";
    }
    return 0;
}