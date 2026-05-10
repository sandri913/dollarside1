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
