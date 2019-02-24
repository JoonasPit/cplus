#include <iostream>
using namespace std;

int suurin(int eka, int toka, int kolmas);
int pienin(int eka, int toka, int kolmas);

int main()
{
  int luku1, luku2, luku3, suurinLuku, pieninLuku;
  cout << "Syötä ensimmäinen kokonaisluku:";
  cin >> luku1;
  cout << "Syötä toinen kokonaisluku:";
  cin >> luku2;
  cout << "Syötä kolmas kokonaisluku:";
  cin >> luku3;
  suurinLuku = suurin(luku1, luku2, luku3);
  pieninLuku = pienin(luku1, luku2, luku3);
  cout << "Syöttämistäsi luvuista suurin oli " << suurinLuku;
  cout << " ja pienin " << pieninLuku << "." << endl;
}

int suurin(int luku1, int luku2 , int luku3){
    if (luku1 > luku2 && luku1 > luku3){
    return luku1;
    }
    else if (luku2 > luku1 && luku2 > luku3) {
        return luku2;
    }
     else if (luku3 > luku1 && luku3 > luku2){
        return luku3;
    }
}

int pienin(int luku1, int luku2 , int luku3){
    if (luku1 < luku2 && luku1 < luku3){
        return luku1;
    }
    else if (luku2 < luku1 && luku2 < luku3){
        return luku2;
    }
    else if (luku3 < luku1 && luku3 < luku2){
        return luku3;
    }
}
    