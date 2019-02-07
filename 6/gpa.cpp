#include <iostream>
using namespace std;

int main(){

    int user_grade = 0;
    int fullnr = 0;
    int i = 0;
 
    cout << "Ohjelma laskee syötettyjen arvosanojen keskiarvon." << endl;
    cout << "Lopetus negatiivisella kokonaisluvulla." << endl;
    /**/

    while(user_grade >= 0){
            cout << "Anna arvosana (4-10): ";
            cin >> user_grade;

            if (user_grade>=4 && user_grade<=10){
            fullnr = (fullnr+user_grade);
            i++;   
            }
            else if(user_grade < 4 && user_grade>0 || user_grade > 10){
                cout << "Pitää olla välillä(4-10): " << endl;
            }
            else if (user_grade<0){
                break;
            }


    }
        float gpa = (float)fullnr/i;
        cout << "Ohjelmaan on syötetty" << i << " arvosanaa." << endl;
        cout << "Arvosanojen keskiarvo: " << gpa << endl;
        return 0;

}

