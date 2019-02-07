#include <iostream>
using namespace std;

int main(){
    double user_mark;
    double conversion = 5.94573; 

    cout << "Syötä jokin markkamäärä:";
    cin >> user_mark;
    cout << "Markat euroina: " << user_mark/conversion << endl;
}