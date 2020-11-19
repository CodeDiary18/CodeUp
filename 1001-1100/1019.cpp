#include<iostream>
#include<string>

using namespace std;

int main(){
    int year, month, day;
    char d;
    cin>>year>>d>>month>>d>>day;
    
    cout.width(4);
    cout.fill('20');
    cout<<year<<d;
    
    cout.width(2);
    cout.fill('0');
    cout<<month<<d;
    
    cout.width(2);
    cout.fill('0');
    cout<<day;
    return 0;
}
