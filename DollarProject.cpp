#include<iostream>
#include<cstdlib>
#include<sstream>
#include<ctime>

using namespace std;

int s;
int curricolum();
int menu();
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
float saldor;
float saldonow;
//float trt;

int main()
{
	
 system ("color F0");
 cout<<"______________________________________________________________________________________________________________________________________________________________   \n";
 cout<<"|                                                                                                                                                             |  \n";
 cout<<"|             dddddddd                                                                                                           dddddddd                     |  \n";                                                                                                                                                           
 cout<<"|             d::::::d                 lllllll lllllll                                                         iiii              d::::::d                     |  \n";
 cout<<"|             d::::::d                 l:::::l l:::::l                                                        i::::i             d::::::d                     |  \n";
 cout<<"|             d::::::d                 l:::::l l:::::l                                                         iiii              d::::::d                     |  \n";
 cout<<"|             d:::::d                  l:::::l l:::::l                                                                           d:::::d                      |  \n";
 cout<<"|     ddddddddd:::::d    ooooooooooo    l::::l  l::::l   aaaaaaaaaaaaa  rrrrr   rrrrrrrrr       ssssssssss   iiiiiii     ddddddddd:::::d     eeeeeeeeeeee     |  \n";
 cout<<"|   dd::::::::::::::d  oo:::::::::::oo  l::::l  l::::l   a::::::::::::a r::::rrr:::::::::r    ss::::::::::s  i:::::i   dd::::::::::::::d   ee::::::::::::ee   |  \n";
 cout<<"|  d::::::::::::::::d o:::::::::::::::o l::::l  l::::l   aaaaaaaaa:::::ar:::::::::::::::::r ss:::::::::::::s  i::::i  d::::::::::::::::d  e::::::eeeee:::::ee |  \n";
 cout<<"| d:::::::ddddd:::::d o:::::ooooo:::::o l::::l  l::::l            a::::arr::::::rrrrr::::::rs::::::ssss:::::s i::::i d:::::::ddddd:::::d e::::::e     e:::::e |  \n";
 cout<<"| d::::::d    d:::::d o::::o     o::::o l::::l  l::::l     aaaaaaa:::::a r:::::r     r:::::r s:::::s  ssssss  i::::i d::::::d    d:::::d e:::::::eeeee::::::e |  \n";
 cout<<"| d:::::d     d:::::d o::::o     o::::o l::::l  l::::l   aa::::::::::::a r:::::r     rrrrrrr   s::::::s       i::::i d:::::d     d:::::d e:::::::::::::::::e  |  \n";
 cout<<"| d:::::d     d:::::d o::::o     o::::o l::::l  l::::l  a::::aaaa::::::a r:::::r                  s::::::s    i::::i d:::::d     d:::::d e::::::eeeeeeeeeee   |  \n";
 cout<<"| d:::::d     d:::::d o::::o     o::::o l::::l  l::::l a::::a    a:::::a r:::::r            ssssss   s:::::s  i::::i d:::::d     d:::::d e:::::::e            |  \n";
 cout<<"| d::::::ddddd::::::ddo:::::ooooo:::::ol::::::ll::::::la::::a    a:::::a r:::::r            s:::::ssss::::::si::::::id::::::ddddd::::::dde::::::::e           |  \n";
 cout<<"|  d:::::::::::::::::do:::::::::::::::ol::::::ll::::::la:::::aaaa::::::a r:::::r            s::::::::::::::s i::::::i d:::::::::::::::::d e::::::::eeeeeeee   |  \n";
 cout<<"|   d:::::::::ddd::::d oo:::::::::::oo l::::::ll::::::l a::::::::::aa:::ar:::::r             s:::::::::::ss  i::::::i  d:::::::::ddd::::d  ee:::::::::::::e   |  \n";
 cout<<"|    ddddddddd   ddddd   ooooooooooo   llllllllllllllll  aaaaaaaaaa  aaaarrrrrrr              sssssssssss    iiiiiiii   ddddddddd   ddddd    eeeeeeeeeeeeee   |  \n";
 cout<<"|                                                                                                                                                             |  \n";                                                                                                                                                          
 cout<<"|                                                                                                                                                             |  \n";                                                                                                                                                          
 cout<<"|                                                                                                                                                             |  \n";                                                                                                                                                          
 cout<<"|                                                                                                                                                             |  \n";                                                                                                                                                           
 cout<<"|                                                                                                                                                             |  \n";                                                                                                                                                           
 cout<<"|                                                           PASSWORD (solo con lettere senza spazi)";cin>>password1;
 cout<<"|                                                           UTENTE (solo con lettere senza spazi)";cin>>nu1;                                                                     
 cout<<"|                                                           NUMERO CARTA(tutto attaccato)";;cin>>ncarta1;
 cout<<"|______________________________________________________________________________________________________________________________________________________________   \n";
 system("cls");
                        cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");

	cin.ignore();
	//srand(time(0));
	//saldor=rand()%99+1;
	//saldor=saldor+trt;
	saldor=10000;
	menu();
	return 0;
}
int menu()
{
system("cls");
cout<<"\nBenvenuti al menu,grazie di averci supportato...\n";
 cout<<"\n1) Saldo       ";
 cout<<"\n2) Mercato     ";
 cout<<"\n3) traders     ";
 cout<<"\n4) Prelievo    ";
 cout<<"\n5) Lavori      ";
 cout<<"\n6) Shop        ";
 cout<<"\n7) Deposito    ";
 cout<<"\n8) Curriculum  ";
cout<<"\nrisposta:";

cin>>s;
while(s!=1 && s!=2 && s!=3 && s!=4 && s!=5 && s!=6 && s!=7 && s!=8)
{
	cout<<"errore";
	cin>>s;
	
}
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
	case 8:
		cout<<"hai scelto il curriculum!";
		curricolum();
	break;
	default:
	break;	
}

