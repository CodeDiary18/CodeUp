#include<iostream>

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    int day=1;
    while(1){
        if(day%a==0 && day%b==0 && day%c==0){
            break;
        }
        day++;
    }
    std::cout<<day;
    return 0;
}
