int lavori()
{
char s;
int sl;
char c;
string comp;
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
			curriculum();
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
			curriculum();
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
			curriculum();
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
