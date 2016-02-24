#include <iostream>
#include <cmath>
#include <iomanip>
#include<string>
using namespace std;


char repeatation;
void Genom_laptop_models();
void Laurel_laptop_models();
void Veronica_laptop_models();


int main()
{	
	int choice_of_brand;
	
	char repeatation;
	char purchase;
	double payment;
	int quantityA;
	int quantityB;
	char repurchase;
	int r;
	const double g80 = 6199.00;
	const double g70 = 4199.00;
	const double g60 = 3199.00;
	const double l80 = 5199.00;
	const double l70 = 4399.00;
	const double l60 = 2899.00;
	const double v90 = 4399.00;
	const double v80 = 2499.00;
	const double v70 = 2299.00;

	do
	{
		cout <<"What is your favourite brand? " << endl;
		cout <<"1. Genom "  << endl;
		cout <<"2. Laurel "  << endl;
		cout <<"3. Veronica" << endl;
		cout <<"4. Quit program" << endl;
		cin >> choice_of_brand;

		if(choice_of_brand == 1)
		{
			Genom_laptop_models();
		}
		else if (choice_of_brand == 2)
		{
			Laurel_laptop_models();
		}
		else if (choice_of_brand == 3)
		{
			Veronica_laptop_models();
		}

		cout << "Do you want to check out other laptop brands and models?(Y/N)" <<endl;
		cin >> repeatation;

	}while((repeatation == 'Y')||(repeatation == 'y'));

	//Ask which model do customer want to purchase and show list
	cout <<"Which brand and model do you want to purchase?"<<endl;

	//use multidimensional array
	string laptop_list[10][3] = {
		{"  Model   \t"		,"Brand   \t",		"Price(RM)" },
		{"A Ge-80   \t"		,"Genom   \t",		"6199.00\t" },
		{"B.Ge-70   \t"		,"Genom   \t",		"4199.00\t" },
		{"C.Ge-60   \t"		,"Genom   \t",		"3199.00\t" },
		{"D.La-s80  \t"		,"Laurel  \t",		"5199.00\t" },
		{"E.La-s70  \t"		,"Laurel  \t",		"4399.00\t" },
		{"F.La-s60  \t"		,"Laurel  \t",		"2899.00\t" },
		{"G.Vero-y90\t"		,"Veronica\t",		"4399.00\t" },
		{"H.Vero-y80\t"		,"Veronica\t",		"2499.00\t" },
		{"I.Vero-y70\t"		,"Veronica\t",		"2299.00\t" },
		};
	for(int row=0 ; row < 10; row ++)
	{
		for(int column=0 ; column < 3 ; column++)
		{
			cout<<laptop_list[row][column]<<" ";
		}
		cout<<endl;
	}

	
		cout <<"Please enter the alphabet before the model if you wish to purchase that model."<<endl;
		cin  >> purchase;
		while((purchase !='A')&&(purchase !='a')&&(purchase !='B')&&(purchase !='b')&&(purchase !='C')&&(purchase !='c')&&(purchase !='D')&&(purchase !='d')&&(purchase !='E')&&(purchase !='e')&&(purchase !='F')&&(purchase !='f')&&
			  (purchase !='G')&&(purchase !='g')&&(purchase !='H')&&(purchase !='h')&&(purchase !='I')&&(purchase !='i')&&(purchase !='J')&&(purchase !='j'))
		{
			cout << "Error!Please enter an alphabet(A-J).";
			cin >> purchase;
		}


		cout <<"Enter the quantity ";
		cin >> quantityA;
		
		//Validate the data
		while((quantityA<1)||(quantityA>9999))
		{
			cout<<"Error! Please enter a quantity.(1-9999)"<<endl;
			cin >> quantityA;
		}
	
		string purchase_list[10][3];
		
		//use for loop to assign the value of laptop list to a new array
		//and make calculations
		
		switch (purchase)
		{
			case'a':
			case'A':payment = g80 * quantityA;
					for(int i =0;i<3;i++)
					{purchase_list[1][i]=laptop_list[1][i];}
					 
					break;
		
			case'b':
			case'B':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[2][i];
					payment = g70 * quantityA;
					break;

			case'c':
			case'C':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[3][i];
					payment = g60 * quantityA;
					break;

			case'd':
			case'D':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[4][i];
					payment = l80 * quantityA;
					break;
					
			case'e':
			case'E':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[5][i];
					payment = l70 * quantityA;
					break;

			case'f':
			case'F':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[6][i];
					payment = l60 * quantityA;
					break;

			case'g':
			case'G':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[7][i];
					payment = v90 * quantityA;
					break;

			case'h':
			case'H':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[8][i];
					payment = v80 * quantityA;
					break;

			case'i':
			case'I':for(int i =0;i<3;i++)
					purchase_list[1][i]=laptop_list[9][i];
					payment = v70 * quantityA;

		}
	
	

	//ask customer want to purchase another laptop or not
	cout << "\nDo you want to purchase another model of laptop?(Y/N)"<<endl;
	cin >> repurchase;

	while((repurchase == 'Y')||(repurchase == 'y'))
	{
		cout <<"Which brand and model do you want to purchase?"<<endl;

		//use multidimensional array
		string laptop_list[10][3] = {
		{"  Model   \t"		,"Brand   \t",		"Price(RM)" },
		{"A Ge-80   \t"		,"Genom   \t",		"6199.00\t" },
		{"B.Ge-70   \t"		,"Genom   \t",		"4199.00\t" },
		{"C.Ge-60   \t"		,"Genom   \t",		"3199.00\t" },
		{"D.La-s80  \t"		,"Laurel  \t",		"5199.00\t" },
		{"E.La-s70  \t"		,"Laurel  \t",		"4399.00\t" },
		{"F.La-s60  \t"		,"Laurel  \t",		"2899.00\t" },
		{"G.Vero-y90\t"		,"Veronica\t",		"4399.00\t" },
		{"H.Vero-y80\t"		,"Veronica\t",		"2499.00\t" },
		{"I.Vero-y70\t"		,"Veronica\t",		"2299.00\t" },
		};
		for(int row=0 ; row < 10; row ++)
		{
			for(int column=0 ; column < 3 ; column++)
			{
				cout<<laptop_list[row][column]<<" ";
			}
		cout<<endl;
		}
		cout <<"Please enter the alphabet before the model if you wish to purchase that model."<<endl;
		cin  >> purchase;
		while((purchase !='A')&&(purchase !='a')&&(purchase !='B')&&(purchase !='b')&&(purchase !='C')&&(purchase !='c')&&(purchase !='D')&&(purchase !='d')&&(purchase !='E')&&(purchase !='e')&&(purchase !='F')&&(purchase !='f')&&
			  (purchase !='G')&&(purchase !='g')&&(purchase !='H')&&(purchase !='h')&&(purchase !='I')&&(purchase !='i')&&(purchase !='J')&&(purchase !='j'))
		{
			cout << "Error!Please enter an alphabet(A-J).";
			cin >> purchase;
		}
		cout <<"Enter the quantity ";
		cin  >>quantityB;
		//validate input data
		while((quantityB<1)||(quantityB>9999))
		{
			cout<<"Error! Please enter a quantity.(1-9999)"<<endl;
			cin >> quantityA;
		}
	
		
		//increament for array
		r=1;
		r++;
		switch (purchase)
			{
				case'a':
				case'A':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[1][i];
						payment += g80 * quantityB; 
						break;
		
				case'b':
				case'B':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[2][i];
						payment += g70 * quantityB;
						break;

				case'c':
				case'C':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[3][i];
						payment += g60 * quantityB;
						break;

				case'd':
				case'D':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[4][i];
						payment += l80 * quantityB;
						break;
					
				case'e':
				case'E':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[5][i];
						payment += l70 * quantityB;
						break;

				case'f':
				case'F':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[6][i];
						payment += l60 * quantityB;
						break;

				case'g':
				case'G':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[7][i];
						payment += v90 * quantityB;
						break;

				case'h':
				case'H':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[8][i];
						payment += v80 * quantityB;
						break;

				case'i':
				case'I':for(int i =0;i<3;i++)
						purchase_list[r][i]=laptop_list[9][i];
						payment += v70 * quantityB;

			}

			quantityA += quantityB;
			cout << "\nQuantity purchased:"<<quantityA <<endl;
			cout << "Total payment = "<<payment<<endl;

			//ask customer want to purchase another laptop or not
			cout << "Do you want to purchase another model of laptop?(Y/N)"<<endl;
			cin >> repurchase;

			//Show customer the purchase list
			if((repurchase !='Y')||(repurchase !='Y'))
			{
				cout << laptop_list[0][0]<<" ";
				cout << laptop_list[0][1]<<" ";
				cout << laptop_list[0][2]<<" ";

				for(int b=0;b<=r;b++)
				{
					for(int c=0;c<3;c++)
					{	
						cout << purchase_list[b][c]<<" ";
					}
				cout<<endl;
				}
			}
	}

	//Show total payment that customer have to pay
	cout << "\nTotal quantity purchased:"<<quantityA <<endl;
	cout <<showpoint<<fixed<<setprecision(2)<<"\nTotal payment = RM " << payment <<endl<< endl;
	cout <<"A free mouse and cooling pad will be given to you.\nThank you for buying laptop with us. "<<endl;

	return 0;
}

