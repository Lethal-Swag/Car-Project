#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<time.h>
#include<ctime>

int L_PER_INCR = 2;
void delay(int);
using namespace std;

class Company
{
        public :
        int ch,n;

        string car_company[5]={"LAMBORGHINI","FERARRI","MASERATI","BMW","BUGATTI"};

        string lamborgini[3] = {"AVENTADOR","URUS    ","HURACAN  "};

        string ferarri[3] = {"PORTOFINO","GTC 4    ","812      "};

        string maserati[3] = {"GRANTURISMO","LEVANTE    ","GRANCABRIO ",};

        string bmw[3] =  {"BMW X5","BMW Z4"," BMW 7 "};

        string bugatti[3] = {"BUGATTI DIVO  ","BUGATTI CHIRON","BUGATTI VEYRON"};

        string lamprice[3]={"4.25 Cr*","2.02 Cr*","7 Cr*"};
        string ferprice[3]={"2 Cr*","1.02 Cr*","98 LAKH"};
        string masprice[3]={"2.2 Cr*","3.1 Cr*","5 Cr*"};
        string bmwprice[3]={"1.4 Cr*","88 LAKH","2 Cr*"};
        string bugprice[3]={"17 Cr*","21 Cr*","15 Cr*"};
        string item,price;
        string car{};
        string amt{};
        char p[5];


        char data[500];
        string recipt={" | :: RECIEPT :: |"};
        string name ={" | NAME ::       |"};
        string phone={" | PHONE NO. ::  |"};
        string address={" | ADDRESS ::    |"};
        string email = {" | E-MAIL ::     |"};
        string Amount = {" | AMOUNT ::    |"};
        string man={"| :: THANK TOU DEVELOP BY MANPREET :: |"};


            void entry()
            {
                cout<<"\n\t\t***********************************************"<<endl;
                cout<<"\t\t____________WELCOME TO LETHAL CARS_______________"<<endl;
                cout<<"\t\t*************************************************"<<endl;
                cout<<endl<<endl<<endl;
                cout<<"\t\t             _________________________"<<endl;
                cout<<"\t\t            / /-----| |------------/ /"<<endl;
                cout<<"\t\t           / /      | |           / /"<<endl;
                cout<<"\t\t          / /_______| |__________/ /  "<<endl;
                cout<<"\t\t----------                         -----------------"<<endl;
                cout<<"\t\t|    __@@__      /--/    /--/             _@@_      |"<<endl;
                cout<<"\t\t|___@@ 69 @@____________________________@@ 69 @@ ___|"<<endl;
                cout<<"\t\t_______@@__________________________________@@______________"<<endl;
                cout<<endl<<endl<<"\t\t\t\t| :: PRESS ENTER :: |";

            getch();
            }

};





class work : public Company
{
        public:

