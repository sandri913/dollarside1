#include<iostream>
#include<cstdlib>
#include<sstream>
using namespace std;

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
cout<<"\n _____     ______     __         __         ______     ______     ______     __     _____     ______";    
cout<<"\n/\  __-.  /\  __ \   /\ \       /\ \       /\  __ \   /\  == \   /\  ___\   /\ \   /\  __-.  /\  ___\";   
cout<<"\n\ \ \/\ \ \ \ \/\ \  \ \ \____  \ \ \____  \ \  __ \  \ \  __<   \ \___  \  \ \ \  \ \ \/\ \ \ \  __\";   
cout<<"\n \ \____-  \ \_____\  \ \_____\  \ \_____\  \ \_\ \_\  \ \_\ \_\  \/\_____\  \ \_\  \ \____-  \ \_____\"; 
cout<<"\n  \/____/   \/_____/   \/_____/   \/_____/   \/_/\/_/   \/_/ /_/   \/_____/   \/_/   \/____/   \/_____/"; 
                                                                                                     
 cout<<"\nScrivi la Password (solo con lettere)\n";
 cin>>password;
 cout<<"\nScrivi nome utente (senza spazi)\n";
 cin>>nu;
 system("cls");
 cout<<"\nBenvenuti al menu,grazie di averci supportato...\n";
 cout<<"1) Saldo       ";
 cout<<"2) Mercato     ";
 cout<<"3) traders     ";
 cout<<"4) Prelievo    ";
 cout<<"5) Lavori      ";
 cout<<"6) Shop        ";
 cout<<"7) Deposito    ";
switch(risposta1)
{
  case 1:
  saldo();
  break;
  case 2:
  mercato();
  break;
  case 3:
  traders();
  break;
  case 4:
  prelievo();
  break;
  case 5:
  lavori();
  break;
  case 6:
  Shop();
  break;
  case 7:
  deposito();
  break;
  default:
  risposta1<1||risposta>7
  break;
 return 0;
}
int saldo()
{
cout<<"\n     __     ____             _    __   ";
cout<<"\n ___/ /__  / / /__ ________ (_)__/ /__ ";
cout<<"\n/ _  / _ \/ / / _ `/ __(_-</ / _  / -_)";
cout<<"\n\_,_/\___/_/_/\_,_/_/ /___/_/\_,_/\__/ ";                                       
  cout<<"\nBuongiorno!";
  cout<<"\nil tuo saldo attuale e' di"
  //visualizzare il saldo,inserire un pop up che ti porta al programma mercato per aumentare oppure negozio(home)
  return 0;
  
}
