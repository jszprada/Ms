#include <iostream>

using namespace std;


int main(){
    
int zad;
cin>>zad;



switch(zad){
    
 case 1:{
     int liczba;
     cin>>liczba;
     string bin="";
     bool pjed=0;
       for(unsigned int mask=0x80000000;mask>0;mask =  mask>>1){
        unsigned int wynik = liczba & mask;
        if(wynik){
            pjed=true;
        }
        if((wynik) != 0 && pjed==true){
            bin=bin+"1";
        }
       if((wynik) == 0 && pjed==true){
            bin=bin+"0";
        }
    }
    cout<<bin;
     break;
 }   
case 2:{
    int liczba;
    cin>>liczba;
    int lzer=0;
   unsigned int pjed;
    unsigned int ojed;
    
    for(unsigned int mask1=0x80000000;mask1>0;mask1 =  mask1>>1){
        unsigned int wyn1 = liczba & mask1;
        if(wyn1){
            pjed=mask1;
            break;
        }
    }
    for(unsigned int mask2=0x1;mask2<0x80000000;mask2 =  mask2<<1){
        unsigned int wyn2 = liczba & mask2;
        if(wyn2){
            ojed=mask2;
            break;
        }
    }
     for(unsigned int mask=0x80000000;mask>0;mask = mask>>1){
        unsigned int wyn = liczba & mask;
       if((wyn)==0 && mask<=pjed && mask>=ojed){
           lzer++;
       }
    }
    cout<<lzer;
    break;
}    
case 3:{
    int liczba;
    cin>>liczba;
    int pal=1;
    unsigned int mask2 = 0x1;
    int wynik1;
    int zm1;
    int wynik2;
    int zm2;
    int pjed;
    for(unsigned int mask1=0x80000000;mask1>0;mask1 =  mask1>>1){
        wynik1 = liczba & mask1;
        
        if(wynik1!=0){
            zm1=1;
        }
        else{
            zm1=0;
        }
        
        wynik2 = liczba & mask2;
        if(wynik2!=0){
            zm2=1;
        }
        else{
            zm2=0;
        }
        
        if(zm1 == zm2){
           mask2 =  mask2 << 1;
           
        }
        else{
            pal = 0;
            break;
        }
    }
    cout<<pal;
    break;
}
default:{
 cout<<"Wrong task number.";
 break;   
}

}
    return 0;
}