        void cars()
        {
            top:
            Again6:
            system("cls");
            ofstream ofile;
            ofile.open("C:\\reciept.txt");

            int i;

            cout<<endl<<endl;
                cout<<"\t\t\t\t***********************"<<endl;
                cout<<"\t\t\t\t| WHAT WOULD YOU LIKE |"<<endl;
                cout<<"\t\t\t\t***********************"<<endl;
            cout<<endl<<endl<<endl;

            for(i=0;i<5;i++)
            {
                cout<<"\t\t| "<<i+1<<"\t"<<car_company[i]<<endl;
            }

            char a;

            cout<<"\t\t| :: WHICH COMPANY OF CAR YOU WANT SIR :: |"<<endl<<endl;
            cout<<"\t\t| :: ENTER ITS NUMBER :: | ";
            cin>>n;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t| :: ARE YOU SURE ( Y/N) :: | "<<endl;
            cout<<"\t\t| :: Because it might be your wrong choice its all about tons of cash"<<endl;
            cout<<"\t\t| :: think about it ";
            cin>>a;

                    if( a =='y'|| a=='Y')
                        goto category;
                    else
                        goto top;

                    category:

            switch(n)
            {

                case 1 : Again1:
                         cout<<endl<<endl;
                         cout<<"\t\t| :: DECIDE YOUR CAR :: |"<<endl<<endl;

                         for(i=0;i<3;i++)
                            cout<<"\t\t"<<"|"<<i+1<<"\t"<<lamborgini[i]<<"\t\t\t\tRs."<<lamprice[i]<<endl;

                        cout<<"\t\t______________________________________________________";
                        cout<<endl<<endl<<"\t\t| :: TYPE ITS SERIAL NUMBER OF CAR :: | ";
                        cin>>ch;

                        ofile<<lamborgini[ch];
                        cout<<"\t\t| :: ARE YOU SURE ( Y/N) :: | ";
                        cin>>a;

                        if( a =='y'|| a=='Y')
                        {
                            item=lamborgini[ch-1];
                            ofile<<item;
                            price=lamprice[ch-1];
                        }
                        else if(a== 'n' || a =='N')
                                    goto Again1;
                        else
                        {
                              cout<<"\t\t| :: INVALID OPTION :: |";
                              goto Again1;
                        }

                    break;

                case 2 : Again2:

                            cout<<endl<<endl;
                            cout<<"\t\t| :: DECIDE YOUR CAR :: | "<<endl;

                            for(i=0;i<3;i++)
                                cout<<"\t\t"<<"|"<<i+1<<"\t"<<ferarri[i]<<"\t\t\t\tRs."<<ferprice[i]<<endl;

                            cout<<"\t\t______________________________________________________";
                            cout<<endl<<"\t\t| :: TYPE ITS SERIAL NUMBER OF CAR :: | ";
                            cin>>ch;
                            cout<<"\t\t| :: ARE YOU SURE ( Y/N) :: | ";
                            cin>>a;


                                if( a =='y'|| a=='Y')
                                {
                                    item = ferarri[ch-1];
                                    ofile<<item;
                                    price = ferprice[ch-1];
                                }
                                else if(a== 'n' || a =='N')
                                    goto Again2;
                                else
                                {
                                    cout<<"\t\t| :: INVALID OPTION :: |";
                                    goto Again2;
                                }

                                break;

            case 3 : Again3:

                        cout<<endl<<endl;
                        cout<<"\t\t| :: DECIDE YOUR CAR :: |"<<endl;

                        for(i=0;i<3;i++)
                            cout<<"\t\t|"<<i+1<<"\t"<<maserati[i]<<"\t\t\t\tRs."<<masprice[i]<<endl;

                        cout<<"\t\t______________________________________________________";
                        cout<<endl<<"\t\t| :: TYPE ITS SERIAL NUMBER OF CAR :: | ";
                        cin>>ch;
                        cout<<"\t\t| :: ARE YOU SURE ( Y/N) :: | ";
                        cin>>a;


                            if( a =='y'|| a=='Y')
                            {
                                item=maserati[ch-1];
                                ofile<<item;
                                price = masprice[ch-1];
                            }
                            else if(a== 'n' || a =='N')
                                    goto Again3;
                                else
                                {
                                    cout<<"\t\t| :: INVALID OPTION :: |";
                                    goto Again3;
                                }

                        break;

            case 4 : Again4:

                        cout<<endl<<endl;
                        cout<<"\t\t| :: DECIDE YOUR CAR :: | "<<endl;

                        for(i=0;i<3;i++)
                            cout<<"\t\t"<<"|"<<i+1<<"\t"<<bmw[i]<<"\t\t\t\tRs."<<bmwprice[i]<<endl;

                        cout<<"\t\t______________________________________________________";
                        cout<<endl<<"\t\t| :: TYPE ITS SERIAL NUMBER OF CAR :: | ";
                        cin>>ch;
                        cout<<"\t\t| :: ARE YOU SURE ( Y/N) :: | ";
                        cin>>a;


                            if( a =='y'|| a=='Y')
                            {
                                item=bmw[ch-1];
                                ofile<<item;
                                price = bmwprice[ch-1];
                            }
                            else if(a== 'n' || a =='N')
                                    goto Again4;
                                else
                                {
                                    cout<<"\t\t| :: INVALID OPTION :: |";
                                    goto Again4;
                                }

                     break;

            case 5 : Again5:

                        cout<<endl<<endl;
                        cout<<"\t\t| :: DECIDE YOUR CAR :: | "<<endl;

                        for(i=0;i<3;i++)
                            cout<<"\t\t"<<"|"<<i+1<<"\t"<<bugatti[i]<<"\t\t\t\tRs."<<bugprice[i]<<endl;

                        cout<<"\t\t______________________________________________________";
                        cout<<endl<<"\t\t| :: TYPE ITS SERIAL NUMBER OF CAR :: | ";
                        cin>>ch;


                        cout<<"\t\t| :: ARE YOU SURE ( Y/N) :: | ";
                        cin>>a;
                            if( a =='y'|| a=='Y')
                            {
                                item=bugatti[ch-1];
                                ofile<<item;
                                price = bugprice[ch-1];
                            }
                            else if(a== 'n' || a =='N')
                                    goto Again5;
                                else
                                {
                                    cout<<"\t\t| :: INVALID OPTION :: |";
                                    goto Again5;
                                }

                            break;

                            default : cout << "Invalid";
                            goto Again6;
                            getch();
    }

    car={item}; 
    amt = {price};
 cout<<endl<<endl<<"\t\t| :: HAVE A GOOD DAY SIR AND CHECK BANK ACCOUNT :: "<<endl;
 cout<<"\t\t| :: you like "<<item<<" of Price "<<price<<endl;
 cout<<"\t\t| :: PRESS ENTER TO DETAILS :: |";

 getch();

}



};

