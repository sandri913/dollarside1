#include<iostream>
#include<cstdlib>
#include<sstream>
#include<ctime>

using namespace std;

int s;
int saldo();
int mercato();
int traders();
int prelievo();
int lavori();
int Shop();
int deposito();
string password;
string nu;
int risposta1;

int main()
{

 cout<<"\nScrivi la Password (solo con lettere)\n";
 cin>>password;
 cout<<"\nScrivi nome utente (senza spazi)\n";
 cin>>nu;
 system("cls");
 cout<<"\nBenvenuti al menu,grazie di averci supportato...\n";
 cout<<"\n1) Saldo       ";
 cout<<"\n2) Mercato     ";
 cout<<"\n3) traders     ";
 cout<<"\n4) Prelievo    ";
 cout<<"\n5) Lavori      ";
 cout<<"\n6) Shop        ";
 cout<<"\n7) Deposito    ";
do
{
	cout<<"\n inserisci quello che vuoi eseguire!(numero)";
	cin>>s;
	
}
while( s<1 || s>7);



switch(s)
{
	case 1:
		cout<<"hai scelto il saldo!";
		saldo();
	break;
	case 2:
		cout<<"hai scelto il mercato!";
	break;
	case 3:
		cout<<"hai scelto i traders!";
	break;
	case 4:
		cout<<"hai scelto il prelievo!";
	break;
	case 5:
		cout<<"hai scelto i lavori!";
	break;
	case 6:
		cout<<"hai scelto lo shop!";
	break;
	case 7:
		cout<<"hai scelto il deposito!";
	break;
	default:
	break;	
}

return 0;
}
int saldo()
{
	system("cls");
	cout<<"\nBenvenuti nella sezione saldo.";
	cout<<"\n\n\n\n";
	float saldor;
	srand(time(0));
	saldor=rand()%999999+1;
    cout<<"Il tuo slado attuale e' di:"<<saldor;
	return 0;
	
}
