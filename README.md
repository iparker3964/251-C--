
#Internet-Service-Bill-Calculator

##Project source can be download from https://github.com/iparker3964/251-C--.git

##Program Objective:  
 An Internet service provider has three different subscription packages for its customers:
 Package A: For $9.95 per month 10 hours of access are provided. Additional hours are $2.00 per hour.
 Package B: For $14.95 per month 20 hours of access are provided. Additional hours are $1.00 per hour.
 Package C: For $19.95 per month unlimited access is provided.
 Write a program that calculates a customer s monthly bill. It should ask which package
 the customer has purchased and how many hours were used. It should then display the total amount due.
 Input Validation: Be sure the user only selects package A, B, or C. Also, the number of hours used in a month cannot exceed 744

##Autor: Isaiah Parker

##How to run file
The program can be run from the command line prompt. 

##Sample Code
**Menu / Prompts the user to enter the total amount of hours of internet access**
```
cout << "\t\tInternet Service Provider Menu\n\n"
		 << " Whats your total amount of hours of internet access";
	cin >> hours;
```

**Menu / Select a internet service package**
```
  cout << "\t\tInternet Service Provider Menu\n\n"
		 << " Whats your total amount of hours of internet access";
	cin >> hours;
	cout << "A. Package A for $9.95 per month fot 10 hours"
		 << "B. Package B for $14.95 per month for 20 hours"
		 << "C. Package C for $19.95 for unlimted access"
		 << "Enter your choice: ";
	cin >> choice;
	choice=toupper(choice)
```
**Output if user choices package A**
  
  If the user input of amount of hours are greater than ten there will be a fee of $2.00 per additional hour 
```
if (choice == 'A')
	{
		if ( hours > 10)
		{	
			cout << "You have a fee of $2.00 per additional hours";
			 charges = hours * 9.95 + (hours - 10) * 2.00;
			cout << " Your bill is $" << charges << endl;
		}
		else
		{
		 charges = hours * 9.95; 
		 cout << " Your bill is $" << charges << endl;
		}
	}
	
```

**Output if user choices package B**

If the user input of amount of hours are greater than twenty there will be a fee of $1.00 per additional hour 
```
else if(choice == 'B')
	{
		if (hours > 20);
		{ 
			cout << " You have a fee of $1.00 per additional hous";
			charges = hours * 14.95 + (hours - 20) * 1.00;
			cout << "Your bill is $" << charges << endl;
		}
		else 
		{
			charges = hours * 14.95;
			cout << "Your bill is $" << charges << endl;
		}
	}
```
**Output if user choices package C**

There are no additional fees for pakage C
```
else if(choice == 'C')
	{ 
		charges = hours * 19.95;
		cout << "Your bil is $" << charges << endl;
	}
```
**Output if user enters amount of hours greater than 744**

The program will end and return zero
```
else if (hours >= 744)
	{
		cout << "Your hours can not exceed 744.";
	}
	return 0;
}

```





