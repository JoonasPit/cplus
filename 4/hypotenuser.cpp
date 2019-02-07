#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int first_cat;
    int second_cat;
    double hypotenuse;

    cout << "Anna ensimmäinen kateetti:";
    cin >> first_cat;
    cout << "Anna toinen kateetti:";
    cin >> second_cat;
    /* a2 = b2+c2 */
    double first_catpower = pow(first_cat,2);
    double second_catpower = pow(second_cat,2);

    hypotenuse = sqrt(first_catpower+second_catpower);
    cout << hypotenuse<<endl;

}
