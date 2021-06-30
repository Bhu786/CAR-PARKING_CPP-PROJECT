                                     //car parking mini project//
                                     /*      
									 requirements??
									 there are 3 type of cars to be parked in parking.
									 1)rickshaw             amount=100
									 2)normals cars          amount=200
									 3)buses                amount =300
									 
									 max no of vehicles to be parked is 50
									 
									 i should able to see the records (total amount +no.of vehicle which 
									 
									 */
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second

int main(){
	       
	        int r=0;
	         int c=0;
	          int b=0;
	
	   int u_input;
	   int amount=0,count=0;
       
       while(true){//while for run again n again 
	  
       
       cout<<"press 1 for rickshaw"<<endl;
         cout<<"press 2 for car "<<endl; 
		  cout<<"press 3 for  bus"<<endl;
		    cout<<"press 4 to show the record"<<endl;
		      cout<<"press 5 for delete the record"<<endl;
            
            cin>>u_input;
            
            if(u_input==1){
            	if(count<=50)
            	{
            		r=r+1;
            	amount=amount +100;
            	count=count +1;
            }
            else
            cout<<"No parking cars ,parking is full"<<endl;
            
			}else if(u_input==2){
				if(count<=50){
			  // c=c+1;
				amount =amount+200;
				count=count+1;
				c++;
			}else
			cout<<"parking ids full";
			}else if(u_input==3){
				if(count<=50){
				b++;
				amount=amount+300;
				count=count+1;
				
				}else
				cout<<"parking full";
			}else if (u_input==4){
				cout<<"*****************************************************************"<<endl;
				cout<<"the total amount"<<amount<<endl;
				cout<<"the total number of vehicles parked ="<<count<<endl;
				 	cout<<"the total number of rickshaw parked ="<<r<<endl;
				 	cout<<"the total number of car parked ="<<c<<endl;
				 	cout<<"the total number of bus parked ="<<b<<endl;
				cout<<"******************************************************************"<<endl; 
				
			}else if(u_input==5){
				amount=0;
				count=0;
			}else{
				cout<<"invalid no";
			}

}

return 0;
}