//Genom laptop models and specifications
void Genom_laptop_models()
{//Check after complete coding

		cout <<"Here are the models available with their specification and price.\n"<< endl;

		cout <<"Model Ge-80" << endl;
		cout <<"*6th Gen. Intel core i7 processor" << endl;
		cout <<"*NVDIA GeForce GTX 980M graphic card " << endl;
		cout <<"*17'inch IPS display"<<endl;
		cout <<"*16GB DDR4 memory"<<endl;
		cout <<"*1TB 7200rpm hard disk"<<endl;
		cout <<"\n RM 6199.00\n"<<endl;
					
		cout <<"Model Ge-70" << endl;
		cout <<"*5th Gen. Intel core i7 processor" << endl;
		cout <<"*NVDIA GeForce GTX 960M graphic card " << endl;
		cout <<"*15'inch IPS display"<<endl;
		cout <<"*8GB DDR3 memory"<<endl;
		cout <<"*1TB 7200rpm hard disk"<<endl;	
		cout <<"\n RM 4199.00\n"<<endl;
					
		cout <<"Model Ge-60" << endl;
		cout <<"*5th Gen. Intel core i5 processor" << endl;
		cout <<"*NVDIA GeForce 940M graphic card " << endl;
		cout <<"*15'inch IPS display"<<endl;
		cout <<"*4GB DDR3 memory"<<endl;
		cout <<"*1TB 5400rpm hard disk"<<endl;	
		cout <<"\n RM 3199.00\n"<<endl;
					
	}
	
	
