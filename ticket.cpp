#include<iostream>
#include<fstream>
using namespace std;

int i=1;

class flight
{ public:
  int fno;         //Flight no
  string airname;  //Airline name
  string dest;     //Destination
  string src;      //Source
  string ddate;    //Departure date
  string dtime;    //Departure time
  string adate;    //Arrival date
  string atime;    //Arrival time
  int price;       //Price
  
   void getdata()      // For inputting the data from the user
   { 
     cout<<endl;
     cout<<"Enter flight number: ";
     cin>>fno;
	 cout<<"Enter airline name: ";
     cin>>airname;
     cout<<"Enter destination: ";
     cin>>dest;
     cout<<"Enter source: ";
     cin>>src;
     cout<<"Enter Departure date: ";
     cin>>ddate;
     cout<<"Enter Departure time: ";
     cin>>dtime;
     cout<<"Enter Arrival date: ";
     cin>>adate;
     cout<<"Enter Arrival time: ";
     cin>>atime;
     cout<<"Enter Price: ";
     cin>>price;
     cout<<endl;
   }
   
   void showdata()    // To display the data
   { cout<<endl;
     cout<<"Airline name: "<<airname<<endl;
     cout<<"Destination: "<<dest<<endl;
     cout<<"Source: "<<src<<endl;
     cout<<"Departure date: "<<ddate<<endl;
     cout<<"Departure time: "<<dtime<<endl;
     cout<<"Arrival date: "<<adate<<endl;
     cout<<"Arrival time: "<<atime<<endl;
     cout<<"Price: "<<price<<endl;
     cout<<endl;
   }
   
};

int main()
{ 

flight f[100];
int x;

do{  // The main screen 
cout<<endl;
cout<<"Enter the option"<<endl;
cout<<"0. Exit"<<endl;
cout<<"1. Add flight"<<endl;
cout<<"2. Show all flights"<<endl;
cout<<"3. Filter the data"<<endl;
cin>>x;

if(x==1)     // Enter a new flight record
{
f[i].getdata();
i++;
}

if(x==2)     // Display the record of all flights
{ for(int j=1;j<i;j++)
     f[j].showdata();
}

if(x==3)    // To filter the flights
{ cout<<endl<<"FILTER: "<<endl;
  cout<<"1. By Destination"<<endl;
  cout<<"2. By Source"<<endl;
  cout<<"3. By Price"<<endl;
  int q;
  cin>>q;
  if(q==1)   // Filtering the flights by destination
  {  cout<<"Enter destination to filter: "<<endl;
     string userdest; 
     cin>>userdest;
     for(int j=1;j<i;j++)
     { 
    	if(f[j].dest==userdest)
          f[j].showdata();
	 }
  }
  if(q==2) // Filtering the flights by source
  {  cout<<"Enter source to filter: "<<endl;
     string usersrc; 
     cin>>usersrc;
     for(int j=1;j<i;j++)
     { 
    	if(f[j].src==usersrc)
          f[j].showdata();
	 }
  }
  if(q==3)  // Filtering the flights by price
  { cout<<"Enter price to filter: "<<endl;
    int userprice; 
    cin>>userprice;
    for(int j=1;j<i;j++)
    { 
    	if(f[j].price==userprice)
          f[j].showdata();
	}
  }

}
}while(x!=0);

return 0;
}

