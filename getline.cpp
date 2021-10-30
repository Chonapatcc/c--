#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout << "Type your name. :" << endl;
    getline (cin,name); // if you use only cin (chan o => chan)
    cout << "Your name is : " << name; 
}