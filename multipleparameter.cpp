#include <iostream>
using namespace std;

void myfunction(string name ,int age){
    cout << name <<" has " << age<<" years old"<<endl;

}

int main(){
    myfunction("cat",2);
    myfunction("dad",5);

}