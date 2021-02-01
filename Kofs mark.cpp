
#include <iostream>
#include <string>
 
using namespace std;

string customer_name;
int unique_id;
int quantity;
const double vat=0.12;



int main() {
	
	
	cout<< "WELCOME TO KOFSMARK"<< endl;
	cout<<""<<endl;
	
	
	cout<<"Please enter your name: "<<endl;
	getline(cin,customer_name);
	
	cout<<"Please enter your unique ID: "<<endl;
	 cin>>unique_id;
	 
	 cout<<"These are the items available items " <<endl;
	 cout<<"Printer = $200"<<endl;
	 cout<<"Phone =$150"<<endl;
	 cout<<"Table = $50"<<endl;
	 
	 double Printer=200;
	 double Phone=150;
	 double Table=50;
	 double totalcost, totalamountpaid;
	 cout<<""<<endl;
	 cout<<""<<endl;
	 
	 
	 
	string item_you_want_to_purchase;
	 cout<<" Please which of these items do you wanna purchase :"<<endl;
	 cin>>item_you_want_to_purchase;
	 
	 if (item_you_want_to_purchase== "Printer" 
	 {
	    cout<<" Please how many do you want?"<<endl;
	    cin>>quantity;	
	 }else if(item_you_want_to_purchase == "Phone" || item_you_want_to_purchase=="PHONE" || item_you_want_to_purchase=="phone")
	 {
	 	cout<<" Please how many do you want?"<<endl;
	    cin>>quantity;
	 }else if(item_you_want_to_purchase == "Table" || item_you_want_to_purchase=="TABLE" || item_you_want_to_purchase=="table")
	 {
	 	cout<<" Please how many do you want?"<<endl;
	    cin>>quantity;
	 }else
	
	
	
	    cout<<""<<endl;
	    cout<<""<<endl; 
	  cout<<"amount to be paid" <<endl;
	  int amount_to_be_paid;
	  cin>> amount_to_be_paid;
	  
	  if(amount_to_be_paid <Printer|| amount_to_be_paid<Phone||amount_to_be_paid<Table)
       {
	     cout<<"sorry, you do not sufficient money to purchase the item"<<endl;
		 
	}
	
	int vat_amount;
    if (item_you_want_to_purchase=="printer" ||item_you_want_to_purchase=="Printer" ||item_you_want_to_purchase=="PRINTER" )
	{
	
	  totalcost= Printer * quantity;
	  vat_amount= totalcost * vat;
	 
	 
	   
	 totalamountpaid = totalcost + vat_amount;
	  
	
	}else if (item_you_want_to_purchase=="phone" ||item_you_want_to_purchase=="Phone" ||item_you_want_to_purchase=="PHONE" )
	{
	   totalcost= Phone * quantity;
	  vat_amount= totalcost * vat;
	 
	   
	 totalamountpaid = totalcost + vat_amount;
	 
		
	}else if (item_you_want_to_purchase=="table" ||item_you_want_to_purchase=="Table" ||item_you_want_to_purchase=="TABLE" )
	 
	{
	
	     totalcost= Table * quantity;
	    vat_amount= totalcost * vat;
	 
	  totalamountpaid = totalcost + vat_amount;
	 
	   
	 
   }else{
   	
   }
    double balance;
   if (amount_to_be_paid> totalamountpaid){
    	balance= amount_to_be_paid - totalamountpaid;
    	
   }else if(amount_to_be_paid == totalamountpaid )
    {
    	balance= amount_to_be_paid - totalamountpaid;
    	
    	
	}else{
		
		cout<<"Sorry try again"<<endl;
	    
	}
	if ( amount_to_be_paid >= totalamountpaid)
	  {
	  	cout<<"     ** KOFSMARK  **   "<<endl;
	        cout<<""<<endl;
	        cout<<""<<endl;
	        
	        cout<<" Name of customer:" <<customer_name <<endl;
	          cout<<""<<endl;
	          cout<<" Unique ID : "<<unique_id <<endl;
	          cout<<""<<endl;
	          cout<<" Item bought :"<< item_you_want_to_purchase <<endl;
	          cout<<""<<endl;
	        cout<<" Quantity bought : " << quantity << endl;
	          cout<<""<<endl;
	         cout<<" Vat amount: " << vat_amount << endl;
	          cout<<""<<endl;
	          cout<<" Total cost :"<<totalamountpaid<<endl;
	          cout<<""<<endl;
	         cout<<" Total amount paid : "<<amount_to_be_paid<<endl;
	         cout<<""<<endl;cout<<" Balance : " <<balance<<endl;
	        
	         
	    
	         
	        
	         
	    cout<<" **           THANK YOU FOR SHOPING WITH US, GOD BLESSE YOU!!!   **"<<endl;
	  }
	        
	    
	
	 
	 
 return 0;
}
     
	
