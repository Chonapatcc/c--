#include <iostream>
using namespace std;
void myfunction(string name="cat"){
    cout << name << endl;

}

int main(){
    myfunction("bad");
    myfunction();
}