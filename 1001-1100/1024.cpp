#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        cout<<"'"<<a[i]<<"'\n";
    }
    return 0;
}
