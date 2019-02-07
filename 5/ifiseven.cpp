#include <iostream>
using namespace std;

int main(){
    int usernum;

    cout << "Anna kokonaisluku:";
    cin >> usernum;
    if(usernum%2 == 0){
        cout << "Luku "<< usernum <<" on parillinen" << endl;
    }
    else{
        cout << "Luku " << usernum <<" on pariton" << endl;
    }
}