#include <iostream>
using namespace std;


int main()
{
    const int salespeoples{ 4 };
    const int products{ 5 };
    double sales[salespeoples][products]{ 0 };
    int salespeopl;
    int prod;
    float sale;
    // Getting data per day
    for (int i = 0; i < salespeoples * products; i++) 
    {
        cout << "Enter the seller number 1 ... 4 ";
        cin >> salespeopl;
        cout << "Enter product number 1 ... 5 ";
        cin >> prod;
        cout << "Enter the sale amount ";
        cin >> sale;
        // We take into account the fact the numbering of
        // arrays starts from zero
        sales[salespeopl - 1][prod - 1] += sale;
    }
    cout << "Total sale:" << "\n";
    for (int i = 0; i < products; i++) 
    {
        sale = 0;
        for (int j = 0; j < salespeoples; j++) 
        {
            sale += sales[j][i];
        }
        cout <<"Product " << i + 1 << " sales amount: "<<sale << "\n";
    }
    return 0;
}
