#include <iostream>
#include "function.h" 
#include "interface.h"  
#include "document.h"

int main()
{
    User_interface ui;
    Function function;

    int num = 0;
    vector<Document> doc;
    cout << "Enter number of docs : "; cin >> num;
    system("cls");
    for (int i = 0; i < num; i++)
    {
        doc.emplace_back();
    }
    for (int i = 0; i < num; i++)
    {
        cout << i+1 << ")";
        doc[i].get_information();
    }
    return 0;
}