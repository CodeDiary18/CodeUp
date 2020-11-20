#include<iostream>

int main(){
    char c;
    while(1){
        std::cin>>c;
        std::cout<<c<<"\n";
        if(c=='q') break;
    }
    return 0;
}
