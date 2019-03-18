#include<iostream>
using namespace std;
#include<stdlib.h>
float b[10];float a[10];
int y=0;int r=0;
int budgetx=10000000;
int budgety=10000000;
class twop_auction
{
    private:int pricex;float rating;
    public:twop_auction(int u=0,float v=0)
            {
                pricex=u;
                rating=v;
            }
        void calculate()
        {
        int p=1;char ch1,ch2;
        int i=100000;char ch;
	cout<<"player1's turn.Press 'x' to enter auction or 'p' to pass\n\n";
		cin>>ch1;
		cout<<"\n";
	if(ch1=='x')
		goto label1;
	else if(ch1=='p')
		cout<<"player 2's turn .Press 'u' to buy or 'p' to  pass\n\n";
		cin>>ch2;
	if(ch2=='u')
		goto label2;
	else if(ch2=='p')
		cout<<"Player is unsold\n\n";
		goto label3;
        while(budgetx||budgety!=0)
        {
label1:
       	cout<<"player 1: Press 'y' to bid or '0' to quit auction\n"<<endl;
        cin>>ch;
	cout<<"\n";
        if(ch=='y')
            {
                cout<<"price of the cricketer is now"<<pricex+i<<endl;
                pricex+=100000;
            }
       else if(ch=='0')
        {
label2:
            budgety-=pricex;
	    if(budgety<0)
		{
			cout<<"Player 2 , you have bid for a player more than your budget\n\n";
			cout<<"Hence, Player 1 wins\n\n";
			exit(1);
		}
		else
		{
       	        	cout<<"Sold to player 2 at a rate of "<<pricex<<endl;
            		cout<<"budget of 2 is"<<budgety<<endl;
            		a[y]=rating;
            		cout<<a[y]<<endl;
            		y++;
            		break;
		}
        }

    	 cout<<"player 2's turn\n\n";
	 cout<<"Do you want to bid ? press 'y'to bid (or) '0' to quit\n\n";
	 cin>>ch;
	cout<<"\n";
        if(ch=='y')
 	 {
            cout<<"price of the cricketer is now"<<pricex+i<<endl;
            pricex+=100000;
	 }
	  else if(ch=='0')
     	{	
	     budgetx-=pricex;
		 if(budgetx<0)
		 {	
			cout<<"Player 1 , you have bid for a player more than your budget\n\n"; 
			cout<<"Hence, Player 2 wins\n\n";
			exit(1);
		 }
		 else 
		 {
			cout<<"Sold to player 1 at a rate of "<<pricex<<endl;
            		cout<<"budget of 1 is"<<budgetx<<endl;
            		b[r]=rating;
            		cout<<b[r]<<endl;
            		r++;
        		break;
     		 }
        } 	
		
	}//while
label3: cout<<"next player\n";
}//calculate        


        void results()
        {
            float sumx = 0.0 ;
            for (r=0; r<=6; r++)
            {
               sumx+=b[r];
            }
            cout <<"player 1's team rating is"<<sumx<<endl;

             float sumy = 0.0 ;
            for (y=0; y<=6; y++)
            {
              sumy+=a[y];
            }
            cout <<" player 2's team rating is"<<sumy<<endl;

        if(sumx>sumy)
        {
            cout<<"1 wins\n";
        }
        else if(sumy>sumx)
        {
            cout<<"2 wins\n";
        }
	
	else 
	{
		cout<<"Draw\n";
	}

       }

};

