#include <iostream>
using namespace std;
int main(){
    try{
        int age=12;
        if (age>=18){
            cout <<"ok" << endl;
        }
        else{
            throw (age);
        }
    }
    catch (int myNum){
        cout << "no" << endl;
        cout << myNum;
    }
}