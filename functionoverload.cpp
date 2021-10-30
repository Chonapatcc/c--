#include <iostream>
using namespace std;

int myfunc(int x ,int y){
    return x+y;
}

double myfunc(double x,double y){
    return x+y;
}

int main(){
    int func1=myfunc(1,2);
    double func2=myfunc(2.3,3.3); //you can use int but you cant get double answer.
    cout << func1<<endl;
    cout << func2<<endl;
}