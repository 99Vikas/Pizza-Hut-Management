/*  Name-Vikas Singh Chauhan  
	Reg. No.-11702846 */
// This program gives information about availablity of pizza and gives user lot of choice to select aper their choice and can order for 
// anywhere and uses the concept of file handling to store data and bills.

#include<iostream>
#include<stdlib.h>
#include<fstream>	
using namespace std;
class pizza
{
	public:
		int a,option,p,choice,l,n,b,k,s,m,r,h,f,i;
		int mo;
		char name[20];
		void menu(int);
		void task();
};

//provides information about the availability of pizzas

void pizza::menu(int choice) 
{
	ofstream outm;
	outm.open("Menu_Available.txt",ios::app);
switch (choice)
{
	int n,s;
case 1:
	cout<<"\n"<<"PIZZA NAME"<<"\t\t\t\t"<<"RATE(in rupay)"<<"\n\n";
	outm<<"\n"<<"PIZZA NAME"<<"\t\t\t\t"<<"RATE(in rupay)"<<"\n\n";
	cout<<"<1.> VEG PANEER PIZZA"<<"\t\t\t "<<"180 only"<<"\n";
	outm<<"<1.> VEG PANEER PIZZA"<<"\t\t\t "<<"180 only"<<"\n";
	cout<<"<2.> PANEER MAKHNI PIZZA"<<"\t\t "<<"200 only"<<"\n";
	outm<<"<2.> PANEER MAKHNI PIZZA"<<"\t\t "<<"200 only"<<"\n";
	cout<<"<3.> VEG-CORN PIZZA"<<"\t\t\t "<<"220 only"<<"\n";
	outm<<"<3.> VEG-CORN PIZZA"<<"\t\t\t "<<"220 only"<<"\n";
	cout<<"<4.> VEGGIE-PARADIZE PIZZA"<<"\t\t "<<"250 only"<<"\n\n";
	outm<<"<4.> VEGGIE-PARADIZE PIZZA"<<"\t\t "<<"250 only"<<"\n\n";
    break;
case 2:
	cout<<"\t"<<"PIZZA NAME"<<"\t\t\t\t"<<"RATE(in rupay)"<<"\n\n";
	outm<<"\t"<<"PIZZA NAME"<<"\t\t\t\t"<<"RATE(in rupay)"<<"\n\n";
	cout<<"<1.> CHICKEN TIKKA PIZZA"<<"\t\t\t"<<"280 only"<<"\n";
	outm<<"<1.> CHICKEN TIKKA PIZZA"<<"\t\t\t"<<"280 only"<<"\n";
	cout<<"<2.> PERI PERI CHICKEN PIZZA"<<"\t\t\t"<<"290 only"<<"\n";
	outm<<"<2.> PERI PERI CHICKEN PIZZA"<<"\t\t\t"<<"290 only"<<"\n";
	cout<<"<3.> CHICKEN TIKKA"<<"\t\t\t\t"<<"300 only"<<"\n";
	outm<<"<3.> CHICKEN TIKKA"<<"\t\t\t\t"<<"300 only"<<"\n";
	cout<<"<4.> PIZZA hut SPECIAL PIZZA"<<"\t\t\t"<<"320 only"<<"\n\n";
	outm<<"<4.> PIZZA hut SPECIAL PIZZA"<<"\t\t\t"<<"320 only"<<"\n\n";
    break;
case 3:
	cout<<"\n"<<"Today's offer  :->->->->"<<"\n";
	cout<<"Buy 2 veg-corn medium pizza in just Rs.199 and get a chocolate crusher absolutely free*"<<"\n";
	cout<<"<1.>YES"<<"\n";
	cout<<"<2.>NO"<<"  ";
	cin>>m;
	if (m==1)
	{
	cout<<"No. of orders  :  ";
	cin>>f;	
	k+=(f*199);
	cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
	cout<<"\n"<<"\t\t"<<"No. of pizza combo"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
	cout<<"\n"<<"\t\t"<<"\t"<<f<<"\t\t\t\t"<<"Rs.199"<<"\t\t\t"<<"Rs."<<k<<endl;
	break;
	}
	else if (m==2)
	break;
}	
}

//performs the task of billing and saving data in a file

