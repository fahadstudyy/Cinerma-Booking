#include<iostream>
#include<windows.h>
#include<fstream>
		int const gold=900,silver=500,plantinium=1020;
		int credit=1000;
	using namespace std;
	class user{
		user *pre;
		user *next;
		string pass;
		string Uname;
		int credit;	
		public:
			user(user *p,string U_name,string password,int wallet,user *n){
				pre=p;
				next=n;
				pass=password;
				Uname=U_name;
				credit=wallet;	
			}
			void set_pre(user *a){
				pre = a;
			}
			user *get_pre(){
				return pre;
			}
			void set_next(user *a){
				next = a;
			}
			user *get_next(){
				return next;
			}
			void set_pass(string a){
				pass = a;
			}
			string get_pass(){
				return pass;
			}
			void set_U_name(string a){
				Uname = a;
			}
			string get_U_name(){
				return Uname;
			}
			void set_credit(int a){
				credit = a;
			}
			int get_credit(){
				return credit;
			}
			
	};
	typedef struct node
		{
	    	char row_no;
	    	 int seat_no,pin;
	    	  char book;
			   struct node *next,*prev;
	 }node;
	class dcll
		{
			int wallat[50000];
			int credit=1000;
			//int rand();
		user *head;
		public:
		node *hn;
		
		dcll()
		{
		hn=NULL;
		head=NULL;
		}
		void create()
		{
		node *nn,*cn;
		int j=1;
		char c ='A';
		do
		{
		int i=1;
		do
		{
		nn=new node();
		nn->next=nn->prev=NULL;
		nn->row_no=c;
		nn->seat_no=i;
		nn->book='a';
		if(hn==NULL)
		{
		hn=nn;
		nn->next=nn->prev=hn;
		}
		else
		{
		cn=hn;
		while(cn->next!=hn)
 		cn=cn->next;
		cn->next=nn;
		nn->prev=cn;
		nn->next=hn;
		hn->prev=nn;
		}
		i++;
		}while(i<=7);
		j++;
		c++;
		}while(j<=10);
			}
		public:
		void display()
	{		
	system("cls");
		node *cn;
		cn=hn;
		cout<<"\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t------------------------------------------------------------------\n";
		cout<<"\t\t\t\t\t\t|                            Platinum                            |\n";
		while(cn->next!=hn)
		{
		if((cn->prev)->row_no!=cn->row_no)
		cout<<"\t\t\t\t\t\t| ";
		cout<<cn->row_no;
		cout<<cn->seat_no;
		if(cn->book=='a')
		cout << " -> a  "; 
		else
		cout << " -> b  "; 
		if((cn->next)->row_no!=cn->row_no)
		cout<<"|\n";
		if(cn->row_no=='C'&&cn->seat_no==7)
		{
		cout<<"\t\t\t\t\t\t------------------------------------------------------------------\n";
		cout<<"\t\t\t\t\t\t|                             gold                               |\n";
			}
		if(cn->row_no=='H'&&cn->seat_no==7)
		{
		cout<<"\t\t\t\t\t\t------------------------------------------------------------------\n";
		cout<<"\t\t\t\t\t\t|                            Silver                              |\n";
			}
		cn=cn->next;
		}
		cout<<cn->row_no;
		cout<<cn->seat_no;
		if(cn->book=='a')
		cout << " -> a  ";
		else
		cout << " -> b  "; 
		cout<<"|\n";
		cout<<"\t\t\t\t\t\t------------------------------------------------------------------\n\n";
		cout<<"\t\t\t\t\t\tPLATINUM-> 1020 RS           GOLD-> 900 RS             SILVER->500 RS\n";
			system("pause");
			}	
			
public:	void book_seat()
		{
			dcll o;
		node *cn,*temp[20];
		int n,z,flag;
		char row;
		int seat;
		char ch;
		do
		{
		z=1;
		int n;
		cout<<"\n\t\t\t\tEnter No Of Tickets u Want To Buy: ";
		cin>>n;
		cout<<"\n\t\t\t\tEnter Seat Number(s): \n";
		for(int i=1;i<=n;i++)
		{
		cout<<"\t\t\t\tNO "<<i<<" = "; 
		cin>>row>>seat;
		cn=hn;
		if(row>='A'&&row<='E')
		{
		while(cn->next!=hn)
		{
		if(cn->row_no==row && cn->seat_no==seat)
		{
		if(cn->book=='a')
		{
		cn->book='b';
		temp[z]=cn;
		z++;
		}
		else
		{
		cout<<"\n\t\t\t\tINVALID CHOISE!\n";
		cout<<cn->row_no<<cn->seat_no<<"\n\t\t\t\t Seat is alredy reserved \n";
				}
			}
		cn=cn->next;
		}
		if(cn->row_no==row && cn->seat_no==seat)
			{
		if(cn->book=='a')
		{
		cn->book='b';
		temp[z]=cn;
		z++;
			}
		else
		{
		cout<<"\n\t\t\t\tINVALID CHOISE!\n";
		cout<<cn->row_no<<cn->seat_no<<"\n\t\t\t\tSeat is alredy reserved\n";
				}
			}
		}
		else 
		{
		while(cn->prev!=hn)
			{
		if(cn->row_no==row && cn->seat_no==seat)
				{
		if(cn->book=='a')
		{
		cn->book='b';
		temp[z]=cn;
		z++;
			}
		else{
		cout<<"\n\t\t\t\tINVALID CHOISE!\n";
		cout<<cn->row_no<<cn->seat_no<<"\n\t\t\t\tSeat is alredy reserved \n";
			}
			 }
		cn=cn->prev;
		}
		if(cn->row_no==row && cn->seat_no==seat)
			{
		if(cn->book=='a')
		{
		cn->book='b';
		temp[z]=cn;
		z++;
			}
		else
		{
		cout<<"\n\t\t\t\tINVALID CHOISE!\n";
		cout<<cn->row_no<<cn->seat_no<<"\n\t\t\t\tSeat is alredy reserved\n";
					}
				}
			}
		}
	}
	while(ch==2);
		//	exit(0);
			}
void loading(){	
		system("CLS");
    	 for(int i=1;i<=50;i++)
  	    { system("CLS");
  		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   WELCOME "<<'\t'<<'\t';
	    cout<<"\n\t\n\t\n\t\n\n\n\n\n\t\t\t\t\t\t\t";
 		for(int j=1;j<=i;j++)
  		cout<<"²";
	    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t    "<<2*i<<"%";
		 }
		   }	
		   
void homepage(user *a){
	WC:
	system("cls");
	int log;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t                            \n"; 
		cout<<"\t\t\t\t\t\t\t\t    ___________SIGN-IN__________\n";
		cout<<"\t\t\t\t\t\t\t\t   |                            |\n";
		cout<<"\t\t\t\t\t\t\t\t   |   1) Public User           |\n";
		cout<<"\t\t\t\t\t\t\t\t   |                            |\n";
		cout<<"\t\t\t\t\t\t\t\t   |   			        |\n";
		cout<<"\t\t\t\t\t\t\t\t   |   2) Membership user       |\n";
		cout<<"\t\t\t\t\t\t\t\t   |    		   	|\n";
		cout<<"\t\t\t\t\t\t\t\t   |                            |\n"; 
		cout<<"\t\t\t\t\t\t\t\t   |   3) Admin         	|\n"; 	
		cout<<"\t\t\t\t\t\t\t\t   |                            |\n";
		cout<<"\t\t\t\t\t\t\t\t   |                            |\n";	
		cout<<"\t\t\t\t\t\t\t\t   |   4) Save data             |\n";
		cout<<"\t\t\t\t\t\t\t\t   |                            |\n";
		cout<<"\t\t\t\t\t\t\t\t   |                            |\n";
		cout<<"\t\t\t\t\t\t\t\t   |   5) Quit                  |\n";	
		cout<<"\t\t\t\t\t\t\t\t   |____________________________|\n";
		cout<<"\t\t\t\t\t\t\t\t    Enter: ";cin>>log;
		if(log==4){	
		save_data(a);				
		}
		else if(log==5){
			cout<<"\n\n\n\n\n";
			exitt();
		}
		else if(log==1){	
		system("cls");
		p_user();   
		}
		else if(log==3){
			system("cls");
			adminS(a);
		}
		else if(log==2){
			system("cls");
			M_user_login(a);
		}
		else {
			cout<<"\n\t\t\t\t\t\t\t\t        !!! Wrong Input !!!\n\n";
			system("pause");
			goto WC;
		}
}
void M_user_login(user *a){ 
		Wronguser:
			int UC;
			char doo;
			string UN;
    		string pass;
			ifstream xFile;
			xFile.open("MA.dat");
			system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t\t    Member Log-in                          \n\n"; 
		cout<<"\t\t\t\t\t\t\t\t  	Enter Username: ";cin>>UN;
		cout<<"\n\t\t\t\t\t\t\t\t	Enter Password: ";cin>>pass;
		if(head==NULL){
			Beep(523,500);
			cout<<"\n\t\t\t\t\t\t\tNo such Account Created Yet\n\n";
			cout<<"\n\t\t\t\t\t\t\t\t Do You Want to Continue(y/n)";
						cout<<"\n\t\t\t\t\t\t\t\t";cin>>doo;
						if(doo=='y')
						{
							system("cls");
							goto Wronguser;
						}
						else{
							homepage(a);
							
						}
		}
		else{
			user *a=head;
			while(a!=NULL){
				if(UN==a->get_U_name()){
					if(pass==a->get_pass()){
						M_user_area(a);
					}
					else{
						cout<<"\n\t\t\t\t\t\t\t\tUser Name and Password Not Match\n\n";
						cout<<"\n\t\t\t\t\t\t\t\t Do You Want to Continue(y/n)";
						cout<<"\n\t\t\t\t\t\t\t\t";cin>>doo;
						if(doo=='y')
						{
							system("cls");
							goto Wronguser;
						}
						else{
							homepage(a);
						}
							
					}
				}
				a=a->get_next();
			}
			
			cout<<"\n\t\t\t\t\t\t\t\tUser Name and Password Not Match";
			system("pause");
			cout<<"\n\t\t\t\t\t\t\t\t Do You Want to Continue(y/n)";
						cout<<"\n\t\t\t\t\t\t\t\t";cin>>doo;
						if(doo=='y')
						{
							system("cls");
							goto Wronguser;
						}
						else{
							homepage(a);
							
						}
						system("pause");
						goto Wronguser;	
		}
		xFile.close();
	}
	void remove_account(user *a)
{
	system("cls");
		cout<<"\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t Remove User Account\n\n";
		if(head==NULL){
			cout<<"\t\t\t\t\t\t\t\t No Account created Yet\n\n\n\n\n\n\n";
		}
		else{
			user *s = head;
			cout<<"\t\t\t\t\t\t\t\t Enter User name to remove account ";
			string r;
			cin>>r;
			bool check=true;
			while(s!=NULL && check){
				if(r==s->get_U_name()){
					if(s->get_pre()==NULL){
						user *temp=s;
						head=s->get_next();
						delete temp;
						check=false;
					}
					else if(s->get_next()==NULL){
						user *tem=s;
						user *temp=s->get_pre();
						temp->set_next(NULL);
						delete tem;
						check=false;
					}
					else{									
						user *temp=s;
						user *p=s->get_pre();
						user *n=s->get_next();
						p->set_next(n);
						n->set_pre(p);
						delete temp;
						check=false;
					}
				}
				else{
					s=s->get_next();
				}	
			}
			if(!check){
				cout<<"\n\t\t\t\t\t\t\t\t Delete Successfully";
			}
			else{
				cout<<"\n\t\t| Not Found";
			}
			cout<<"\n\t\t| ";
			system("pause");
			system("cls");
			admin(a);
		}
	
	}	
	

void M_user_area(user *a){
WM:
int UC,b,ch;	
	system("CLS");
        
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t Welcome "<<a->get_U_name(); 
		cout<<"\t\t\t\t\t\t                            \n"; 
		cout<<"\t\t\t\t\t\t\t\t ___________Member___________\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Wallet                |\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   			     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Book movie            |\n";
		cout<<"\t\t\t\t\t\t\t\t|    		   	     |\n";
		cout<<"\t\t\t\t\t\t\t\t|    		   	     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Sign-out              |\n";
		cout<<"\t\t\t\t\t\t\t\t|____________________________|\n";
        cout<<"\t\t\t\t\t\t\t\t Enter: ";cin>>UC;
        if(UC==1){
        system("cls");
		wallet(a);	
		}
		else if(UC==3){
			system("cls");
			homepage(a);
		}
        else if(UC==2){
        system("CLS");
		int MC,cc;
		cout<<"Welcome ";
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t  MOVIES                          \n"; 
		cout<<"\t\t\t\t\t\t\t\t _____________________________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Cinepax 			      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Cinestar IMAX		      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Cinegold 		      |\n";
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";
		cout<<"\t\t\t\t\t\t\t\t Enter Cinema: ";cin>>cc;
		if(cc==1){
			system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t         Welcome To CINEPAX                           \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Movies________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Avengers: Infinity War         |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Antman And The Wasp            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Deadpool 2	              |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) Venom                          |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) Captain Marvel                 |\n";   
		cout<<"\t\t\t\t\t\t\t\t|                      		      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";

			cout<<"\t\t\t\t\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>MC;
		if(MC==1||MC==2||MC==3||MC==4||MC==5){
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t  Timing                          \n"; 
		cout<<"\t\t\t\t\t\t\t\t _____________________________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) 8:00 AM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) 1:00 PM		       	      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) 2:50 PM			      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) 6:00 PM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) 9:00 PM		              |\n";   
		cout<<"\t\t\t\t\t\t\t\t|   6) 1:00 AM           	      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";
			
					cout<<"\t\t\t\t\t\t\t\t Please select the timings: ";
					cin>>b;
					system("CLS");
					switch(b)
					{
					case 1:	
					create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
							break;
							case 2:	
					create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 3:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 4:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 5:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 6:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
				}
						}
					}
	else if(cc==2){
		system("CLS");
		cout<<"\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t       Weclome To Cinestar IMAX                          \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Movies________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Avengers: Infinity War         |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Antman And The Wasp            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Deadpool 2	              |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) Venom                          |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) Captain Marvel                 |\n";   
		cout<<"\t\t\t\t\t\t\t\t|                      		      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";

			cout<<"\t\t\t\t\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>MC;
		if(MC==1||MC==2||MC==3||MC==4||MC==5){
			system("CLS");
			cout<<"\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t  Timing                          \n"; 
		cout<<"\t\t\t\t\t\t\t\t _____________________________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) 8:00 AM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) 1:00 PM		       	      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) 2:50 PM			      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) 6:00 PM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) 9:00 PM		              |\n";   
		cout<<"\t\t\t\t\t\t\t\t|   6) 1:00 AM           	      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";
			
					cout<<"\t\t\t\t Please select the timings: ";
					cin>>b;
					system("CLS");
					switch(b)
						{
							case 1:	
					create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
							break;
							case 2:	
					create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 3:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 4:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 5:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 6:	
							create();
					display();
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
				}
						}
					}
	 else if(cc==3)
	 {
	 	wrongM:
		system("CLS");
		cout<<"\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t          Welcome To CineGold                           \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________MOVIES________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Avengers: Infinity War         |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Antman And The Wasp            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Deadpool 2	              |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) Venom                          |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) Captain Marvel                 |\n";   
		cout<<"\t\t\t\t\t\t\t\t|                      		      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";
		cout<<"\t\t\t\t\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>MC;
		if(MC==1 || MC==2 || MC==3 || MC==4 || MC==5){
			system("CLS");
		 cout<<"\n\n\n\n\n";
		 cout<<"\t\t\t\t\t\t\t\t  Timing                          \n"; 
		 cout<<"\t\t\t\t\t\t\t\t _____________________________________\n";
		 cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		 cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		 cout<<"\t\t\t\t\t\t\t\t|   1) 8:00 AM                        |\n";
		 cout<<"\t\t\t\t\t\t\t\t|   2) 1:00 PM		       	      |\n";
		 cout<<"\t\t\t\t\t\t\t\t|   3) 2:50 PM			      |\n";
		 cout<<"\t\t\t\t\t\t\t\t|   4) 6:00 PM                        |\n";
		 cout<<"\t\t\t\t\t\t\t\t|   5) 9:00 PM		              |\n";   
		 cout<<"\t\t\t\t\t\t\t\t|   6) 1:00 AM           	      |\n"; 
	  	 cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";	
					cout<<"\t\t\t\t\t\t\t\t Please select the timings: ";
					cin>>b;
					system("CLS");
					
					switch(b)
						{
							case 1:	
					create();
					display();
					cout<<"\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
							break;
							case 2:	
					create();
					display();
					cout<<"\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 3:	
							create();
					display();
					cout<<"\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 4:	
							create();
					display();
					cout<<"\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 5:	
							create();
					display();
					cout<<"\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
			
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
							case 6:	
							create();
					display();
					cout<<"\n\n\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
								break;
				}
						}	
		else if(MC==5){
				system("CLS");
			cout<<"\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t                                   \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Timing________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) 2:00 PM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) 5:00 PM	                  |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) 6:50 PM	                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) 10:00 PM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) 1:00 AM		               |\n";   
		cout<<"\t\t\t\t\t\t\t\t|   6) 2:00 AM                       |\n"; 
		cout<<"\t\t\t\t\t\t\t\t _____________________________________|\n";
					cout<<"\t\t\t\t\t\t\t\t Please select the timings: ";
					cin>>b;
					system("CLS");
					switch(b)
					{
					case 1:								
					create();
					display();
					cout<<"";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					switch(ch)
					{
					case 1:
					book_seat();
					display();
					break;
					}
					break;
					case 2:	
					create();
					display();
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 2-> CANCLE TICKETS\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 3-> EXIT\n";
		cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
		book_seat();
		display();
		break;
		}	
		break;
		case 3:	create();
		display();
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 3-> EXIT\n";
		cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
		book_seat();
		display();
		break;
		}
		break;
		case 4:	
		create();
		display();
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 3-> EXIT\n";
		cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
		book_seat();
		display();
		break;
		}
		break;
		case 5:	
		create();
		display();
		cout<<"\n\n\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 3-> EXIT\n";
		cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
		book_seat();
		display();
		break;
		}
		break;
		case 6:	
		create();
		display();
		cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
		cout<<"\t\t\t\t\t\t\t\tPRESS 3-> EXIT\n";
		cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
		book_seat();
		display();
		cout<<"\t\t\t\t|         |\n";
		cout<<"\t\t\t\t|         |\n";
		break;
		}
		break;			
		}	
 			}
		else{
			goto wrongM;
		}		    			
	
}	
}
	else {
			cout<<"\n\t\t\t\t\t\t\t\t !!! Wrong Input !!!\n\n";
			system("pause");
			goto WM;
		}
}
void create_wallet(user *a)
		{
		system("cls");
		int cardid,credit=1000;;
		string name,cno,address,emailid;
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\tWelcome to register for Wallet facility in our cinemas \n\n";
		cout<<" \t\t\t\t\t\t\t\t Enter your name: ";
		cin>>name;
		cout<<"\n\t\t\t\t\t\t\t\t Enter your mobile number: ";
		cin>>cno;
		cout<<"\n\t\t\t\t\t\t\t\t Enter the address: ";
		cin>>address;
		cout<<"\n\t\t\t\t\t\t\t\t Enter the mail id: ";
		cin>>emailid;
		system("CLS");
		int ID;
		ID = rand()  + 3316831;
		if (ID<0)
		ID=(ID*-1);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\n\t\t\t\t\t\t\t\tYour new card number is :" <<ID;
		fstream fout;
		fout.open("card.dat", ios::out|ios::app);
		fout<<"\nName :"<<name<<"\n"<<"\n Mobile No. :"<<cno<<"\n"<<"\n Address :"<<address<<"\n"<<"\n Mail ID :"<<emailid<<"\n"<<"\nCard Number:"<<ID<<"\n"<<"\n Account Balance"<<credit<<"\n ______________________________________________________";
		fout.close();
		cout<<"\n\t\t\t\t\t\t\t\tThank you for the registeration for the card. \n";
		system("pause");
		wallet(a);
		}
		void my_wallet(user *a){
			re:
			int WC;
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<" \t\t\t\t\t\t Account Holder: "<<a->get_U_name()<<"\n";
		cout<<"\t\t\t\t\t\t\t\t _______________Wallet________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Check Credit                   |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Back	                      |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t| ____________________________________|\n";
		cout<<"\t\t\t\t\t\t\t\tEnter: ";cin>>WC;
		if(WC==1){
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<" \t\t\t\t\t\t Account Holder: "<<a->get_U_name()<<"\n";
		cout<<"\t\t\t\t\t\t\t\t Your Current Balance is: "<<credit<<"\n\n\n\n\n\n\n\n\n\n";
		system("pause");
		goto re;
		}
		else if(WC==2){
			wallet(a);
			
		}
		else{
			cout<<"Wrong Input";
			system("pause");
			goto re;
		}
		}
