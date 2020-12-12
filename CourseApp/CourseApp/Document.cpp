#include <iostream>
#include "document.h"

void doc_creator()
{
    cout << endl;
    int num = 0;
    vector<Document> doc;
    cout << "Enter number of docs : "; cin >> num;
    while (num <= 0)
    {
        cout << "Enter correct number : "; cin >> num;
    }
    system("cls");
    for (int i = 0; i < num; i++)
    {
        doc.emplace_back();
    }
    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << ") ";
        doc[i].get_information();
    }
}