return 0;
}
int saldo()
{

	char s;
	                    cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");
	cout<<"\nBenvenuti nella sezione saldo.";
	cout<<"\n\n\n\n";
    
    cout<<"Il tuo slado attuale e' di:"<<saldor;
	
	cout<<"\n  vuoi guadagnare di piu's|n (vai nella zona traders)";
	cin>>s;
		while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
if(s=='s')
{
	traders();
}
else
{
	cout<<"\n vuoi andare nel menu principale?(s|n)";
	cin>>s;
			while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
	if(s=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	}
	
}

	

return 0;
}
	
	

int mercato()
{
char s;
float saldom; 
int merc;
cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");
 cout<<"Abbiamo tre prodotti su cui dovrai posare una certa somma di soldi e ricavarcene (se riesci), attenzione non sempre i soldi saliranno in positivo, ma scenderanno anche in negativo.";
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
		while(soldiinserire>saldor)
	    {
	    	cout<<"Attenzione non disponi di questa cifra";
	    	cin>>soldiinserire;
		}
	    
		saldor=saldor-soldiinserire;
		float percentuale;
	    srand(time(0));
	    percentuale=rand()%99+1;
	    if(saldom<75)
	    {
	      soldiinserire=soldiinserire*1.25;	
	      cout<<"\nIl mercato ha dato i sui frutti,il saldo e salito, lasciandoti con un reddito di 1.25x in piu.";
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
			cout<<"Bene grazie di averci scelto.";
			
			//trt=saldor+soldiinserire;
			cout<<"SALDO="<<saldor;
		  }
	    }
	    else
	    {
	    	cout<<"\nI soldi purtroppo andranno alle merci in cui hai scommesso ,ci dispiace.";
	    	soldiinserire=soldiinserire-soldiinserire*0,67;
	    	saldor=saldor+soldiinserire;
	}	
		}
	cout<<"\n vuoi andare nel menu principale?(s|n)";
	cin>>s;
			while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
	if(s=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	}

     if(merc==2)
	{
		string password2;
		string nu2;
		string ncarta2;
		system("cls");
		float soldiinserire;
		string contattare;
		cout<<"Sei un amante del rischio vedo... Attento\n";
		cout<<"Inserisci quanti soldi vuoi:";
		if(soldiinserire>saldor)
	    {
	    	cout<<"Attenzione non disponi di questa cifra";
		}
		else
		{
	
		cin>>soldiinserire;
		saldor=saldor-soldiinserire;
		float percentuale;
	    srand(time(0));
	    percentuale=rand()%99+1;
	    if(saldom<7)
	    {
	      soldiinserire=soldiinserire*10.5;	
	      cout<<"\nIl mercato ha dato i sui frutti,il saldo e salito, lasciandoti con un reddito di 10.5x in piu.";
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
			cout<<"Bene grazie di averci scelto.";
			
			saldor=saldor+soldiinserire;
			cout<<"SALDO="<<saldor;
		  }
	    }
	    else
	    {
	    	cout<<"\nI soldi purtroppo andranno alle merci in cui hai scommesso ,ci dispiace.";
	    	soldiinserire=soldiinserire-soldiinserire*0,67;
	    	saldor=saldor+soldiinserire;
	}	
		}
	cout<<"\n vuoi andare nel menu principale?(s|n)";
	cin>>s;
			while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
	if(s=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	}
}
	if(merc==3)
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
		while(soldiinserire>saldor)
	    {
	    	cout<<"Attenzione non disponi di questa cifra";
	    	cin>>soldiinserire;
		}
	    
		saldor=saldor-soldiinserire;
		float percentuale;
	    srand(time(0));
	    percentuale=rand()%99+1;
	    if(saldom<75)
	    {
	      soldiinserire=soldiinserire*2.5;	
	      cout<<"\nIl mercato ha dato i sui frutti,il saldo e salito, lasciandoti con un reddito di 2.5x in piu.";
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
			cout<<"Bene grazie di averci scelto.";
			
			//trt=saldor+soldiinserire;
			cout<<"SALDO="<<saldor;
		  }
	    }
	    else
	    {
	    	cout<<"\nI soldi purtroppo andranno alle merci in cui hai scommesso ,ci dispiace.";
	    	soldiinserire=soldiinserire-soldiinserire*0,67;
	    	saldor=saldor+soldiinserire;
	}	
		}
	cout<<"\n vuoi andare nel menu principale?(s|n)";
	cin>>s;
			while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
	if(s=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	}




