#include<iostream>
#include<iomanip>

int main(){
    int year,month,day;
    char b;
    std::cin>>year>>b>>month>>b>>day;
    std::cout.width(2);
    std::cout.fill('0');
    std::cout<<day<<"-";
    std::cout.width(2);
    std::cout.fill('0');
    std::cout<<month<<"-";
    std::cout.width(4);
    std::cout.fill('0');
    std::cout<<year;
    return 0;
}