void wallet(user *a){
	int wt;
	 	system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t                            \n";
		cout<<" \t\t\t\t\t Account Holder "<<a->get_U_name()<<"\n"; 
		cout<<"\t\t\t\t\t\t\t\t ___________Wallet___________\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Create Wallet         |\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   			     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) My Wallet             |\n";
		cout<<"\t\t\t\t\t\t\t\t|    		   	     |\n";
		cout<<"\t\t\t\t\t\t\t\t|    		   	     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Back                  |\n";
        cout<<"\t\t\t\t\t\t\t\t|____________________________|\n";
		cout<<"\t\t\t\t\t\t\t\tEnter: ";cin>>wt;
		if(wt==1){
			create_wallet(a);
		}
		else if(wt==2){
			my_wallet(a);
		}
		else if(wt==3){
			M_user_area(a);
		}
}


void p_user(){
	
		wrongM:
			dcll o;
			string name,cno;
			int cc,b,ch;
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t  ENTER YOU NAME: ";cin>>name;
		system("CLS");
		int MC;
		cout<<"Welcome "<<name;
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t                MOVIES                          \n"; 
		cout<<"\t\t\t\t\t\t\t\t _____________________________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Cinepax 			      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Cinestar IMAX		      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Cinegold 		      |\n";
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";
		cout<<"\t\t\t\t\t\t\t\t Enter Cinema: ";cin>>cc;
		if(cc==1){
			system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t         Welcome To CINEPAX                           \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Movies________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Avengers: Infinity War         |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Antman And The Wasp            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Deadpool 2	              |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) Venom                          |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) Captain Marvel                 |\n";   
		cout<<"\t\t\t\t\t\t\t\t|                      		      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";

			cout<<"\t\t\t\t\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>MC;
		if(MC==1||MC==2||MC==3||MC==4||MC==4){
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t                                        \n"; 
		cout<<"\t\t\t\t\t\t\t\t ______________Timing ________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) 8:00 AM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) 1:00 PM		       	      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) 2:50 PM			      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) 6:00 PM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) 9:00 PM		              |\n";   
		cout<<"\t\t\t\t\t\t\t\t|   6) 1:00 AM           	      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t _____________________________________|\n";
			
					cout<<"\t\t\t\t\t\t\t\t Please select the timings: ";
					cin>>b;
					system("CLS");
					create();
					display();
					cout<<"\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					if(ch==1)
					{
					book_seat();
					display();
				}
					else if(ch==2){
						exitt();
					}
					system("CLS");
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Enter Details";
					cout<<"\n\n\n\t\t\t\t\t\t\t\t Enter your name Again: ";
					cin>>name;
					cout<<"\n\t\t\t\t\t\t\t\t Enter your contact number: ";
					cin>>cno;
					system("CLS");
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\t\t\t\t\t\t\t\t Your ticket is here: \n";
					cout<<"\n\t\t\t\t\t\t\t\t Name 		:"<<name;
					cout<<"\n\t\t\t\t\t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\t\t\t\t\t Total Bill:";
					cout<<"\n\t\t\t\t\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"8:00 AM";
								break;
							case 2:	cout<<"1:00 PM";
								break;
							case 3:	cout<<"2:50 PM";
								break;
							case 4:	cout<<"6:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
					}
						}
					}
	  else if(cc==2){
		system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t         Welcome To CINEPAX                           \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Movies________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Avengers: Infinity War         |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Antman And The Wasp            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Deadpool 2	              |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) Venom                          |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) Captain Marvel                 |\n";   
		cout<<"\t\t\t\t\t\t\t\t|                      		      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";

			cout<<"\t\t\t\t\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>MC;
		if(MC==1||MC==2||MC==3||MC==4||MC==5){
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t                         \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Timing________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) 8:00 AM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) 1:00 PM		       	      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) 2:50 PM			      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) 6:00 PM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) 9:00 PM		              |\n";   
		cout<<"\t\t\t\t\t\t\t\t|   6) 1:00 AM           	      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";
			
					cout<<"\t\t\t\t\t\t\t\t Please select the timings: ";
					cin>>b;
					system("CLS");
					create();
					display();
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					if(ch==1)
					{
					book_seat();
					display();
				}
					else if(ch==2){
						exitt();
					}
					system("CLS");
					cout<<"\n\n\t\t\t\t\t\t\t\t Enter Details";
					cout<<"\n\n\n\t\t\t\t\t\t\t\t Enter your name: ";
					cin>>name;
					cout<<"\n\t\t\t\t\t\t\t\t Enter your contact number: ";
					cin>>cno;
					//pay(x);
					system("CLS");
					cout<<"\n\n\n\t\t\t\t\t\t\t\t Your ticket is here: ";
					cout<<"\t\t\t\t\t\t\t\t Name 		:"<<name;
					cout<<"\n\t\t\t\t\t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\t\t\t\t\t Total Bill:";
					cout<<"\n\t\t\t\t\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"8:00 AM";
								break;
							case 2:	cout<<"1:00 PM";
								break;
							case 3:	cout<<"2:50 PM";
								break;
							case 4:	cout<<"6:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
					}
						}
					}
				
	else if(cc==3)
	{
		system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t         Welcome To CINEPAX                           \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Movies________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Avengers: Infinity War         |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Antman And The Wasp            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Deadpool 2	              |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) Venom                          |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) Captain Marvel                 |\n";   
		cout<<"\t\t\t\t\t\t\t\t|                      		      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";

			cout<<"\t\t\t\t\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>MC;
		if(MC==1||MC==2||MC==3||MC==4||MC==5){
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t                           \n"; 
		cout<<"\t\t\t\t\t\t\t\t _______________Timing________________\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|                                     |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) 8:00 AM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) 1:00 PM		       	      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) 2:50 PM			      |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) 6:00 PM                        |\n";
		cout<<"\t\t\t\t\t\t\t\t|   5) 9:00 PM		              |\n";   
		cout<<"\t\t\t\t\t\t\t\t|   6) 1:00 AM           	      |\n"; 
		cout<<"\t\t\t\t\t\t\t\t|_____________________________________|\n";
			
					cout<<"\t\t\t\t Please select the timings: ";
					cin>>b;
					system("CLS");
					create();
					display();
					cout<<"\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 1-> BOOK TICKETS\n";
					cout<<"\t\t\t\t\t\t\t\tPRESS 2-> EXIT\n";
					cout<<"\n\t\t\t\t\t\t\t\tEnter: ";
					cin>>ch;
					if(ch==1)
					{
					book_seat();
					display();
				}
					else if(ch==2){
						exitt();
					}
					system("CLS");
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Enter Details";
					cout<<"\n\n\n\t\t\t\t Enter your name: ";
					cin>>name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>cno;
					system("CLS");
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout<<"\n\n\n\t\t\t\t Your ticket is here:  \n";
					cout<<"\n\t\t\t\t Name 		:"<<name;
					cout<<"\n\
					t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\t Total Bill:";
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"8:00 AM";
								break;
							case 2:	cout<<"1:00 PM";
								break;
							case 3:	cout<<"2:50 PM";
								break;
							case 4:	cout<<"6:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
					}
						}
					}
		else{
			goto wrongM;
		}	
	}	
