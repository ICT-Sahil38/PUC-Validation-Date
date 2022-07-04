#include<iostream>
#include<string>
using namespace std;
class government
{
    public:
    string name{}, type{}, engine{}, make{}, model{}, fuel{};
    int phone{},puc{},vehicle{}, regn_month{}, regn_year{}, valid_month{}, valid_year{};

    void PUC()
    {
        cout<<"------PUC VALIDATION DATE-------"<<endl;
        cout<<"------Government of India-------"<<endl<<endl;
        cout<<"-----------------------------------"<<endl<<endl;
        cout<<"Name: ";
        getline(cin,name);
        cout<<"Contact NO. : ";
        cin>>phone;
        cout<<"PUC NO. : ";
        cin>>puc;
        cout<<"Vehicle NO. ";
        cin>>vehicle;
        cout<<"Date of Regn [enter month and year seperated by space MM YYYY] : ";
        cin>>regn_month >> regn_year;
        cout << "\nRegn Month: " << regn_month << "\t" << "Regn Year: " << regn_year << endl << endl;
        cout<<"Type of Vehicle : ";
        cin.ignore();
        getline(cin,type);
        cout<<"Type of Engine : ";
        getline(cin,engine);
        cout<<"Make : ";
        getline(cin,make);
        cout<<"Model : ";
        getline(cin,model);
        cout<<"Fuel: ";
        getline(cin,fuel);
    }


    void puc_exp()
    {
        if(regn_month + 6 <= 12)
        {
            valid_month = regn_month + 6;
            valid_year = regn_year;
        }
        else
        {
            
            valid_month = regn_month + 6 - 12;
            valid_year = ++regn_year;
        }
        
    }
    
    int puc_exp_month()
    {
        return valid_month;
    }
    
    int puc_exp_year()
    {
        return valid_year;
    }
};
int main()
{
    government obj;
    while(1)
{

    obj.PUC();
    obj.puc_exp();
    
    cout << "Your PUC Expires at: " << obj.puc_exp_month() << "\\" << obj. puc_exp_year() << endl;
    char confirm {};
    while( confirm != 'Y' && confirm != 'N')
    {
        cout << "Do you want to Exit? (Y/N): ";
        cin >> confirm;
        cout << "CHECK AGAIN !!! " << endl << endl;
        if(confirm != 'Y' && confirm != 'N')
            cout << "Inavlid input! Try again. \n";
        cin.ignore();
    }
    
    
    if(confirm == 'Y')
        break;
    else if(confirm == 'N')
        continue;
}



return 0;
}
