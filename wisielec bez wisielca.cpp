#include <iostream>
using namespace std;
int t[10],n;//t[12],t[6];
int main(){
cout << "witaj w grze wisielec" <<endl;
cout<< "|zasady gry -- jedna osoba literuje slowo do odgadniecia|" <<endl;
cout <<"|a durga probuje zgadnac haslo                          |" << endl;
cout <<"|              gra posluguje sie numerami               |"<< endl;
cout <<"|wiec kazda litera dziala jak cyfry w starych telefonach|"<<endl;
cout <<"|2=a 22=b 222=c 3=d 33=e 333=f 4=g 44=h 444=i 5=j 55=k  |"<< endl;
cout <<"|555=l 6=m 66=n 666=o 7=p 77=q 777=r 7777=s 8=t 88=u    |"<<endl;
cout <<"|              888=v 9=w 99=x 999=y 9999=z              |" << endl;
cout <<"|                                                       |" << endl;
cout <<"|             przeliteruj slowo max 10liter:            |" << endl;
cout <<"|                 ile liter ma twoje slowo?             |"<<endl;

cin>> n;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
for(int i=0;i<n;i++){
        if(t[i]==2){
            cout << "a";
        }
        if(t[i]==22){
            cout<< "b";
        }
        if(t[i]==222){
            cout<< "c";
        }
        if(t[i]==3){
            cout<< "d";
        }
        if(t[i]==33){
            cout<< "e";
        }
        if(t[i]==333){
            cout<< "f";
        }
        if(t[i]==4){
            cout<< "g";
        }
        if(t[i]==44){
            cout<< "h";
        }
        if(t[i]==444){
            cout<< "i";
        }
        if(t[i]==5){
            cout<< "j";
        }
        if(t[i]==55){
            cout<< "k";
        }
        if(t[i]==555){
            cout<< "l";
        }
        if(t[i]==6){
            cout<< "m";
        }
        if(t[i]==66){
            cout<< "n";
        }
        if(t[i]==666){
            cout<< "o";
        }
        if(t[i]==7){
            cout<< "p";
        }
        if(t[i]==77){
            cout<< "q";
        }
        if(t[i]==777){
            cout<< "r";
        }
        if(t[i]==7777){
            cout<< "s";
        }
        if(t[i]==8){
            cout<< "t";
        }
        if(t[i]==88){
            cout<< "u";
        }
        if(t[i]==888){
            cout<< "v";
        }
        if(t[i]==9){
            cout<< "w";
        }
        if(t[i]==99){
            cout<< "x";
        }
        if(t[i]==999){
            cout<< "y";
        }
        if(t[i]==9999){
            cout<< "z";
        }
    }
    //for(int y=0;z<12;i++){
        //for(int z=0;z<6;i++){
           // if(t[y]==0){
                //cout << "|"
          //  }
      //  }
    }
//}