void adminS(user *a){
		WA:
		string U,P;
		system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	
		cout<<"\t\t\t\t\t\t\t\t\t\t Admin Login\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t\t Enter ID: "; cin>>U;
		cout<<"\n\t\t\t\t\t\t\t\t\t Enter Password: "; cin>>P;
		if(U=="abc1122" && P=="1122")
		{
		system("cls");
		admin(a);	
		}
		else{
			cout<<"\n\n\t\t\t\t\t\t\t\t\t!!! Wrong Username/Password \n\n\n\n\n\n";
			system("pause");
			goto WA;
		}
	}	
void admin(user *a){
		system("CLS");
		int AC;
		re:	
		system("CLS");
		cout<<"Welcome ""Admin""";
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	
		cout<<"\t\t\t\t\t\t\t\t ________Admin Pannel________\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   1) Create Account        |\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   2) Remove  	             |\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   3) Add Credit            |\n";
		cout<<"\t\t\t\t\t\t\t\t|                            |\n";
		cout<<"\t\t\t\t\t\t\t\t|   4) Log-Out               |\n";
		cout<<"\t\t\t\t\t\t\t\t|____________________________|\n";
	    cout<<"\t\t\t\t\t\t\t\t Enter: ";cin>>AC;
		if(AC==2){
			
			system("cls");
			remove_account(a);
			
			
		}
		else if(AC==1)
		{
		system("CLS");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		string UN,pass;
    	ifstream cFile;
    	cFile.open("MA.dat", std::fstream::out | std::fstream::app);
		cout<<"\t\t\t\t\t\t\t\t";cout<<"Create Account"<<endl;
    	cout<<"\t\t\t\t\t\t\t\t";cout<<"Username: ";
    	cin>>UN;
    	cout<<"\t\t\t\t\t\t\t\t";cout<<"Password: ";
    	cin>>pass;
    	user *a=new user(NULL,UN,pass,1000,NULL);
    	if(head==NULL){
    		head=a;
    		a->set_pre(NULL);
		}
		else{
			user *b=head;
			while(b!=NULL){
				b=b->get_next();
			}
			b->set_next(a);
			a->set_next(NULL);
	}
	cFile.close();	
	system("pause");
	goto re;
	}
	else if(AC==4){
		homepage(a);
	}	
	else if(AC==3){
		int cre;
		system("CLS");
		cout<<"Welcome ""Admin""";
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	
		cout<<"\t\t\t\t\t\t\t\t How Much Credit You want to add: ";cin>>cre;
		credit=credit+cre;
		cout<<"\n\n\n\t\t\t\t\t\t\t\t Credit Has Been added Succesfully\n\n\n";
		system("pause");
		goto re;
		
	}
	else{
		Beep(523,500);
		cout<<"\t\t\t\t\t\t\t\t            !!Wrong Input!!\n\n\n";
		goto re;
	}
	}
	void save_data(user *a){
		ofstream cFile;
		cFile.open("MA.dat", ios :: app);
		if(head!=NULL){
			user *a=head;
			while(a!=NULL){
				cFile<<endl;
				cFile<<a->get_pass();
				cFile<<endl;
				cFile<<a->get_U_name();
				cFile<<endl;
				a=a->get_next();
			}
			cFile.close();
		}
		cout<<"\n\t\t\t\t\t\t\t\t Data Has Been Saved Sucessfully!! \n\n";
		cout<<"\n\t\t\t\t\t\t\t\t Press Any Key To Continue...!! \n\n\n";
		system("pause");
		homepage(a);
		
	}
	void exitt(){
		exit(0);
	}
		};
		
		int main(user *a){
			 system("color F9");
			  dcll b;
			  int log;
			 b.loading();
			 system("CLS");
			 b.homepage(a);
			
	}
