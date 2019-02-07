#include <iostream>
using namespace std;

main(){

    int user_firstnum;
    int user_secnum;
    int sum;
    int division;
    int times;
    float remainderof;

    cout << "Syötä ensimmäinen kokonaisluku:";
    cin >> user_firstnum;
    cout << "Syötä toinen kokonaisluku:";
    cin >> user_secnum;
    sum = user_firstnum + user_secnum;
    division = user_firstnum - user_secnum;
    times = user_firstnum * user_secnum;
    remainderof = user_firstnum % user_secnum;
    cout << user_firstnum<<"+"<<user_secnum << "="<< sum << endl;
    cout <<  user_firstnum << "-" << user_secnum << "=" << division << endl;
    cout <<  user_firstnum << "*" << user_secnum<< "=" << times << endl;
    cout << "Jakojäännös: "<< remainderof << endl;
}