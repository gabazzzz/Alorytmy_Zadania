//Gabriela Zaremba

#include <iostream>


using namespace std;


void graf(){
    int size=6;
    
    int macierz[6][6]={
        {0,1,2,3,4,5},
        {1,0,1,0,0,0},
        {2,0,0,1,0,0},
        {3,0,1,0,1,0},
        {4,0,0,0,0,0},
        {5,1,1,0,1,0}
    };
    
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            cout<<macierz[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i=1; i<size; i++) {
        cout<<"sasiedzi "<<i<<":";

        for (int j=1; j<size; j++) {
            if (macierz[i][j]==1) {
                cout<<" "<<j;
            }
        }
        cout<<endl;
    }
}

int main(){
    
    graf();
    return 0;
}
