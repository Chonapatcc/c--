#include <iostream>
using namespace std;
class myclass{
    public:
        int num;
        string mytext;
};


int main(){
    myclass myobject;

    myobject.num=2;
    myobject.mytext="cat222";


    cout << myobject.num << endl;

    cout << myobject.mytext << endl;


}