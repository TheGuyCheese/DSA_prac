//checking if the string is a palindrome or not
#include<bits/stdc++.h>
bool solution(std::string &str, int i){
    if(i>=str.length()/2) return true;

    if(str[i]!=str[str.length()-i-1]) return false;

    return solution(str, i+1);
}
int main()
{
    std::string str="madam";
    std::cout<<solution(str,0);
    

    return 0;
}