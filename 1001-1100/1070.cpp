#include<iostream>

int main(){
    int month;
    std::string season;
    std::cin>>month;
    if(month==12||month==1||month==2) season="winter";
    else if(month==3||month==4||month==5)season="spring";
    else if(month==6||month==7||month==8) season="summer";
    else if(month==9||month==10||month==11)season="fall";
    std::cout<<season;
    return 0;
}
