#include<iostream>

int main(){
    char c1,c2;
    std::cin>>c1;
    c2='a';
    while(1){
        std::cout<<c2<<" ";
        if(c2==c1) break;
        c2++;
    }
    return 0;
}