void pizza::task()
{
	a=0;
	k=0;
	int x=1;
	ofstream outf;
	outf.open("BILLING_DATA_FILE.txt",ios::app);
	outf<<"Date : 03/04/18"<<"\n";
	outf<<"Time : 12:15p.m."<<"\n\n";
	pizza p2;
	h:
	cout<<"<1>. Order at store only"<<"\n";
	cout<<"<2>. Order anywhere in campus"<<"\n";
	cout<<"<3>. Our contact"<<"\n";
	cout<<"<4>. Search for a Customer"<<"\n\n";
	cout<<"Enter your choice"<<" :   ";
	cin>>option;
	
//section for ordering pizza at pizza hut place
	
	switch(option)
	{
		case 1:
		cout<<"\n";
		cout<<"<1>. ****** OUR MENU ******"<<"  :   ";
		cin>>p;
		
	
		switch (p)
		{ 
		case 1:
		cout<<"\n";
		cout<<"<1.>"<<"\t"<<"     Vegetarian"<<"\n";
		cout<<"<2.>"<<"\t"<<"   Non Vegetarian"<<"\n";
		cout<<"<3.> ****** Today's Offer ******  :  ";
        cin>>choice;
		
        p2.menu(choice);
        cout<<"Enter your choice   :   ";
		cin>>s;
	
	    cout<<"\n";
		cout<<"Number of pizza"<<"::  ";
	    cin>>n;
	    if(choice==1)
	    {   
	    cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (s)
		{
	    case 1:
			k+=n*180;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"VEG PANEER PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.180"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"VEG PANEER PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.180"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
		 	k+=n*230;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"PANEER MAKHNI PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.200"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"PANEER MAKHNI PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.200"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			k+=n*250;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"VEG-CORN PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.220"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"VEG-CORN PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.220"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			k+=n*290;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"VEGGIE-PARADIZE PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.250"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"VEGGIE-PARADIZE PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.250"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
			
		}
    	cout<<"________________________________________________________________________________________________________________________"<<endl;
		}
	
		else if (choice==2)
	    {
	    cout<<"________________________________________________________________________________________________________________________"<<endl;	
	    switch (s)
	    {
		case 1:
			k+=n*280;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"CHICKEN TIKKA PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.280"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"CHICKEN TIKKA PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.280"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			k+=n*290;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"PERI PERI CHICKEN PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.290"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"PERI PERI CHICKEN PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.290"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			k+=n*300;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"CHICKEN TIKKA"<<"\t\t"<<n<<"\t\t  "<<"Rs.300"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"CHICKEN TIKKA"<<"\t\t"<<n<<"\t\t  "<<"Rs.300"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			k+=n*320;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			outf<<"\n\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost"<<endl;
			cout<<"\n"<<"<PIZZA hut SPECIAL PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.320"<<"\t\t  "<<"Rs."<<k<<endl;
			outf<<"\n"<<"<PIZZA hut SPECIAL PIZZA"<<"\t\t"<<n<<"\t\t  "<<"Rs.320"<<"\t\t  "<<"Rs."<<k<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(k+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
	    }	
		cout<<"________________________________________________________________________________________________________________________"<<endl;	
	}
}

		break;
		
		//section for ordering pizza anywhere in the campus
		
		case 2:
		cout<<"\n";
		cout<<"Enter your Mobile No. :   ";
		cin>>mo;
		outf<<mo<<endl;
		cout<<"Enter your name :   ";
		cin>>name;
		outf<<name<<endl<<endl;
		cout<<"\n"<<"<1>. ****** OUR MENU ******"<<"  :   ";
		cin>>p;
		
		switch (p)
		{ 
		case 1:											//section for selecting type of pizza
		cout<<"\n";
		cout<<"<1.>"<<"\t"<<"     Vegetarian"<<"\n";
		cout<<"<2.>"<<"\t"<<"   Non Vegetarian"<<"\n";
		cout<<"<3.> ****** Today's Offer ******  :  ";
        cin>>choice;	
        p2.menu(choice);
        cout<<"Enter your choice   :   ";
		cin>>s;
	    cout<<"\n";
		cout<<"Number of pizza"<<"::  ";
	    cin>>n;
	
		// Section for providing address for delivery	
	
		cout<<"\n\n"<<"**Location**:"<<"\t\t\t"<<"  **Shipping Charge**"<<"\n\n";
		cout<<"<1.>Near-DSA"<<"\t\t\t\t"<<"Rs20"<<"\n";
		cout<<"<2.>Near Admission block"<<"\t\t"<<"Rs30"<<"\n";
		cout<<"<3.> BH-2,BH-3 and BH-4"<<"\t\t\t"<<"Rs50"<<"\n";
		cout<<"<4.> BH-5 and BH-6"<<"\t\t\t"<<"Rs60"<<"\n";
		cout<<"<5.>Campus Cafe"<<"\t\t\t\t"<<"No Charge"<<"\n\n";
		
	    if(choice==1)
	    {   
		switch (s)
		{
	    case 1:
	    	cout<<"Choose your location"<<" :  ";
			cin>>l;
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*180)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*180)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*180)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*180)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 5:
			a+=(n*180)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG PANEER PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.180"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
    	}
    	cout<<"________________________________________________________________________________________________________________________"<<endl;
    	break;
   
		case 2:
			cout<<"Choose your location"<<" :  ";
			cin>>l;
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*200)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*200)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*200)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*200)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 5:
			a+=(n*200)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PANEER MAKHNI PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.200"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		}
		cout<<"________________________________________________________________________________________________________________________"<<endl;
		break;
		
		case 3:
			cout<<"Choose your location"<<" :  ";
			cin>>l;
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*220)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*220)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*220)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*220)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 5:
			a+=(n*220)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.220"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;	
	    }
	    cout<<"________________________________________________________________________________________________________________________"<<endl;
	    break;
	      
		case 4:
			cout<<"Choose your location"<<" :  ";
			cin>>l;	
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*250)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*250)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*250)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*250)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEGGIE-PARADIZE PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 5:
			a+=(n*250)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t"<<"Total cost";
			cout<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"VEG-CORN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.250"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;		
    	}
    	cout<<"________________________________________________________________________________________________________________________"<<endl;
		}
	}
		else if (choice==2)
	    {
	    switch (s)
	    {
		case 1:
			cout<<"Choose your location"<<" :  ";
			cin>>l;	
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*280)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*280)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*280)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*280)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 5:
			a+=(n*280)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.280"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;	
		}
		cout<<"________________________________________________________________________________________________________________________"<<endl;
		break;
	
		case 2:
			cout<<"Choose your location"<<" :  ";
			cin>>l;
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*290)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*290)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*290)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*290)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@ TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@ TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;		
			break;
		case 5:
			a+=(n*290)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PERI PERI CHICKEN PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.290"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		}
		cout<<"________________________________________________________________________________________________________________________"<<endl;
		break;
	
		case 3:
			cout<<"Choose your location"<<" :  ";
			cin>>l;	
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*300)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*300)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*300)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*300)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 5:
			a+=(n*300)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"CHICKEN TIKKA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.300"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;		
		}
		cout<<"________________________________________________________________________________________________________________________"<<endl;
		break;
  		
		case 4:
			cout<<"Choose your location"<<" :  ";
			cin>>l;
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		switch (l)
    	{
		case 1:
			a+=(n*320)+20;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.20"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 2:
			a+=(n*320)+30;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.30"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 3:
			a+=(n*320)+50;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.50"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 4:
			a+=(n*320)+60;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total Cost";
			cout<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.60"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;
		case 5:
			a+=(n*320)+0;
			cout<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			outf<<"\n"<<"\t\t\t\t"<<"@@@@@@@  TAX INVOICE  @@@@@@@"<<endl;
			cout<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			outf<<"\n"<<"Name of pizza"<<"\t\t"<<"No. of pizza"<<"\t\t"<<"Shipping charges"<<"\t\t"<<"Cost of Each"<<"\t\t"<<"Total cost";
			cout<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			outf<<"\n\n"<<"PIZZA hut SPECIAL PIZZA"<<"  \t "<<n<<"\t\t\t"<<"Rs.0"<<"\t\t\t\t"<<"Rs.320"<<"\t\t"<<"Rs."<<a<<endl;
			cout<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			outf<<"\n"<<"GST Charges  :  Rs.7.55"<<endl;
			cout<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl;
			outf<<"\n"<<"Total Amount  :  Rs."<<(a+7.55)<<endl<<endl;
			cout<<"\n"<<"Contact us - 1800 111 8888"<<endl;
			break;	
			}
			cout<<"________________________________________________________________________________________________________________________"<<endl;
		}
	}
}

	
		break;
		
		// Details for any of the queries or problem.
		
		case 3:
			cout<<"\n"<<"VIKAS SINGH CHAUHAN"<<"\n"<<"CONTACT :: 9598479015"<<"\n";
			cout<<"ADDRESS :: BH-5,BLOCK-C,ROOM NO.- 403"<<"\n"<<"TIMING :: 9:00 TO 8.30(OFF ON SUNDAY)"<<endl;
			break;
		case 4:
			cout<<"Enter a User-ID:   ";
			cin>>i;
			ifstream inf("BILLING_DATA_FILE");
			
			inf>>mo;
			inf>>name;
			if(i==mo)
			{
				cout<<"User-ID Exixts"<<endl;
				cout<<"Name of customer is :  "<<name<<endl;
			}
			else
			{
				cout<<"User-ID does not Exixts"<<endl;
			}
			break;
	//	case 5:
	//		break;	

}
	
	
	cout<<"\n\n"<<"************THANK YOU FOR VISITING PIZZA HUT*********'HAVE A NICE DAY'***********";
	cout<<"\n\n"<<"Press <1> to go up"<<"\n";
	cout<<"Press <2> to EXIT"<<"\t";
    cin>>b;
    if (b==1)
    {  
    	cout<<"\n";
    	system("cls");
    	goto h;
	}
	 
}
   


int main()
{
	
	pizza p1;
    system("cls");
    
    cout<<"\t\t\t\t\t\t\t\t\t-------------------TRY ALL NEW CHOICES OF PIZZA--------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t                              at                                   "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t                           PIZZA HUT                          "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t|                          EVERYDAY                            |"<<endl;      
	cout<<"\t\t\t\t\t\t\t\t\t|                           VALUE                              |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t|-----------------------------||-------------------------------|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t |                            ||                              |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t  |                           ||                             |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t   |        REGULAR           ||       MEDIUM               |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t    |        SIZE             ||        SIZE               |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t     |                        ||                          |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t      |      RS.99            ||       RS.199            |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t       |                      ||                        |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t        |                     ||                       |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t         |                    ||                      |"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t          |------------------------------------------|"<<endl;                       
    cout<<endl<<endl<<endl<<endl; 
    p1.task();
    
	return 0;
}
	    