int main()
{


cout<<"\n\n\n\n";
 
cout<<" 	 ######  ########  ####  ######  ##    ## ######## ########   \n"; 

cout<<" 	##    ## ##     ##  ##  ##    ## ##   ##  ##          ##  \n";     

cout<<" 	##       ##     ##  ##  ##       ##  ##   ##          ##  \n";     

cout<<" 	##       ########   ##  ##       #####    ######      ##  \n";     

cout<<" 	##       ##   ##    ##  ##       ##  ##   ##          ##  \n";     

cout<<" 	##    ## ##    ##   ##  ##    ## ##   ##  ##          ##  \n";     

cout<<"  	 ######  ##     ## ####  ######  ##    ## ########    ##       \n";    



cout<<"\n\n\n\n";
                                                                                                                                                                                                                          
	                                                                                                                                                                             
 
cout<<"		   ###    ##     ##  ######  ######## ####  #######  ##    ## \n";
cout<<"		  ## ##   ##     ## ##    ##    ##     ##  ##     ## ###   ## \n";
cout<<"                 ##   ##  ##     ## ##          ##     ##  ##     ## ####  ## \n";
cout<<"		##     ## ##     ## ##          ##     ##  ##     ## ## ## ## \n";
cout<<"		######### ##     ## ##          ##     ##  ##     ## ##  #### \n";
cout<<"		##     ## ##     ## ##    ##    ##     ##  ##     ## ##   ### \n";
cout<<"		##     ##  #######   ######     ##    ####  #######  ##    ## \n";
	                                                                                                                                     



cout<<"\n\n\n\n";


cout<<"		##     ##  #######  ##     ##  ######  ######## \n";
cout<<"		##     ## ##     ## ##     ## ##    ## ##       \n";
cout<<"		##     ## ##     ## ##     ## ##       ##       \n";
cout<<"		######### ##     ## ##     ##  ######  ######   \n";
cout<<"		##     ## ##     ## ##     ##       ## ##       \n";
cout<<"		##     ## ##     ## ##     ## ##    ## ##       \n";
cout<<"		##     ##  #######   #######   ######  ######## \n";
                                                                                                       


cout<<"\n\n\n\n";

                                                                                                                                                                                
cout<<"   	 		      ######      ###    ##     ## ########        \n";                                                                                                            
cout<<"                              ##    ##    ## ##   ###   ### ##              \n";                                                                                                       
cout<<"                              ##         ##   ##  #### #### ##              \n";                                                                                                    
cout<<"                              ##   #### ##     ## ## ### ## ######          \n";                                                                                                        
cout<<"                              ##    ##  ######### ##     ## ##              \n";                                                                                                    
cout<<"                              ##    ##  ##     ## ##     ## ##              \n";                                                                                 
cout<<"                                ####    ##     ## ##     ## ########        \n";



sleep(5);
char take;
cout<<"Press y to continue\n";
cin>>take;
if(take=='y')

{


cout<<"\n\n\n \t\t\t\t MENU \n\n\n ";
}


lkg:

cout<<"\t";cout<<" 1.Start game\n";
cout<<"\t";cout<<" 2.Rules\n";


int ch;

cout<<"enter your choice\n";
cin>>ch;
if(ch==1)
{
	cout<<"y-yes(to bid for a player\n\n";
	cout<<"p-pass(passes the chance to bid for a player before auction\n\n";
        cout<<"0-to quit bidding(THIS LETS THE CRICKETER TO GET SOLD TO THE OTHER PLAYER\n\n";

cout<<"Player 1 's and player 2's budget is 10000000(1 crore) each\n\n";
system("clear");

cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  MS DHONI 					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:9.7			      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:2,50,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp1(250000,9.7);
tp1.calculate();
sleep(5);
system("clear");

cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  VIRAT KOHLI 					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:9.8			      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:2,80,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp2(280000,9.8);
tp2.calculate();
sleep(5);
system("clear");

cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  STEVE  SMITH   					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:9.4			      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:1,70,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp3(170000,9.4);
tp3.calculate();
sleep(5);
system("clear");


cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  CHRIS GAYLE   					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:9.56  		      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:2,00,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp4(200000,9.56); 
tp4.calculate();
sleep(5);
system("clear");



cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  AB DE VILLIERS   					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:9.8  		      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:2,75,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp5(275000,9.8);
tp5.calculate();
sleep(5);
system("clear");



cout<<"Moving on to the bowlers\n";


cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  DALE STEYN   					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:9.4  		      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:1,70,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp6(180000,9.4);
tp6.calculate();
sleep(5);
system("clear");



cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  YUSUF PATHAN   					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:7.5  		      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:1,00,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp7(100000,7.5);
tp7.calculate();
sleep(5);
system("clear");



cout<<" _____________________________________________________    \n";
cout<<"|						      |  \n";
cout<<"|  RASHID KHAN   					      |  \n";
cout<<"|						      |  \n";
cout<<"|		Rating:9.1  		      |  \n";
cout<<"|						      |  \n";
cout<<"|			                              |  \n";
cout<<"|                            Base price:1,60,000      |	 \n";	
cout<<"|					              |  \n";
cout<<"|						      |	 \n";
cout<<"|						      |  \n";
cout<<"|___________________________________________________  |  \n";
twop_auction tp8(160000,9.1);
tp8.calculate();
sleep(5);
system("clear");


tp1.results();
}

if(ch==2)
{
cout<<"rules\n";
goto lkg;
}





}






