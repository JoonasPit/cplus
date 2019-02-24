#include <iostream>
#include <string>
using namespace std;


class Tulostusluokka{
        public:

        void Tulosta();
}

void Tulostusluokka::Tulosta(){ 
    cout << merkkijono;
}


int main()
{
  char merkkijono[50];
  cout << "Anna merkkijono, jonka tulostan:";
  cin.get(merkkijono, 50);
  Tulostusluokka tulostaja;
  tulostaja.Tulosta(merkkijono);
} 