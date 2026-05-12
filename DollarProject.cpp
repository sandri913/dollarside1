{
	string card;
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
    cout<<"\n|  inserisci la card che  vuoi acquistare(bronze|platinum|gold)--->";cin>>card
    cout<<"\n===========================================================================================================================|\n\n\n";
while(card!="bronze"&& card!="platinum"&& card!="gold")
{
	cout<<"inserisci un opzione corretta!(bronze|platinum|gold";
	cin>>card;
}
if(card=="bronze")
{
	cout<<"hai scelto la bronze card,";
}
else
{
	if(card=="platinum")
	{
		cout<<"hai scelto la platinum card";
	}
	else
	{
		if(card=="gold")
		{
			cout<<"hai scelto la gold card";
		}
	}
}
