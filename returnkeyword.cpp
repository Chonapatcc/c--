#include <iostream>
using namespace std;
int myfunc(int x){
    return 5 + x ;
    

}
int myfunc2(int x, int y){
    return x+y;
}
int main(){
    cout << myfunc(5) <<endl;

    cout << myfunc2(2,3) <<endl;
}
