#include<iostream.h>
#include<conio.h>

void main()
{
int sales[5],year,i,j;
clrscr();
cout<<"PROGRAM TO PRINT A GRAPH FOR SALES OF A SHOP FOR PREVIOUS 5 YEARS\n\n\n";
cout<<"Enter current Year: ";
cin>>year;
year=year-4;
for(i=0;i<5;++i)
{
	cout<<"Enter sales for Year "<<year<<": ";
	cin>>sales[i];
	year++;
}
year=year-5;
cout<<"\n\n\t\t Sales------->";
cout<<"\n     ----------------------------------------------\n";
for(i=0;i<5;++i)
{       cout<<year<<"|";

	for(j=0;j<sales[i];++j)
		{
			cout<<"**";
		}

	cout<<"\n    |";
	for(j=0;j<sales[i];++j)
		{
			cout<<"**";
		}
	cout<<"\n    |\n";
	year++;
}
getch();
}



