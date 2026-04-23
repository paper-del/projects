#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
float oceny[5];
int tryb=0;
float srednia=0;
float maxi=0;
int main()
{
    cout << "podaj 5 ocen: "<< endl << "-------------------------"<< endl;
    for (int i = 0; i<=4; i++)
    {
        
        cout << i+1 << " ocena: ";
        cin >> oceny[i];
        system("cls");
        while((oceny[i]<0) || (oceny[i]>6))
        {
                cout << "nie ma takiej oceny podaj jeszcze raz "<<i+1<< " ocene: ";
                cin >> oceny[i];
                system("cls");
        }
    }
    do
    {
        cout << "witaj w menu wybierz opcje"<< endl;
        cout << "---------------------------" << endl;
        cout << "1. wyswietl wszystkie oceny" << endl;
        cout << "2. oblicz i wyswietl srednia z ocen" << endl;
        cout << "3. znajdz i wyswietl najwyzsza ocene" << endl;
        cout << "4. zakoncz program" << endl;
        cout << endl;
        cout << "wybierz tryb: ";
        cin>>tryb;

        switch(tryb)
        {
            case 1:
            {
                for (int i = 0; i<=4; i++)
                {
                    cout << oceny[i] << "," << endl;
                }
                system("pause");
                system("cls");
            }
            break;
            case 2:
            {
                for (int i = 0; i<=4; i++)
                {
                    srednia= srednia+ oceny[i];
                    
                }
                srednia = srednia/5;
                cout << "srednia to: "<< srednia<<endl;
                srednia = 0;
                system("pause");
                system("cls");
            }
            break;
            case 3:
            {
                for (int i = 0; i<=4; i++)
                {
                    if(oceny[i]>maxi)
                        maxi=oceny[i];
                }
                cout<<"najwieksza ocena to: " << maxi<<endl;
                system("pause");
                system("cls");

            }
            break;
            case 4:
            {
                exit(0);
            }
        }
    }while(tryb!=4);
return(0);
}