return 0;
}
	int traders()
{   
char sm;
int s;
int q;
int t;
float ts;
float tss;

						cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
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
	cout<<"inserisci il numero del trader che vuoi usare";
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
		while(q>saldor)
		{
			cout<<"errore";
			cin>>q;
		}
		int t(q*10/100);
		
		cout<<"\nDr. Aris Thorne e riuscito a fare "<<t<<"euro, si e' gia' preso la sua parte";
		float saldorn=saldor+t;
		cout<<"\n ora nel conto hai"<<saldorn;
		
		
		
	}
	else
	{
		if(s==2)
		{
	cout<<"\nhai scelto una garanzia!";
		cout<<"\n Viktor  Volkov sta lavorando per te... inserisci la quota che vuoi";
		cin>>q;
		while(q>saldor)
		{
			cout<<"errore";
			cin>>q;
		}
		int t(q*20/100);
		
		cout<<"\nViktor  Volkov e riuscito a fare "<<t<<"euro, si e' gia' preso la sua parte";
				float saldorn=saldor-ts;
		cout<<"\n ora nel conto hai"<<saldorn;
	}
	else
	{
		if(s==3)
		{
		
	cout<<"\nhai scelto una garanzia!";
		cout<<"\n Elara  Vance sta lavorando per te... inserisci la quota che vuoi";
		cin>>q;
		while(q>saldor)
		{
			cout<<"errore";
			cin>>q;
		}
		int t(q*5/100);
		cout<<"\nElara  Vance e riuscito a fare "<<t<<"euro, si e' gia' preso la sua parte";
		float saldorn=saldor-ts;
		cout<<"\n ora nel conto hai"<<saldorn;	
	}
	}
}
	cout<<"\n vuoi andare nel menu principale?(s|n)";
	cin>>sm;		while(sm!='s' && sm!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>sm;
	}
	if(sm=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	}	
	return 0;
}
	

