#include <iostream>
using namespace std;

int main() {
    
    int a, b, ekok;
    cout << "Ekok Bulma Algoritmasına Hosgeldiniz!";
    cout<< "Birinci sayiyi giriniz..";
    cin>> a;
    cout<< "İkinci sayiyi giriniz..";
    cin >> b;
    
    int max = a*b;
    
    
    for(int i=1; i<=max; i++) {
        
        if(i%a==0 && i%b==0) {
            ekok = i;
            cout << "Ekok değeriniz, "<< ekok <<"dur";
            break;
            
        }
        
        
    }
    