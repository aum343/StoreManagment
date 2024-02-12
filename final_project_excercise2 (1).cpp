// Final project: Exercise 2
#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

// global variables and functions
void single_product(float arr[4][3],float ayyr[4]);
void all_products(float arrr[4][3],float dis_arr[4]);
void stock(float ary[4][3],int a,int b,int c,int d,float arrey[4]);
void puchase_calculator(float pur_ar[4][3],float quali[4]);
const float constant_one = 0.05;
const float constant_two = 0.09975;
float inventory[4][3] = {
                            {50,15.99,0},
                            {100,24.99,0},
                            {250,49.99,0},
                            {500,89.99,0}
                        };
string format[4][3] = {
                            {"Small","50","ml"},
                            {"Medium","100","ml"},
                            {"Big","250","ml"},
                            {"Extra","500","ml"}
                        };

int main()
{
    system("cls");
    // Declare and initialize variable, functions and arrays
    int user_input;
    int main_menu_process(float main_ary[4][3],string value,float arryy[4]);
    float ql_array[4] = {0,0,0,0};
        // Step 1
    main_menu_process(inventory,"yes",ql_array);
}
 // User defined functions starts

int main_menu_process(float main_ary[4][3],string val,float arryy[4])
{
    if(val == "yes")
    {
       system("cls");
    }
    int user_inputt;

        // Making the menus
        cout<<"************************************************************************************"<<endl;
        cout<<"************************"<<" Welcome to CALCULATOR PLUS ! "<<"******************************"<<endl;
        cout<<"Choose :"<<endl;
        cout<<"    1 for INFORMATION ABOUT 1 PRODUCT"<<endl;
        cout<<"    2 for INFORMATION ABOUT ALL THE PRODUCTS"<<endl;
        cout<<"    3 for PURCHASE CALCULATOR"<<endl;
        cout<<"    4 for STOCK INVENTORY AND REPLENISHMENT"<<endl;
        cout<<"    5 for EXIT"<<endl;

     do   // validate that user only put number between 1 and 5
    {
        cout<<"*********************************************************************************************"<<endl;
        cout<<"Write your choice below: (1 to 5)"<<endl;
        cin>>user_inputt;
        // Validate that user only put numeric values
        if(!cin || user_inputt < 0 || user_inputt > 5 || user_inputt == 0)
        {
            cout<<"ERROR! You wrote a wrong number. Try again"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    }while(!user_inputt || user_inputt < 0 || user_inputt > 5);
    switch(user_inputt)
    {
        case 1: single_product(main_ary,arryy);
        break;
        case 2: all_products(main_ary,arryy);
        break;
        case 3: puchase_calculator(main_ary,arryy);
        break;
        case 4:  stock(main_ary,0,0,0,0,arryy);
        break;
        case 5:
        system("cls");
        cout<<"Thanks for using our program!"<<endl;
        return 0;
        break;
    }
}

// Showing product according to user enter the code
void single_product(float arr[4][3],float ayyr[4])
{
    system("cls");
    int code_num,i;
    string dimension;
    do
    {
        cout<<"Enter the CODE of the product (50,100,250, or 500) to display its details:"<<endl;
        cin>>code_num;
        if(!cin || (code_num != 50 && code_num != 100 && code_num != 250 && code_num != 500))
        {
            cout<<"ERROR! The product code entered is not valid"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }while(!code_num || (code_num != 50 && code_num != 100 && code_num != 250 && code_num != 500));

    if(code_num == 50)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[0][1]<<endl;
            cout<<"DIMENSION         : "<<format[0][0]<<" "<<format[0][2]<<endl;
            cout<<"UNIT PRICE        : "<<arr[0][1]<<"   $CA"<<endl;
            cout<<"TPS               : "<<arr[0][1]*constant_one<<"   $CA   (5%)"<<endl;
            cout<<"TVQ               : "<<arr[0][1]*constant_two<<"   $CA   (9.975%)"<<endl;
            cout<<"TOTAL             : "<<arr[0][1] + arr[0][1]*constant_one + arr[0][1]*constant_two<<"   $CA"<<endl;
            cout<<"CURRENT STOCK     : "<<arr[0][2]<<"   items"<<endl;
    }else if(code_num == 100)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[1][1]<<endl;
            cout<<"DIMENSION         : "<<format[1][0]<<" "<<format[1][2]<<endl;
            cout<<"UNIT PRICE        : "<<arr[1][1]<<"   $CA"<<endl;
            cout<<"TPS               : "<<arr[1][1]*constant_one<<"   $CA   (5%)"<<endl;
            cout<<"TVQ               : "<<arr[1][1]*constant_two<<"   $CA   (9.975%)"<<endl;
            cout<<"TOTAL             : "<<arr[1][1] + arr[1][1]*constant_one + arr[1][1]*constant_two<<"   $CA"<<endl;
            cout<<"CURRENT STOCK     : "<<arr[1][2]<<"   items"<<endl;
    }else if(code_num == 250)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[2][1]<<endl;
            cout<<"DIMENSION         : "<<format[2][0]<<" "<<format[2][2]<<endl;
            cout<<"UNIT PRICE        : "<<arr[2][1]<<"   $CA"<<endl;
            cout<<"TPS               : "<<arr[2][1]*constant_one<<"   $CA   (5%)"<<endl;
            cout<<"TVQ               : "<<arr[2][1]*constant_two<<"   $CA   (9.975%)"<<endl;
            cout<<"TOTAL             : "<<arr[2][1] + arr[2][1]*constant_one + arr[2][1]*constant_two<<"   $CA"<<endl;
            cout<<"CURRENT STOCK     : "<<arr[2][2]<<"   items"<<endl;
    }else if(code_num == 500)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[3][1]<<endl;
            cout<<"DIMENSION         : "<<format[3][0]<<" "<<format[3][2]<<endl;
            cout<<"UNIT PRICE        : "<<arr[3][1]<<"   $CA"<<endl;
            cout<<"TPS               : "<<arr[3][1]*constant_one<<"   $CA   (5%)"<<endl;
            cout<<"TVQ               : "<<arr[3][1]*constant_two<<"   $CA   (9.975%)"<<endl;
            cout<<"TOTAL             : "<<arr[3][1] + arr[3][1]*constant_one + arr[3][1]*constant_two<<"   $CA"<<endl;
            cout<<"CURRENT STOCK     : "<<arr[3][2]<<"   items"<<endl;
    }
    main_menu_process(arr,"no",ayyr);
}

