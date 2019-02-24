#include <iostream>
#include <string>
using namespace std;

class Tulostusluokka{
    public:
        char merkkijono[50];

        void Tulosta();
}
void Tulostusluokka::Tulosta(){
    cout << merkkijono;
}