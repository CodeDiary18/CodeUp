#include<iostream>

int main(){
    int r,g,b;
    std::cin>>r>>g>>b;
    for(int i=0;i<r;i++){
        for(int j=0;j<g;j++){
            for(int z=0;z<b;z++){
                std::cout<<i<<" "<<j<<" "<<z<<"\n";
            }
        }
    }
    std::cout<<r*g*b;
    return 0;
}