int prelievo()
{	
    char v;
    
  					    cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");
    cout << "\n--- SPORTELLO PRELIEVI ---\n";
    float importo;
    cout << "Il tuo saldo attuale e': " << saldor;
    cout << "Quanto vuoi prelevare? \nImporto: ";
    cin >> importo;
    if (importo > saldor)
    {
        cout << "\n[ERRORE] Fondi insufficienti! Non puoi prelevare piu' di " << saldor;
    }
    else
    {
        saldor = saldor - importo;
        cout << "\nPrelievo completato. Nuovo saldo: " << saldor;
    }
    cout << "\nVuoi andare nel menu principale? (s|n): ";
    cin >> v;
    
    while (v != 's' && v != 'n')
    {
        cout << "\nErrore, inserisci s per cambiare sezione altrimenti n: ";
        cin >> v;
    }
    
    if (v == 's')
    {
        menu();
    }
    else
    {
        cout << "\nArrivederci, alla prossima!\n";
    }
   
    return 0;
}
int lavori()
{	
char s;
int sl;
char c;
string comp;
cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");
cout<<"\n===============================================================================================================================|";
	cout<<"\n|$DOLLARSIDE$---->lavori                                                                                                   |";
	cout<<"\n|**************************************************************************************************************************|";
	cout<<"\n|_______________le nostre proposte in evidenzia (se ti interressa inserisci il numero altrimenti inserisci 4)______________|";
	cout<<"\n|lavoro num1                     | lavoro num2                          |lavoro num3                                       |";
	cout<<"\n| sarai un magazziniere nella    | sarai un meccanico per le moto presso| sarai un dipendente per il negozio cipside       |";
	cout<<"\n| azienda robotmaster,lavori 6   | l'officina di alfredo motorparts     | lavori 5 giorni su 7,6 ore al giorno             |";
	cout<<"\n| giorni su 7, 6 ore al giorno   | lavori 5 giorni su 7,8 ore al giorno | hai una pausa dopo 4 ore                         |";
	cout<<"\n| hai una pausa dopo 3 ore       | hai una pausa ogni 3 ore             | la tua paga stimata sara' di 1600 al mese        |";
	cout<<"\n| la tua paga stimata sara' di   | la tua paga stimata sara di 2000 al  |                                                  |";
	cout<<"\n| 1800 al mese.                  |  mese                                |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|**************************************************************************************************************************|";	
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n===========================================================================================================================|";
    cout<<"\n|  inserisci il numero del lavoro che ti interessa altrimenti inserisci 4 --->";cin>>sl;
    cout<<"\n===========================================================================================================================|\n\n\n";
	while(sl!=1||sl!=2||sl!=3)
	{
		cout<<"\n errore,inserisci un numero corretto";
		cin>>sl;
	}

	if(sl==1)
	{
		cout<<"\nLavorerai in robotmaster complimenti!";
		cout<<"\n ecco l'email per prenotare un colloquio e per portare il curriculum";
		cout<<"\n robotmastercolloquio@gmail.com";
		cout<<"\n non hai il curriculum? dicita c per farlo gratuitamente con il nostro software!";
		cout<<"\n altrimenti dicita n";
		cin>>c;
		while(c!='c' || c!='c')
		{
			cout<<"\n errore, inserisci la scelta corretta";
			cin>>c;
		}
		if(c=='c')
		{
			curricolum();
		}
		
	}
	else
	{
		if(sl==2)
		{
		cout<<"\nLavorerai in alfredo motorparts complimenti!";
		cout<<"\n ecco l'email per prenotare un colloquio e per portare il curriculum";
		cout<<"\n alfredomotorpartscolloquio@gmail.com";
		cout<<"\n non hai il curriculum? dicita c per farlo gratuitamente con il nostro software!";
		cout<<"\n altrimenti dicita n";
		cin>>c;
		while(c!='c' || c!='c')
		{
			cout<<"\n errore, inserisci la scelta corretta";
			cin>>c;
		}
		if(c=='c')
		{
			curricolum();
		}
			
		}
		else
		{
			if(sl==3)
			{
		cout<<"\nLavorerai in cipside complimenti!";
		cout<<"\n ecco l'email per prenotare un colloquio e per portare il curriculum";
		cout<<"\n cipsidecolloquio@gmail.com";
		cout<<"\n non hai il curriculum? dicita c per farlo gratuitamente con il nostro software!";
		cout<<"\n altrimenti dicita n";
		cin>>c;
		while(c!='c' || c!='c')
		{
			cout<<"\n errore, inserisci la scelta corretta";
			cin>>c;
		}
		if(c=='c')
		{
			curricolum();
		}
		
			
					
				
			}
			else
			{
				if(sl==4)
						cout<<"\n vuoi andare nel menu principale?(s|n)";
	    				cin>>s;
						while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
	if(s=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	}
			}
		}
	}
	
		cout<<"\n vuoi andare nel menu principale?(s|n)";
	cin>>s;
			while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
	if(s=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	}
	return 0;
}

