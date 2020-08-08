#include <iostream>
#include <stdlib.h> //srand, rand
#include <time.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int numero = 0;

    srand(time(NULL));

   for (int i = 0; i <=6 ; i++)
   {
       system("cls");
        // genera un numero entre 6 y 10
        numero = rand() % 6 + 1;
        cout << "Primer dado: " <<  numero << endl;   
        numero = rand() % 6 + 1;
        cout << "Segundo dado: " <<  numero << endl;   
        cout << endl;
   }
    
    return 0;
}