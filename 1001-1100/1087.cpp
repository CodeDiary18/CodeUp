#include<iostream>

int main(){
    int n;
    std::cin>>n;
    int result=0;
    int i=1;
    while(1){
        result+=i;
        if(result>=n){
            break;
        }
        i++;
    }
    std::cout<<result;
    return 0;
}
