#include <iostream>
using namespace std;

main(){
    float berry_pie = 3.142;
    int user_radius;
    float countradius;

    cout << "Anna ympyrän säde:";
    cin >> user_radius;
    countradius = berry_pie * (user_radius*user_radius);
    cout << "Ympyrän ala annetulla säteellä: " << countradius;
}