//Laurel laptop model and specifications
void Laurel_laptop_models()
{//Check after complete coding
	
		cout <<"Here are the models available with their specification and price.\n"<< endl;
	
		cout <<"Model La-s80" << endl;
		cout <<"*6th Gen. Intel core i7 processor" << endl;
		cout <<"*NVDIA GeForce GTX 970M graphic card " << endl;
		cout <<"*17'inch IPS display"<<endl;
		cout <<"*16GB DDR4 memory"<<endl;
		cout <<"*500GB Solid-state_drive"<<endl;
		cout <<"\n RM 5199.00\n"<<endl;
					
		cout <<"Model La-s70" << endl;
		cout <<"*5th Gen. Intel core i7 processor" << endl;
		cout <<"*NVDIA GeForce GTX 960M graphic card " << endl;
		cout <<"*17'inch IPS display"<<endl;
		cout <<"*12GB DDR3 memory"<<endl;
		cout <<"*1 TB 7200rpm hard disk"<<endl;	
		cout <<"\n RM 4399.00\n"<<endl;
		
		cout <<"Model La-s60" << endl;
		cout <<"*5th Gen. Intel core i5 processor" << endl;
		cout <<"*NVDIA GeForce 920M graphic card " << endl;
		cout <<"*15'inch IPS display"<<endl;
		cout <<"*4GB DDR3 memory"<<endl;
		cout <<"*1TB 5400rpm hard disk"<<endl;	
		cout <<"\n RM 2899.00\n"<<endl;
	
}

//Veronica laptop models and specifications
void Veronica_laptop_models()
{//Check after complete coding

		cout <<"Here are the models available with their specification and price.\n"<< endl;

		cout <<"Model Vero-y90" << endl;
		cout <<"*5th Gen. Intel core i7 processor" << endl;
		cout <<"*NVDIA GeForce GTX 960M graphic card " << endl;
		cout <<"*17'inch IPS display"<<endl;
		cout <<"*8GB DDR4 memory"<<endl;
		cout <<"*1TB 7200rpm hard disk"<<endl;
		cout <<"\n RM 4399.00\n"<<endl;
					
		cout <<"Model Vero-y80" << endl;
		cout <<"*5th Gen. Intel core i5 processor" << endl;
		cout <<"*NVDIA GeForce 920M graphic card " << endl;
		cout <<"*15'inch HD display"<<endl;
		cout <<"*4GB DDR3 memory"<<endl;
		cout <<"*1TB 5400rpm hard disk"<<endl;	
		cout <<"\n RM 2499.00\n"<<endl;
					
		cout <<"Model Vero-y70" << endl;
		cout <<"*5th Gen. Intel core i5 processor" << endl;
		cout <<"*Radeon 6750M graphic card " << endl;
		cout <<"*14'inch HD display"<<endl;
		cout <<"*4GB DDR3 memory"<<endl;
		cout <<"*1TB 5400rpm hard disk"<<endl;	
		cout <<"\n RM 2299.00\n"<<endl;
					
	}