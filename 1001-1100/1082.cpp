#include<iostream>
#include<stdio.h>

int main(){
    int n;
    std::cin>>std::hex>>n;
    
    for(int i=1;i<16;i++){
        printf("%X*%X=%X\n",n,i,n*i);
    }
    return 0;
}
