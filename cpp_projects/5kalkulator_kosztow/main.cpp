#include <iostream>

using namespace std;
void powitanie()
{
    cout<<"====================================="<<endl;
    cout<<"WITAJ W KALKULATORZE PODROZY"<<endl;
    cout<<"====================================="<<endl;
}
float obliczKoszt(float dys,float spal,float cen)
{
    
    return (dys/100)*spal*cen;
}
int main()
{
    float dystans,spalanie,cena;
    powitanie();
    cout <<"podaj dane: "<< endl;
    cout <<"dystans: ";cin >> dystans;
    cout <<"spalanie: ";cin>> spalanie;
    cout <<"cena paliwa: ";cin>>cena;

    

    

    cout<<"cena to: "<<obliczKoszt(dystans,spalanie,cena);
    return 0;
}