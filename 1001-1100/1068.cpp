#include<iostream>

int main(){
    int a;
    std::cin>>a;
    char grade;
    if(a>=90) grade='A';
    else if(a>=70) grade='B';
    else if(a>=40) grade='C';
    else grade='D';
    std::cout<<grade;
    return 0;
}
