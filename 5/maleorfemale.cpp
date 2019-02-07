#include <iostream>
using namespace std;

int main(){
    char maleorfemale;
    int userage;

    cout <<"Oletko mies vai nainen (m/n) ";
    cin >> maleorfemale;
    cout << "Anna ikäsi: ";
    cin >> userage;

    if (userage >= 0)
    {
        if (userage <= 55 && userage > 0){
            if (maleorfemale == 'm'){
                cout << "Olet mies parhaassa iässä!"<<endl;
            }
            else if (maleorfemale == 'n'){
                cout << "Olet neito kauneimmillasi!" << endl;
            }
        
        else if (userage>=56 && userage<= 100){
            if(maleorfemale == 'm'){
                cout << "Olet viisas mies!" << endl;
            }
            else if(maleorfemale == 'n'){
                cout << "Näytät nuorelta ikäiseksesi!" << endl;
            }
        }
        }

}

    else
    {
        cout << "Ohjelmassa on tapahtunut virhe!" << endl;
    }
}