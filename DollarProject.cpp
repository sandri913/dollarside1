 
		int curriculum()
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
