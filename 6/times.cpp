#include <iostream>
using namespace std;

int main(void){
    int rounds_user;
    int b = 1;
    
    cout << "Anna kokonaisluku: ";
    cin >> rounds_user;

    for (int i =1;i<=rounds_user;i++){
        b = i * b;
    }
    cout << "Luvun " << rounds_user << " kertoma on " << b << endl;
}
