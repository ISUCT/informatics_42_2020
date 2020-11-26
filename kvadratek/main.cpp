#include <iostream>
#include <string>

using namespace std;


int diag_or_not(bool to_be_or_not_to_be, int a, int *y){
    const int b = a;
    *y = new int[b][b];
    int kvadrat[a][a];
    for (int i=0; i<a; i++){
        for (int j=0; j<a; j++){
            if ((i==0) or (i==(a-1)) or (j==0) or (j==(a-1))){
                kvadrat[i][j]=a;
            }
            else{
                kvadrat[i][j]=0;
            }
            if (to_be_or_not_to_be){
                kvadrat[i][i]=a;
            }

        }
    }
    y = new string[a*a];
    for (int i=0; i<a*a; i++){
        y[i]=kvadrat[i/a][i%a];
    }
    return y;
}

void print(int a, int otstup_x, int otstup_y){
    for (int i=0; i<otstup_y-1; i++){
        cout<<""<<endl;
    }
    for (int x=0; x<otstup_x-1; x++){
        cout<<" ";
    }
    for (int i=0; i<a*a; i++){
        cout<<y[i];
        if ((i+1)%a==0){
            cout<<""<<endl;
            for (int x=0; x<otstup_x-1; x++){
                cout<<" ";
            }

        }
    }
}


int main()
{
    string *y;
    print(diag_or_not(true, 10),10,10);
    return 0;
}
