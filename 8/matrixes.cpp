#include <iostream>
#include <fstream>

using namespace std;

void tulosta_matriisi(int matriisi[5][5]);
int laske_summa(int matriisi[5][5]); 

int main(void)
{
  int matriisi[5][5];
  int summa;
  ifstream luku("matriisi.txt");
  if (!luku){
        cout << "Tiedoston avaaminen epäonnistui...";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            luku >> matriisi[y][x];
          }
    }
    luku.close();
    cout << "Matriisi:" << endl;
    tulosta_matriisi(matriisi);
    summa = laske_summa(matriisi); 
    cout << "Alkioiden summa: " << summa << endl;
  }
}

void tulosta_matriisi(int matriisi[5][5]){
for(int z = 0; z < 5; z++){
        for(int x = 0; x < 5; x++){
            if(x==4){
                /* Controls on which value a new line is introduced */
                printf("%d \n",matriisi[z][x]);
            }
            else{
                /* This just prints the values on the current row */
                printf("%d ", matriisi[z][x]);
                }
        }
}
}

int laske_summa(int matriisi[5][5]){
    int totalsum = 0;
    for(int z = 0; z < 5; z++){
        for(int x = 0; x < 5; x++){
            
            totalsum = totalsum + matriisi[z][x];
            }
    }
    return totalsum;

}