class print : public work
{

    public :
        void customer()
        {
            system("cls");
                cout<<endl<<endl<<endl;
                cout<<"\t\t\t\t***********************"<<endl;
                cout<<"\t\t\t\t|   CUSTOMER DETAILS   |"<<endl;
                cout<<"\t\t\t\t***********************"<<endl;

            Again:

            ofstream ofile;
            ofile.open("C:\\reciept.txt");

            ofile<<endl<<endl<<endl<<"\t\t\t";
            ofile<<recipt;
            ofile<<endl<<endl;

            ofile<<"\t\t";
            cin.ignore();
            ofile<<name;
            cout<<endl<<endl<<"\t\t\t\t";
            cout<<" :: ENTER YOUR NAME :: |";
            cin.getline(data,500);
            ofile<<data<<endl;

            ofile<<"\t\t";
            ofile<<phone;
            cout<<endl<<endl<<"\t\t\t\t";
            cout<<" :: ENTER YOUR PHONE NUMBER :: |";
            cin.getline(data,500);
            ofile<<data<<endl;

            ofile<<"\t\t";
            ofile<<email;
            cout<<endl<<endl<<"\t\t\t\t";
            cout<<" :: ENTER YOUR EMAIL :: |";
            cin.getline(data,500);
            ofile<<data<<endl;

            ofile<<"\t\t";
            ofile<<address;
            cout<<endl<<endl<<"\t\t\t\t";
            cout<<":: ENTER YOUR ADDRESS :: |";
            cin.getline(data,500);
            ofile<<data<<endl;

            ofile<<"\t\t";
            ofile<<man<<endl;

            ofile<<car;
            ofile<<" and its price"<<amt;
            ofile.close();


        char a;
        cout<<"\t\t| :: ARE YOU SURE THAT DETAIL YOU ENTERED IS CORRECT ( Y/N ) :: | ";
        cin>>a;

            if( a== 'n' || a=='N')
            {
                system("cls");
                goto Again;
            }
            else if( a == 'y' || 'Y')
            {
                cout<<"\t\t| :: OK ! GREAT :: |"<<endl;

            }


        getch();
        }

