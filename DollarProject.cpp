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
string password1;
string nu1;
string ncarta1;
int risposta1;
float saldovirtuale;

int main()
{

 cout<<"\nScrivi la Password (solo con lettere)\n";
 cin>>password1;
 cout<<"\nScrivi nome utente (senza spazi)\n";
 cin>>nu1;
 cout<<"Inserisci il numero carta che userai per i soldi(tutto attaccato)\n";
 cin>>ncarta1;
 system("cls");

	float saldor;
	srand(time(0));
	saldor=rand()%999999+1;
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
	char s;
	system("cls");
	cout<<"\nBenvenuti nella sezione saldo.";
	cout<<"\n\n\n\n";
    cout<<"Il tuo slado attuale e' di:"<<saldo;
	cout<<saldo;
	cout<<"\n  vuoi guadagnare di piu's|n (vai nella zo)";
	cin>>s;
	if(s=='s')
		{   
 traders();
}
else
{
	cout<<"\nerrore";
}
return 0;
}
	
	

int mercato()
{
float saldom; 
int merc;
 cout<<"Abbiamo tre prodotti su cui dovrai posare una certa somma di soldi e ricavarcene (se riesci), attenzione non sempre i soldi saliranno in positivo, ma anche scenderanno in negativo.";
 system("cls");
	cout<<"\n=========================================================     =========================================================";
	cout<<"\n|$DOLLARSIDE$----> MERCATO1                             |     |$DOLLARSIDE$----> MERCATO2                             |";
	cout<<"\n|*******************************************************|     |*******************************************************|";
	cout<<"\n|                  |     |                              |     | |                                                     |";
	cout<<"\n|                 |      |  |                           |     |   |                                                   |";
	cout<<"\n|                |       | | ||||||                     |     |    |                                                  |";
	cout<<"\n|               |         |         |                   |     |     |                                                 |";
	cout<<"\n|              |                      |                 |     |      |                                                |";
	cout<<"\n|         |   |                         |               |     |      |                                                |";
	cout<<"\n|        | | |                           |              |     |       |                                               |";
	cout<<"\n|       |   |                            |              |     |       |                              |                |";
	cout<<"\n|       |                                |              |     |        |                            |  |              |"; 
	cout<<"\n|      |                                 |              |     |        |                           |   |              |";
	cout<<"\n|    |                                   |     | | | | ||     |         | | | |  | |  || |  | | | |     | |  |        |";
	cout<<"\n|  |                                     |   |          |     |                                               | |     |";
	cout<<"\n|                                         | |           |     |                                                   | | |";
	cout<<"\n|*******************************************************|     |*******************************************************|";
	cout<<"\n|Caratteristiche: Moltiplicatore vincita 1.25x          |     |Caratteristiche: Moltiplicatore vincita 10.5x          |";           
	cout<<"\n=========================================================     =========================================================";

	
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
	cout<<"\n|Caratteristiche: Moltiplicatore vincita 2.5x           |";           
	cout<<"\n=========================================================\n";
	cout<<"\n\n\n\n\n\n";
	cin>>merc;
	while(merc!=1 && merc!=2 && merc!=3)
	{
		cout<<"correggiti,quello che hai inserito non esiste.\n";
		cin>>merc;
	}
	if(merc==1)
	{
		string password2;
		string nu2;
		string ncarta2;
		system("cls");
		float soldiinserire;
		string contattare;
		cout<<"Bene, non ami il rischio, hai scelto bene, pochi guadagni ma poche perdite.\n";
		cout<<"Inserisci quanti soldi vuoi:";
		cin>>soldiinserire;
		//saldo=saldo-soldiinserire;
		float percentuale;
	    srand(time(0));
	    percentuale=rand()%99+1;
	    if(saldom<75)
	    {
	      soldiinserire=soldiinserire*1.25;	
	      cout<<"\nIl mercato ha dato i sui frutti,il saldo e salito, lasciandoti con un reddito si 1.25x in piu.";
	      cout<<"\nPer ricevere i soldi deve contattare il numero qui sotto.";
	      cout<<"\n+39 45546781413";
	      cout<<"\nhai guadagnato:"<<soldiinserire;
	      
	      cout<<"\nContattare?(si/no)";
	      cin>>contattare;
	      if(contattare!="si" && contattare!="no")
	      {
	      	cout<<"errore";
		  }
		  else
	      if(contattare=="no")
	      {
	      	cout<<"\nI soldi verranno salvati nel saldo virtuale.Li potrai riscuotere in qualsiasi momento.";
	      	saldovirtuale=saldovirtuale+soldiinserire;
	      	cout<<"\ni tuoi soldi vituali totali sono:"<<saldovirtuale;
	      }
	      else
	      {
	      	cout<<"\nVolendoli riscattare devi inserire i dati del tuo account";
	      	cout<<"\nScrivi la Password (solo con lettere)\n";
            cin>>password2;
            while(password1!=password2)
            {
            	cout<<"\nerrore controlla la password\n";
            	cin>>password2;
			}
            cout<<"\nScrivi nome utente (senza spazi)\n";
            cin>>nu2;
            while(nu1!=nu2)
            {
            	cout<<"\nerrore controlla il nome\n";
            	cin>>nu2;
			}
            cout<<"\nInserisci il numero carta che userai per i soldi(tutto attaccato)\n";
            cin>>ncarta2;
            while(ncarta1!=ncarta2)
            {
            	cout<<"\nerrore controlla la carta\n";
            	cin>>ncarta2;
			}
			//saldo=saldo+soldiinserire;
			//cout<<"SALDO="<<
		  }
	    }
	    else
	    {
	    	cout<<"\nI soldi purtroppo andranno alle merci in cui hai scommesso ,ci dispiace.";
	    	soldiinserire=soldiinserire-soldiinserire*0,67;
	    	//saldo=saldo+soldiinserire;
	}	
	
}
return 0;
}
	int traders()
{   
{   
int s;
int q;
int t;
float ts;
float tss;

    system("cls");
	cout<<"\nBenvenuto nella sezione traders!";
	cout<<"\n in questa sezione potrai scegliere tra molti traders esperti";
	cout<<"\n===========================================================================";
	cout<<"\n|$DOLLARSIDE$---->traders                                                 |";
	cout<<"\n|*************************************************************************|";
	cout<<"\n|  TRADER NUM1______________                                              |";
	cout<<"\n|         | Dr. Aris Thorne |                                             |";
	cout<<"\n|          Ex Astro fisico che ha applicato le sue conoscienze            |";
	cout<<"\n|            nei grafici.Con lui compri una garanzia!                     |";
	cout<<"\n|               pero' questo avrà un costo superiore rispetto             |";
	cout<<"\n|                 ai suoi concorrenti                                     |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|*************************************************************************|";	
	cout<<"\n|  guadagno stimato--->30%                      costo=20% del guadagno    |";
	cout<<"\n===========================================================================\n\n\n";

	cout<<"\n===========================================================================";
	cout<<"\n|$DOLLARSIDE$---->traders                                                 |";
	cout<<"\n|*************************************************************************|";
	cout<<"\n|  TRADER NUM2______________                                              |";
	cout<<"\n|         | Viktor  Volkov |                                              |";
	cout<<"\n|          Viktor è un ex ingegnere aerospaziale che tratta il mercato    |";
	cout<<"\n|           come un enorme motore meccanico.Per lui, il prezzo di un asset|";
	cout<<"\n|               non è mai giusto o sbagliato, è solo in ritardo           |";
	cout<<"\n|                 rispetto alla realtà.                                   |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|*************************************************************************|";	
	cout<<"\n|  guadagno stimato--->40%                       costo=20% del guadagno   |";
	cout<<"\n===========================================================================\n\n\n";
	
	cout<<"\n===========================================================================";
	cout<<"\n|$DOLLARSIDE$---->traders                                                 |";
	cout<<"\n|*************************************************************************|";
	cout<<"\n|  TRADER NUM3______________                                              |";
	cout<<"\n|            | Elara  Vance |                                             |";
	cout<<"\n|      Ex campionessa di scacchi trasformatasi in trader ad alta frequenza|";
	cout<<"\n|               Elara non guarda i grafici nel modo tradizionale;         |";
	cout<<"\n|                     vede schemi numerici  e asimmetrie di mercato       |";
	cout<<"\n|                                  prima che si formino.                  |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|                                                                         |";
	cout<<"\n|*************************************************************************|";	
	cout<<"\n|  guadagno stimato--->20%                     costo=15% del guadagno     |";
	cout<<"\n===========================================================================\n\n\n";
	cin>>s;
	while(s!=1 && s!=2 && s!=3)
	{
		cout<<"\nerrore,non e disponibile";
		cin>>s;
	}
	if(s==1)
	{
		cout<<"\nhai scelto una garanzia!";
		cout<<"\nDr. Aris Thorne sta lavorando per te... inserisci la quota che vuoi";
		cin>>q;
		int t(q*10/100);
		float ts(t+q);
		cout<<"\nDr. Aris Thorne e riuscito a fare "<<ts<<"euro, si e' gia' preso la sua parte";
		
		
		
	}
	else
	{
		if(s==2)
		{
	cout<<"\nhai scelto una garanzia!";
		cout<<"\n Viktor  Volkov sta lavorando per te... inserisci la quota che vuoi";
		cin>>q;
		int t(q*20/100);
		float ts(t+q);
		cout<<"\nDr.Viktor  Volkov e riuscito a fare "<<ts<<"euro, si e' gia' preso la sua parte";
	}
	else
	{
		if(s==3)
		{
		
	cout<<"\nhai scelto una garanzia!";
		cout<<"\n Viktor  Volkov sta lavorando per te... inserisci la quota che vuoi";
		cin>>q;
		int t(q*5/100);
		float ts(t+q);
		cout<<"\nDr.Viktor  Volkov e riuscito a fare "<<ts<<"euro, si e' gia' preso la sua parte";	
	}
	}
}
	return 0;
	
}	
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
		cout<<"benvenuto nella sezione shop!!";
	cout<<"\n===========================================================================";
	cout<<"\n|$DOLLARSIDE$---->shop                                                    |";
	cout<<"\n|*************************************************************************|";
	cout<<"\n|_______________le nostre cards___________________________________________|";
	cout<<"\n|bronze card                     | platinum card| gold card       |";
	cout<<"\n| hai una prova gratuita         |              |                 |       |";
	cout<<"\n| sulla sezione traders          |                      |";
	cout<<"\n|                                |                                ";
	cout<<"\n|                                |                    |";
	cout<<"\n|                                |                                         |";
	cout<<"\n|                                |                                         |";
	cout<<"\n|                                |                                         |";
	cout<<"\n|                                |                                         |";
	cout<<"\n|                                |                                         |";
	cout<<"\n|                                |                                         |";
	cout<<"\n| costo=50$                      |                                         |";
	cout<<"\n|*************************************************************************|";	
	cout<<"\n|  guadagno stimato--->20%                     costo=15% del guadagno     |";
	cout<<"\n===========================================================================\n\n\n";
	return 0;	
}
int deposito()
{
	return 0;
}
