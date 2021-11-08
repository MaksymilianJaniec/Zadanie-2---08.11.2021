#include <iostream>
#include <string>
using namespace std;

class Uczen
{
public:

string imie, nazwisko, klasa;
int rok_urodzenia;
int grupa;

void metryczka();
};

void Uczen::metryczka()
{
cout<<"Imie: Maksymilian "<<endl;
cout<<"Nazwisko: Janiec "<<endl;	
cout<<"Data: 08.11.2021 "<<endl;
}

int main()
{	
Uczen *w_uczen = new Uczen();

w_uczen->metryczka();

cout<<endl;

cout<<"Imie: ";
cin>>w_uczen->imie;
cout<<"Nazwisko: ";
cin>>w_uczen->nazwisko;
cout<<"Rok urodzenia: ";
cin>>w_uczen->rok_urodzenia;
cout<<"Klasa: ";
cin>>w_uczen->klasa;
cout<<"Grupa: ";
cin>>w_uczen->grupa;
	

return 0;	
}



