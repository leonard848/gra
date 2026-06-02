#include <iostream>
using namespace std;
int t[10],n;
int main(){
cout << "witaj w grze wisielec" <<endl;
cout<< "|zasady gry -- jedna osoba literuje slowo do odgadniecia|" <<endl;
cout <<"|a durga probuje zgadnac haslo                          |" << endl;
cout <<"|              gra posluguje sie numerami               |"<< endl;
cout <<"|wiec kazda litera dziala jak cyfry w starych telefonach|"<<endl;
cout <<"|2=a 22=b 222=c 3=d 33=e 333=f 4=g 44=h 444=i 5=j 55=k  |"<< endl;
cout <<"|555=l 6=m 66=n 666=0 7=p 77=q 777=r 7777=s 8=t 88=u    |"<<endl;
cout <<"|              888=v 9=w 99=x 999=y 9999=z              |" << endl;
cout <<"|                                                       |" << endl;
cout <<"|             przeliteruj slowo max 10liter:            |" << endl;
cout <<"|                 ile liter ma twoje slowo?             |"<<endl;

cin>> n;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
for(int i=0;i<n;i++){
        cout<<t[i];
    }
}