int Shop()
{	
char s;
	string card;
cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");
		cout<<"benvenuto nella sezione shop!!";
	cout<<"\n===========================================================================================================================|";
	cout<<"\n|$DOLLARSIDE$---->shop                                                                                                     |";
	cout<<"\n|**************************************************************************************************************************|";
	cout<<"\n|_______________le nostre cards____________________________________________________________________________________________|";
	cout<<"\n|bronze card                     | platinum card                        | gold card                                        |";
	cout<<"\n| hai una prova gratuita         | hai un mese gratuito di amazon prime.| 1  anno gratuito di amazon prime e di Netflix.   |";
	cout<<"\n| di 10 giorni di amazon prime.  | 2 entrate omaggio per gardaland.     | 1 anno di abbonamento di Gardaland e moovie land.|";
	cout<<"\n| un entrata omaggio a gardaland | 30 euro di buono amazon.             | 100 euro di buono amazon.                        |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|                                |                                      |                                                  |";
	cout<<"\n|**************************************************************************************************************************|";	
	cout<<"\n|  costo--->50$                  |  costo--->230$                       | costo---->890                                    |";
	cout<<"\n===========================================================================================================================|";
    cout<<"\n|  inserisci la card che  vuoi acquistare(bronze|platinum|gold)--->";cin>>card;
    cout<<"\n===========================================================================================================================|\n\n\n";
while(card!="bronze"&& card!="platinum"&& card!="gold")
{
	cout<<"inserisci un opzione corretta!(bronze|platinum|gold";
	cin>>card;
}
if(card=="bronze")
{
	cout<<"hai scelto la bronze card,";
	saldor=saldor-50;
	cout<<"il tuo saldo dopo il pagamento e di";cout<<saldor;
}
else
{
	if(card=="platinum")
	{
		cout<<"hai scelto la platinum card";
		saldor=saldor-230;
		cout<<"il tuo saldo dopo il pagamento e di";cout<<saldor;
	}
	else
	{
		if(card=="gold")
		{
			cout<<"hai scelto la gold card";
			saldor=saldor-890;
				cout<<"il tuo saldo dopo il pagamento e di";cout<<saldor;
		}
	}
}
	cout<<"\n vuoi andare nel menu principale?(s|n)";
	cin>>s;
			while(s!='s' && s!='n')
	{
		cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";
		cin>>s;
	}
	if(s=='s')
	{
	  menu();
	}
	else
	{

	cout<<"\n arrivederci,alla prossima!";
	
		
}return 0;
 }
