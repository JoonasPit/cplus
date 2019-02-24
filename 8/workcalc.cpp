#include <iostream>
using namespace std;

int main(){
    int user_days =0 ;
    float taulukko[30];
    int where = 0;
    float allcombined = 0;
    float averagehours= 0;

    cout << "Ohjelma laskee yhteen haluamasi ajanjakson aikana\ntehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n";
    cout << "Kuinka monta päivää: ";
    cin >> user_days;
    if (user_days <= 30){
        for(int i = 1; i <= user_days; i++){
            cout << "Anna "<< i << ". päivän työtunnit: ";
            cin >> taulukko[where];
            allcombined = allcombined + taulukko[where];
            where++;
        }
        }
        
        cout << "Tehdyt työtunnit yhteensä: " << allcombined << endl;
        averagehours =allcombined/user_days;
        cout << "Keskimääräinen työpäivän pituus: " << averagehours << endl;
        cout << "Syötetyt tunnit: ";
        for (int c =0; c < user_days; c++){
        cout << taulukko[c] <<  " " << endl;
        }
    return 0;
}