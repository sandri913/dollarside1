
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
		mercato();
	break;
	case 3:
		cout<<"hai scelto i traders!";
		traders();
	break;
	case 4:
		cout<<"hai scelto il prelievo!";
		prelievo();
	break;
	case 5:
		cout<<"hai scelto i lavori!";
		lavori();
	break;
	case 6:
		cout<<"hai scelto lo shop!";
		Shop();
	break;
	case 7:
		cout<<"hai scelto il deposito!";
		deposito();
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
int mercato()
{  cout<<"Abbiamo tre prodotti su cui dovrai posare una certa somma di soldi e ricavarcene (se riesci), attenzione non sempre i soldi saliranno in positivo, ma anche scenderanno in negativo.";
	cout<<"\n=========================================================";
	cout<<"\n|$DOLLARSIDE$----> MERCATO1                             |";
	cout<<"\n|*******************************************************|";
	cout<<"\n|                  |     |                              |";
	cout<<"\n|                 |      |  |                           |";
	cout<<"\n|                |       | | ||||||                     |";
	cout<<"\n|               |         |         |                   |";
	cout<<"\n|              |                      |                 |";
	cout<<"\n|         |   |                         |               |";
	cout<<"\n|        | | |                           |              |";
	cout<<"\n|       |   |                            |              |";
	cout<<"\n|       |                                |              |";
	cout<<"\n|      |                                 |              |";
	cout<<"\n|    |                                   |     | | | | ||";
	cout<<"\n|  |                                     |   |          |";
	cout<<"\n|                                         | |           |";
	cout<<"\n|*******************************************************|";
	cout<<"\n|Caratteristiche: Moltiplicatore vincita 1.25x          |";           
	cout<<"\n=========================================================\n\n\n\n";
	cout<<"\n=========================================================";
	cout<<"\n|$DOLLARSIDE$----> MERCATO2                             |";
	cout<<"\n|*******************************************************|";
	cout<<"\n| |                                                     |";
	cout<<"\n|   |                                                   |";
	cout<<"\n|    |                                                  |";
	cout<<"\n|     |                                                 |";
	cout<<"\n|      |                                                |";
	cout<<"\n|      |                                                |";
	cout<<"\n|       |                                               |";
	cout<<"\n|       |                              |                |";
	cout<<"\n|        |                            |  |              |";
	cout<<"\n|        |                           |   |              |";
	cout<<"\n|         | | | |  | |  || |  | | | |     | |  |        |";
	cout<<"\n|                                               | |     |";
	cout<<"\n|                                                   | | |";
	cout<<"\n|*******************************************************|";
	cout<<"\n|Caratteristiche: Moltiplicatore vincita 10.5x          |";           
	cout<<"\n=========================================================\n\n\n\n";
	cout<<"\n=========================================================";
	cout<<"\n|$DOLLARSIDE$----> MERCATO3                             |";
	cout<<"\n|*******************************************************|";
	cout<<"\n|                                                       |";
	cout<<"\n|                                                       |";
	cout<<"\n|                                                       |";
	cout<<"\n|               | |                                     |";
	cout<<"\n|              |   |                                    |";
	cout<<"\n|         |   |      |                                | |";
	cout<<"\n|        | | |        |                              |  |";
	cout<<"\n|       |   |         |                            |    |";
	cout<<"\n|       |              |                           |    |";
	cout<<"\n|      |                | |                  | | |      |";
	cout<<"\n|    |                      ||           |              |";
	cout<<"\n|  |                         |          |               |";
	cout<<"\n|                              |       |                |";
	cout<<"\n|*******************************************************|";
	cout<<"\n|Caratteristiche: Moltiplicatore vincita 2.5x          |";           
	cout<<"\n=========================================================\n";
	cout<<"\n\n\n\n\n\n";
	cin>>merc;
	while(merc!=1 && merc!=2 && merc!=3)
	{
		cout<<"correggiti,quello che hai inserito non esiste.";
		cin>>merc;
	}
	if(merc==1)
	{
		float soldiinserire;
		cout<<"Bene, non ami il rischio, haiscelto bene, pochi guadagbi ma poche perdite.";
		cout<<"Inserisci quanti soldi vuoi inserire:";
		cin>>soldiinserire;
		float percentuale;
	    srand(time(0));
	    percentuale=rand()%99+1;
	    if(saldor<75)
	    {
	    	
		}
	return 0;
}
int traders()
{
	return 0;
}
int prelievo()
{
	return 0;
}
int lavori()
{
	return 0;
}
int Shop()
{
	return 0;	
}
int deposito()
{
	return 0;
}