// Showing all products when user enter 2
void all_products(float arrr[4][3],float dis_arr[4])
{
    system("cls");
    int code_num,i;
    for(i=0;i<4;i++)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[i][1]<<endl;
            cout<<"DIMENSION         : "<<format[i][0]<<" "<<format[i][2]<<endl;
            cout<<"UNIT PRICE        : "<<arrr[i][1]<<"   $CA"<<endl;
            cout<<"TPS               : "<<arrr[i][1]*constant_one<<"   $CA   (5%)"<<endl;
            cout<<"TVQ               : "<<arrr[i][1]*constant_two<<"   $CA   (9.975%)"<<endl;
            cout<<"TOTAL             : "<<arrr[i][1] + arrr[i][1]*constant_one + arrr[i][1]*constant_two<<"   $CA"<<endl;
            cout<<"CURRENT STOCK     : "<<arrr[i][2]<<"   items"<<endl;
    }
    main_menu_process(arrr,"no",dis_arr);
}
// When user enters 4
void stock(float ary[4][3],int fif,int hun,int two_fiv,int five_hun,float arryy[4])
{
    int user_in;
    string returnn;
    float new_array[4][3];
    // Declare functions
    int stock_inventory(float aray[4][3],string checc,float nw_arr[4]);
    void stock_replenishment(float arrayy[4][3],int fift,int hund,int two_fift,int five_hunn,int user_inn,float qul_ar[4]);
        cout<<"************************************************************************************"<<endl;
        cout<<"Choose :"<<endl;
        cout<<"    1 for STOCK INVENTORY"<<endl;
        cout<<"    2 for STOCK REPLENISHMENT"<<endl;
        cout<<"    3 for FOR MAIN MENU"<<endl;
    do   // validate that user only put number between 1 and 3
    {
        cout<<"*********************************************************************************************"<<endl;
        cout<<"Write your choice below: (1 to 3)"<<endl;
        cin>>user_in;
        // Validate that user only put numeric values
        if(!cin || user_in < 0 || user_in > 3 || user_in == 0)
        {
            cout<<"ERROR! You wrote a wrong number. Try again"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    }while(!user_in || user_in < 0 || user_in > 3);

    // When user enter one of the option
    switch(user_in)
    {
        case 1:
            stock_inventory(ary,"no",arryy);
            break;
        case 2:
            stock_replenishment(ary,fif,hun,two_fiv,five_hun,user_in,arryy);
            break;
        case 3:
            main_menu_process(ary,"yes",arryy);
        break;
    }
}
int stock_inventory(float aray[4][3],string checc,float nw_arr[4])
{
    if(checc == "yes")
    {
        return 0;
    }
    int code_numm;
    do
    {
        cout<<"Enter the CODE of the product (50,100,250, or 500) to display its details:"<<endl;
        cin>>code_numm;
        if(!cin || (code_numm != 50 && code_numm != 100 && code_numm != 250 && code_numm != 500))
        {
            cout<<"ERROR! The product code entered is not valid"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }while(!code_numm || (code_numm != 50 && code_numm != 100 && code_numm != 250 && code_numm != 500));

    if(code_numm == 50)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[0][1]<<endl;
            cout<<"DIMENSION         : "<<format[0][0]<<" "<<format[0][2]<<endl;
            cout<<"CURRENT STOCK     : "<<aray[0][2]<<"   items"<<endl;
    }else if(code_numm == 100)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[1][1]<<endl;
            cout<<"DIMENSION         : "<<format[1][0]<<" "<<format[1][2]<<endl;
            cout<<"CURRENT STOCK     : "<<aray[1][2]<<"   items"<<endl;
    }else if(code_numm == 250)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[2][1]<<endl;
            cout<<"DIMENSION         : "<<format[2][0]<<" "<<format[2][2]<<endl;
            cout<<"CURRENT STOCK     : "<<aray[2][2]<<"   items"<<endl;
    }else if(code_numm == 500)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[3][1]<<endl;
            cout<<"DIMENSION         : "<<format[3][0]<<" "<<format[3][2]<<endl;
            cout<<"CURRENT STOCK     : "<<aray[3][2]<<"   items"<<endl;
    }
     main_menu_process(aray,"no",nw_arr);
}
void stock_replenishment(float arrayy[4][3],int fiftyy,int hundredd,int two_fiftyy,int five_hundred,int user_inn,float qull_arryy[4])
{
    int codee,num,i,j;
    fiftyy = arrayy[0][2];
    hundredd = arrayy[1][2];
    two_fiftyy = arrayy[2][2];
    five_hundred = arrayy[3][2];

    string new_arr;
    new_arr = "yes";
    do
    {
        cout<<"Enter the CODE of the product (50,100,250, or 500) to display its details:"<<endl;
        cin>>codee;
        if(!cin || (codee != 50 && codee != 100 && codee != 250 && codee != 500))
        {
            cout<<"ERROR! The product code entered is not valid"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }while(!codee || (codee != 50 && codee != 100 && codee != 250 && codee != 500));

    if(codee == 50)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[0][1]<<endl;
            cout<<"DIMENSION         : "<<format[0][0]<<" "<<format[0][2]<<endl;
            cout<<"CURRENT STOCK     : "<<fiftyy<<"   items"<<endl;
    }else if(codee == 100)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[1][1]<<endl;
            cout<<"DIMENSION         : "<<format[1][0]<<" "<<format[1][2]<<endl;
            cout<<"CURRENT STOCK     : "<<hundredd<<"   items"<<endl;
    }else if(codee == 250)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[2][1]<<endl;
            cout<<"DIMENSION         : "<<format[2][0]<<" "<<format[2][2]<<endl;
            cout<<"CURRENT STOCK     : "<<two_fiftyy<<"   items"<<endl;
    }else if(codee == 500)
    {
            cout<<"------------------------------------------------------------------------------"<<endl;
            cout<<"CODE              : "<<format[3][1]<<endl;
            cout<<"DIMENSION         : "<<format[3][0]<<" "<<format[3][2]<<endl;
            cout<<"CURRENT STOCK     : "<<five_hundred<<"   items"<<endl;
    }
    do
    {
        cout<<"How many new items to ADD to the stock?: "<<endl;
        cin>>num;
        if(!cin || num <= 0)
        {
            cout<<"ERROR! Please write a POSITIVE number"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }while(!num || num <= 0);

    if(codee == 50)
    {
        fiftyy = fiftyy + num;
    }else if(codee == 100)
    {
        hundredd = hundredd + num;
    }else if(codee == 250)
    {
        two_fiftyy = two_fiftyy + num;
    }else if(codee == 500)
    {
        five_hundred = five_hundred + num;
    }
    cout<<"The stock was REPLENISH successfully"<<endl;
    arrayy[0][2] = fiftyy;
    arrayy[1][2] = hundredd;
    arrayy[2][2] = two_fiftyy;
    arrayy[3][2] = five_hundred;

    stock_inventory(arrayy,new_arr,qull_arryy);
    stock(arrayy,fiftyy,hundredd,two_fiftyy,five_hundred,qull_arryy);

    if(user_inn == 3)
    {
        main_menu_process(arrayy,"yes",qull_arryy);
    }
}
void puchase_calculator(float pur_arr[4][3],float quntity[4])
{
    int pur,qual,items,i,j,quantity= 0;
    string product,name;
    float taxe =0,tvq = 0,tps =0,without_tax = 0;
    float qual_arr[4] = {quntity[0],quntity[1],quntity[2],quntity[3]};

    do
    {
        do
        {
            cout<<"Enter the CODE of the product you brought (50,100,250, or 500) or 0 to show the receipt:"<<endl;
            cin>>pur;
            if(pur == 0)
            {
                break;
            }
            if(pur != 50 && pur != 100 && pur != 250 && pur != 500)
            {
                cout<<"ERROR! The product code entered is not valid"<<endl;
            }
        }while(pur != 50 && pur != 100 && pur != 250 && pur != 500);
    if(pur != 0)
    {
            if(pur == 50)
            {
                items = pur_arr[0][2];
                product = "50";
            }else if(pur == 100)
            {
                items = pur_arr[1][2];
                product = "100";
            }else if(pur == 250)
            {
                items = pur_arr[2][2];
                product = "250";
            }else if(pur == 500)
            {
                items = pur_arr[3][2];
                product = "500";
            }

        do
        {
            cout<<"Enter the QUANTITY you brought or 0 if this product is out of stock:"<<endl;
            cin>>qual;
            if(qual < 0)
            {
                cout<<"ERROR! Please write a POSITIVE number."<<endl;
            }
        //cout<<"item value"<<items;
        if(items >= qual && qual >= 0)
        {
            if(pur == 50)
            {
                qual_arr[0] += qual;
                pur_arr[0][2] = items - qual;
            }else if(pur == 100)
            {
                qual_arr[1] += qual;
                pur_arr[1][2] = items - qual;
            }else if(pur == 250)
            {
                qual_arr[2] += qual;
                pur_arr[2][2] = items - qual;
            }else if(pur == 500)
            {
                qual_arr[3] += qual;
                pur_arr[3][2] = items - qual;
            }
        }
            if(qual > items)
            {
                cout<<"ERROR! You have only "<<items<<" unit in stock.You cannot buy "<<qual<<" unit of this product now."<<endl;
            }else if(qual >= 0)
            {
                cout<<qual<<" product of dimension "<<product<<" have been added to your cart"<<endl;
            }
    }while(qual < 0 || qual > items );
    }
    }while(pur != 0);

    cout<<"--------------------------------------------------------------------------------------------";
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"CODE   "<<"Dimension   "<<"Quantity      "<<"Unit Price (Sub-Total)";
    cout<<"    TPS         "<<"TVQ                "<<"Unit Price (Total)    "<<"    Total"<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<format[i][j]<<"     ";
            cout<<format[i][1]<<"        ";
            cout<<"  "<<qual_arr[i];
            cout<<"                  "<<pur_arr[i][1];
            cout<<"           "<<pur_arr[i][1]*constant_one;
            cout<<"       "<<pur_arr[i][1]*constant_two;
            cout<<"                 "<<pur_arr[i][1] + pur_arr[i][1]*constant_one + pur_arr[i][1]*constant_two;
            cout<<"                 "<<(pur_arr[i][1] + pur_arr[i][1]*constant_one + pur_arr[i][1]*constant_two)*qual_arr[i];
            break;
        }
        cout<<endl;
    }

    for(i=0;i<4;i++)
    {
            quantity += qual_arr[i];
            tps += pur_arr[i][1]*constant_one* qual_arr[i];
            tvq += pur_arr[i][1]*constant_two * qual_arr[i];
            taxe += (pur_arr[i][1] + pur_arr[i][1]*constant_one + pur_arr[i][1]*constant_two)*qual_arr[i];
            without_tax += pur_arr[i][1]*qual_arr[i];

    }
    cout<<"---------------------------------------------------------------------------------------------";
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------------------------------------------------";
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"NOMBRE DE PRODUITS ACHETES: "<<quantity<<endl;
    cout<<"           PRIX HORS TAXES: "<<without_tax<<endl;
    cout<<"                       TPS: "<<tps<<" $"<<endl;
    cout<<"                       TVQ: "<<tvq<<" $"<<endl;
    cout<<"            PRIX AVEC TAXE: "<<taxe<<" $"<<endl;

    cout<<"---------------------------------------------------------------------------------------------";
    cout<<"----------------------------------------------------------"<<endl;
    main_menu_process(pur_arr,"no",qual_arr);
}




