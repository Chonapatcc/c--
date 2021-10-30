#include <iostream>
using namespace std;
int main(){
    string name ="bem";
    string &meal =name;
    cout << name << endl;
    cout << meal << endl; // reference to the location of variable .
}