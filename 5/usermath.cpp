#include <iostream>
using namespace std;

int main(){

    int userselection,userfirst,usersecond;
    char userchar;
    int result;
    float divisionres;

    cout << "Käytössäsi on seuraavat laskutoimitukset: " << endl;
    cout << "1: vähennyslasku\n2: yhteenlasku\n3: kertolasku\n4: osamäärä\n5: jakojäännös" << endl;
    cout <<  "Valitse laskutoimitus: "; 
    cin >> userselection;
    cout << "Anna eka luku: ";
    cin >> userfirst;
    cout << "Anna toinen luku: ";
    cin >> usersecond;
    
    switch (userselection)
    {
        case 1:
           result = userfirst - usersecond;
            userchar = '-';
            break;
        case 2:
            result = userfirst + usersecond;
            userchar = '+';
            break;
        case 3:
            result = userfirst * usersecond;
            userchar = '*';
            break;
        case 4:
            divisionres = (float)userfirst/usersecond;
            userchar = '/';
            break;
        case 5:
            result = userfirst % usersecond;
            userchar = '%';
            break;
    
        default:
            break;
    }
    if (userselection == 4){
        cout << userfirst << userchar << usersecond << "="<< divisionres << endl;
    }
    else{
        cout << userfirst << userchar << usersecond << "=" << result << endl;
    }


}