#include<iostream>
#include<string>
using namespace std;

int mini_car=0,cars=0,jeep=0,bus=0;
//Charges of Parking
int charges_mini_car=150,charges_cars=250,charges_jeep=400,charges_bus=550;
//amount earned and number of cars parked
int amount=0,count=0;

//types of cars
int mini_cars();
int normal_cars();
int jeeps();
int buses();
//admin related content
int check_record();
int delete_record();
int admin_menu();
int main()
{
	
	int choice;
	cout<<"                                     ****CARS PARKING****"<<endl<<endl;
	cout<<"total vehicles park maximium 40"<<endl;

	A:
	cout<<"-------------------------Press the button -------------------------"<<endl;
	cout<<"press 1 to park mini cars"<<endl;
	cout<<"press 2 to park normal cars"<<endl;
	cout<<"press 3 to park Jeeps"<<endl;
	cout<<"press 4 to park bus"<<endl;
	cout<<"press 5 to record check"<<endl;
	cout<<"press 6 For Admin Menu"<<endl;
	
	
	cout<<"-------------------------------------------------------------------"<<endl;	
	cout<<endl<<"Please Enter Your Choice: ";
	cin>>choice;
	if(choice==1)
	{
		system("cls");
		mini_cars();
	}
	else if(choice==2)
	{
		system("cls");
		normal_cars();
	}
	else if(choice==3)
	{
		system("cls");
		jeeps();

	}
	else if(choice==4)
	{
		system("cls");
		buses();
	}
	else if(choice==5)
	{
		system("cls");
		check_record();
	}

	else if(choice==6)
	{
		system("cls");
		admin_menu();
	}
	else
	{
		system("cls");
		cout<<endl<<"Please Enter Correct Choice!"<<endl;
		goto A;
	}
}
int mini_cars()
{
	
	 char id[16];
	 char pin[4];
	 
	cout<<"Enter the Bank ID : ";
	cin>>id;
	cout<<"Enter the Pin Number : ";
	cin>>pin[4];
	cout<<"Payment is done";
	
	system("cls");
	//maximum slots in mini car is 10;
	if(mini_car<10)
	{
		
		mini_car+=1;
		count+=1;
		amount+=charges_mini_car;
	
	}
	
	else
	{
		cout<<"*Sorry: Mini Car Slot are Full*"<<endl;
	}
	main();
}

int normal_cars()
{
	 char id[16];
	 char pin[4];
	cout<<"Enter the Bank ID : ";
	cin>>id;
	cout<<"Enter the Pin Number : ";
	cin>>pin[4];
	cout<<"Payment is done";
	system("cls");
	//maximum slots in Normal-car is 10;
	if(cars<10)
	{
		cars+=1;
		count+=1;
		amount+=charges_cars;
		
	}
	else
	{
	cout<<"*Sorry: Normal Car Slot are Full*"<<endl;
	}
	main();
}
int jeeps(){
	 char id[16];
	 char pin[4];
	cout<<"Enter the Bank ID : ";
	cin>>id;
	cout<<"Enter the Pin Number : ";
	cin>>pin[4];
	cout<<"Payment is done";
	system("cls");
	//maximum slots in Jeeps is 10;
	if(jeep<10)
	{
		jeep+=1;
		count+=1;
		amount+=charges_jeep;
	}
	else
	{
		cout<<"*Sorry: Jeep Slots are Full*"<<endl;
	}
	main();
}
int buses()
{
	 char id[16];
	 char pin[4];
	cout<<"Enter the Bank ID : ";
	cin>>id;
	cout<<"Enter the Pin Number : ";
	cin>>pin[4];
	cout<<"Payment is done";
	system("cls");
	//maximum slots in Bus is 10;
	if(bus<10)
	{
		bus+=1;
		count+=1;
		amount+=charges_bus;
	}
	else
	{
		cout<<"*Sorry: Bus Slots are Full*"<<endl;
		
	}
	main();
}
int check_record()
{
	system("cls");
	cout<<"-------------------------Record check -------------------------"<<endl;
	cout<<"Total vehicles park: "<<count<<endl;
	cout<<"Total amount earn: "<<amount<<endl<<endl;
	cout<<"number of Mini Cars: "<<mini_car<<endl;
	cout<<"number of Normal Cars: "<<cars<<endl;
	cout<<"number of Jeeps: "<<jeep<<endl;
	cout<<"number of Bus: "<<bus;
main();
}
int delete_record()
{
	system("cls");
	amount=0;
	count=0;
	cout<<"***** Record Deleted *****";
}
int admin_menu()
{
	system("cls");
	int n;
	string id,pass,uid="Admin", up="Admin46@1";
	
	cout<<"Welcome to Admin Menu!";
	A:
	cout<<endl<<"Please Enter Your UserID: ";
	cin>>id;
	cout<<endl<<"Please Enter Your Password: ";
	cin>>pass;
	if(uid==id&&up==pass)
	{
		system("cls");
		cout<<"Access Granted!"<<endl;
		goto B;
	}
	else
	{
		system("cls");
		cout<<"Please Enter Correct Credentials!";
	goto A;
	}
	B:
	cout<<endl<<"Price of Parking is as follows: ";
	cout<<endl<<"For Mini-Cars: Rs."<<charges_mini_car;
	cout<<endl<<"For Normal Cars: Rs."<<charges_cars;
	cout<<endl<<"For Jeeps: Rs."<<charges_jeep;
	cout<<endl<<"For Busses: Rs."<<charges_bus;
	cout<<endl<<endl<<"Enter 1 to Change Price of tickets";
	cout<<endl<<"Enter 2 to Delete the Record";
	cout<<endl<<"Enter 3 to goto Main Menu";
	cout<<endl<<"Enter Your Choice: ";
	cin>>n;
	if (n==1)
	{
		C:
		system("cls");
		cout<<endl<<"Enter 1 to Change price of Mini Cars ";
		cout<<endl<<"Enter 2 to Change price of Normal Cars";
		cout<<endl<<"Enter 3 to Change price of Jeeps";
		cout<<endl<<"Enter 4 to Change price of Busses";
		cout<<endl<<"Enter your Choice: ";
		cin>>n;
		if(n==1)
		{
			cout<<endl<<"Enter Updated Ticket Price of Mini Cars: ";
			cin>>charges_mini_car;
			admin_menu();
		}
		else if(n==2)
		{
			cout<<endl<<"Enter Updated Ticket Price of Normal Cars: ";
			cin>>charges_cars;
			admin_menu();
		}
		else if(n==3)
		{
			cout<<endl<<"Enter Updated Ticket Price of Jeeps Cars: ";
			cin>>charges_jeep;
			admin_menu();
		}
		else if(n==4)
		{
			cout<<endl<<"Enter Updated Ticket Price of Busses Cars: ";
			cin>>charges_bus;
			admin_menu();
		}
		else
		{
			system("cls");
			cout<<endl<<"Please Enter Correct Choice!";
			goto C;
		}
	}
	else if(n==2){
			amount=0;
			count=0;
			cout<<"Record is delete";
			admin_menu();
			
	}
	else if (n==3)
	{
		system("cls");
		main();
	}
	else
	{
		system("cls");
		cout<<endl<<"Please Enter Correct Choice!";
		goto B;
	}
}
