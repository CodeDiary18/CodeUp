#include<iostream>

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    int result=(a<b?a:b)<c?(a<b?a:b):c;
    std::cout<<result;
    return 0;
}