int deposito()

{





    char v;

    


cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");

      cout << "\n--- SPORTELLO DEPOSITI ---\n";

      float importo;

      cout << "Quanto vuoi depositare? \nImporto: ";

      cin >> importo;

      saldor=saldor+importo;

      cout << "Deposito completato. Nuovo saldo: " << saldor << "\n";

      

      

      cout<<"\n vuoi andare nel menu principale?(s|n)";

cin>>v;

while(v!='s' && v!='n')

{

cout<<"\nerrore,inserisci s per cambiare sezione altrimenti n";

cin>>v;

}

if(v=='s')

{

  menu();

}

else

{



cout<<"\n arrivederci,alla prossima!";

}

   

    return 0;


}
int curricolum()
{   
	char sc;
	string n;
	string l;
	string d;
	string lav;
	string ling;
	string num;
	string ind;
	string inf;
	string de;
	cin.ignore();
						cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					_sleep(1000);
	  					 system("cls"); 
 	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					_sleep(1000);
	  					 system("cls");
	  					 cout<<"\n        000";
	  					 cout<<"\n  000  0   0 000 ";
	  					 cout<<"\n 0   0  000 0   0";
	  					 cout<<"\n  000        000";
	  					 _sleep(1000);
	  					 system("cls");
	  					cout<<"\n  000        000";
	  					cout<<"\n 0   0  000 0   0";
	  					cout<<"\n  000  0   0 000";
	  					cout<<"\n        000";
	  					system("cls");
			cout<<"\nhai scelto di crearlo con il nostro software!";
			cout<<"\n iniziamo!";
			cout<<"\n inserisci il tuo nome e cognome";
			getline(cin,n);
			cout<<"\n inserisci il tuo numero telefonico";
			getline(cin,num);
			cout<<"\n inserisci il tuo indirizzo";
			getline(cin,ind);
			cout<<"\n inserisci una tua descrizione";
			getline(cin,de);
			cout<<"\n inserisci la tua laurea(se non ne possiedi una digita nessuna) ";
			getline(cin,l);
			cout<<"\n inserisci il titolo del tuo diploma delle scuole superiori,in caso non hai frequentate la scuola superiore metti terza media";
			getline(cin,d);
			cout<<"\n inserisci le tue esperienze lavorative, in caso non hai mai lavorato digita nessuna";
			getline(cin,lav);
			cout<<"\n inserisci le lingue che conosci(diverse dall'italiano) con il livello affianco se non ne conosci digita nesssuna";
			getline(cin,ling);
			cout<<"\n inserisci le tue competenze informatiche";
			getline(cin,inf);
			cout<<"iniziamo a farti il tuo curriculum";
			cout<<"\n\n\n";
			
			system("cls");
			cout<<"\n=========CURRICULUM======";
			_sleep(1000);
			cout<<"\n|nome e cognome---> "<<n;
			cout<<"\n*************************";						
			_sleep(1000);
			cout<<"\n|numero telefoni---> "<<num;
			cout<<"\n*************************";
			_sleep(1000);
			cout<<"\n|indirizzo---> "<<ind;
			cout<<"\n*************************";
			_sleep(1000);
			cout<<"\n descrizione--->"<<de;
			cout<<"\n*************************";
			_sleep(1000);
			cout<<"\n|laurea---> "<<l;
			cout<<"\n*************************";
			_sleep(1000);
			cout<<"\n|diploma---> "<<d;
			cout<<"\n*************************";
			_sleep(1000);
			cout<<"\n|esperienze lavorative---> "<<lav;
			cout<<"\n*************************";
			_sleep(1000);
			cout<<"\n|lingue---> "<<ling;
			cout<<"\n*************************";
			_sleep(1000);
			cout<<"\n|competenze informatiche---> "<<inf;
			cout<<"\n=========================";
			


			
return 0;			
} 	  					
