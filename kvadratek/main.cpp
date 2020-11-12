#include <iostream>
#include <string>

using namespace std;

string *y;

int diag_or_not(bool to_be_or_not_to_be, int a){
    string kvadrat[a][a];

    for (int i=0; i<a; i++){
        for (int j=0; j<a; j++){
            if ((i==0) or (i==(a-1)) or (j==0) or (j==(a-1))){
                kvadrat[i][j]="*";
            }
            else{
                kvadrat[i][j]=" ";
            }
            if (to_be_or_not_to_be){
                kvadrat[i][i]="*";
            }

        }
    }
    y = new string[a*a];
    for (int i=0; i<a*a; i++){
        y[i]=kvadrat[i/a][i%a];
    }
    return a;
}

void print(int a){
    for (int i=0; i<a*a; i++){
        cout<<y[i];
        if ((i+1)%a==0){
            cout<<""<<endl;
        }
    }
}


int main()
{

    print(diag_or_not(true, 10));
    return 0;
}