        void payment()
        {
            system("cls");
                cout<<endl<<endl<<endl;
                cout<<"\t\t\t\t***********************"<<endl;
                cout<<"\t\t\t\t|   PAYMENT DETAILS    |"<<endl;
                cout<<"\t\t\t\t***********************"<<endl;
            cout<<"\t\t\t\t| :: PAYMENT METHOD :: |"<<endl<<endl;
            cout<<"\t\t\t\t| :: 1. FULL CASH :: |"<<endl<<"\t\t\t\t| :: 2. CARD :: | "<<endl;
            cout<<"\t\t\t\t";
            char a;
            cin>>a;
            if(a == '1')
            {
                cout<<"\t\t| :: we will drive your car at home and you prepared our MONEY :: |";
                getch();

            }
            else
            {
                cout<<"\t\t\t\t| :: CHOOSE YOUR BANK NAME :: |"<<endl;
                cout<<"\t\t\t\t| :: 1. State bank of India :: |"<<endl<<"\t\t\t\t| :: 2. Panjab National Bank ::"<<endl<<"\t\t\t\t| :: 3. Canara Bank :: "<<endl<<"\t\t\t\t";
                cin>>a;
                cout<<"\t\t\t\t| :: ENTER YOUR CARD DETAILS :: |"<<endl;
                string pin ,cvv;
                cout<<"\t\t\t\t| :: Enter Card No. :: | ";
                cin>>pin;
                cout<<endl;
                cout<<"\t\t\t\t| :: TYPE CVV :: | ";
                cin>>cvv;

            }

        }

        void delay(int milliseconds)
        {
            clock_t start = clock();
            while((clock() - start)*1000/CLOCKS_PER_SEC < milliseconds);
        }

        void display()
        {
            system("cls");
            ifstream ifile;
            ifile.open("C:\\reciept.txt"); //set your path to get your recipt

            cout<<ifstream("C:\\reciept.txt").rdbuf();
            ifile.close();
            cout<<endl<<endl<<"\t\t| :: first unhide your folder so that you can find your reciept :: |"<<endl;
            cout<<"\t\t| :: you can get your reciept in this directory"<<endl<<"\t\t| :: C:\\users\\your default user\\appdata\\local\\virtualstore\\reciept.txt";


        getch();
        }
};


int main()
{
    Company cc;
    cc.entry();
    work ww;
    print p;
    char ch;


                while(1)
                {
                    system("cls");
                    cout<<endl<<endl;
                    cout<<"\t\t\t\t***********************"<<endl;
                    cout<<"\t\t\t\t|     PREREQUISITE    |"<<endl;
                    cout<<"\t\t\t\t***********************"<<endl;
                    cout<<endl<<endl<<endl;
                    cout<<"\t\t| :: Do you have enough money to buy luxuary cars"<<endl;
                    cout<<"\t\t| :: if you have then most welcome otherwise"<<endl;
                    cout<<"\t\t| :: please take a exit door"<<endl<<endl;
                    cout<<"\t\t| :: type Y/y to ENTER or QUIT to N/n :: ";
                    cin >> ch;

                    switch(ch)
                    {
                            case 'y' :  ww.cars();
                                        p.customer();
                                        p.payment();
                                        for(int i=0;i<50;i++)
                                        {
                                            system("cls");
                                            cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t";
                                            cout<<"      Please Wait :: ";
                                            for(int j=0;j<i/L_PER_INCR;j++)
                                            cout<<char(219);
                                            p.delay(100/L_PER_INCR);
                                        }
                                        p.display();
                                        break;

                            case 'n' :  exit(0);
                                        break;

                            case 'Y' :  ww.cars();
                                        p.customer();
                                        p.payment();
                                        for(int i=0;i<100;i++)
                                        {
                                            system("cls");
                                            cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t";
                                            cout<<"      Payment in Progress :";
                                            for(int j=0;j<i/L_PER_INCR;j++)
                                            cout<<char(219);
                                            p.delay(100/L_PER_INCR);
                                        }
                                        p.display();
                                        break;

                            case 'N' :  exit(0);
                                        break;

                        default : cout<<"invalid";
                    }

                }
 return 0;
}
