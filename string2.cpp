#include <iostream>
#include <string>
using namespace std;
int main(){
    string fname="cat", lname="bad";
    cout << fname+lname <<endl;
    cout << fname.append(lname)<<endl; // + or append()

    string name="daddadadadad";
    cout << name.length(); // length() or size()
    cout << name.size();

}
