#include<iostream>

int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i==3||i==6||i==9){
            std::cout<<"X ";
        }
        else{        
            std::cout<<i<<" ";
        }
    }
    return 0;
}
