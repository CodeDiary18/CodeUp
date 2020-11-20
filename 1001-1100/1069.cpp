#include<iostream>
#include<string>

int main(){
    char grade;
    std::string result;
    std::cin>>grade;
    if(grade=='A') result="best!!!";
    else if(grade=='B') result="good!!";
    else if(grade=='C') result="run!";
    else if(grade=='D') result="slowly~";
    else result="what?";
    std::cout<<result;
    return 0;
}
