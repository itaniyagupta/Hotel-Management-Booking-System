#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>

class menu
{
private : 
   void edit_records(void);
   void report(void);
   void roomf(void);
   void costumerf(void);
   
public:
   void overview(void);
   void main_menu(void);
   void enter_password(void);
   };
   
   class room
   {
   private:
   int recordno(int)
   void display_record(int);
   int roomno;
   char roomcode[5], status;
   float tariff;
   
   public:
   void add(void);
   void modify(void);
   void deletion(void);
   void display_room_record(int);
   void display_list(void);
   int room_found(int);
   void change_status(int, char);
   char room_status(int);
   float get_data(int);
   
   };
   
   class customer
   {
   
   private:
   int recordno(int);
   void display_record(int);
   void delete_record(int);
   int roomno;
   char name[21], phone[8];
   float advance, misc, room_srv;
   
   public:
   void add(void);
   void modify(void);
   void deletion(void);
   void display_list(void);
   void display_customer_record(int);
   };
   
   void menu :: main_menu(void)
   {
   int l;
   char ch;
   clrscr();
   gotoxy(3,2);
   cout<<"SHANGRI-LA EROS HOTEL";
   gotoxy(3,3);
   cout<<"_____________________";
   gotoxy(9,4);
   cout<<"NEW DELHI";
   gotoxy(55,2);
   cout<<"19 ASHOKA ROAD";
   gotoxy(55,3);
   cout<<"CANNAUGHT PLACE";
   gotoxy(55,3);
   cout<<"New Delhi 110001, India";
   gotoxy(55,5);
   cout<<"T:(+9111) 4119 1919";
   gotoxy(55,2);
   cout<<"19 Ashoka Road";
   gotoxy(30,11);
    cout<<"1. EDIT RECORDS";
   gotoxy(30,13); 
   cout<<"2. DISPLAY ROOM RECORDS";
   gotoxy(30,15); 
   cout<<"3. DISPLAY COSTUMER RECORDS";
   gotoxy(30,17);
   cout<<"4. EXIT TO DOS";
   gotoxy(30,23);
   
   cout<<"Enter your choice:";
   cin>>ch;
   
   if(ch == '3')
   {
   char ans;
   do
   {
   clrscr();
   cout<<"enter room of costumer to be displayed";
   cin>>l;
   costumer c;
   c.display_costumer_record(l);
   cout<<"\n do you wish to see more records(Y or N)";
   cin>>ans;
   }
   while(ans=='Y');
   main_menu();
   }
   else
   if(ch=='2')
   {
   char ans1;
   do
   {
   clrscr();
   int m;
   cout<<"enter room to be displayed";
   cin>>m;
   room r;
   r.dispaly_room_record(m);
   cout<<"\n do u wish to see more records";
   cin>>ans1;
   }
   while(ans1='Y');
   main_menu();
   }
   else
   if( ch== '1')
   edit_records();
   
   if(ch== '4')
   {
   clrscr();
   gotoxy(26,10);
   cout<<"THANK U FOR USING OUR PROJECT";
   getch();
   gotoxy(32,12);
   cout<<"HAVE A NICE DAY";
   getch();
   exit(0);
   }
   }
  void menu :: edit_records(void)
   {
   int ch;
   while(ch!=3)
   {
   clrscr();
   gotoxy(34,4);
   cout<<"EDIT";
   gotoxy(30,8);
   cout<<"1. ROOM RECORDS";
   gotoxy(30,10); 
   cout<<"2. COSTUMER RECORDS";
   gotoxy(30,12); 
   cout<<"3. BACK";
   gotoxy(30,15);
    
   cout<<"Enter your choice:";
   cin>>ch;
   getch();
   
   if(ch == 1)
   {
   roomf();
   else
   if(ch == 2)
   costumerf();
   else 
   if(ch == 3)
   main_menu();
   }
   }
   void menu :: roomf(void)
   {
   int ch;
   while(1)
   {
   clrscr();
   gotoxy(34,4);
   cout<<"EDIT ROOM";
   gotoxy(30,8);
   cout<<"1. ADD ROOM RECORDS";
   gotoxy(30,10); 
   cout<<"2. MODIFY ROOM RECORDS";
   gotoxy(30,12); 
   cout<<"2. DELETE ROOM RECORDS";
   gotoxy(30,14);
   cout<<"4. BACK";
   gotoxy(30,17);
    
   cout<<"Enter your choice:";
   cin>>ch;
   getch();
   
   if(ch == 1)
   {
   room r;
   r.add();
   }
   else
   if(ch == 2)
   {
   room r;
   r.modify();
   }
   else 
   if(ch == 3)
   {
   room r;
   r.deletion();
   }
   else
   if(ch == 4)
   {break;
   }
   }
   }
     void menu :: costumerf(void)
   {
   int ch;
   while(ch!=4)
   {
   clrscr();
   gotoxy(34,4);
   cout<<"EDIT COSTUMER";
   gotoxy(30,8);
   cout<<"1. ADD COSTUMER RECORDS";
   gotoxy(30,10); 
   cout<<"2. MODIFY COSTUMER RECORDS";
   gotoxy(30,12); 
   cout<<"2. DELETE COSTUMER RECORDS";
   gotoxy(30,14);
   cout<<"4. BACK";
   gotoxy(30,17);
    
   cout<<"Enter your choice:";
   cin>>ch;
   getch();
   
   if(ch == 1)
   {
   costumer c;
   c.add();
   }
   else
   if(ch == 2)
   {
   costumer c;
   c.modify();
   }
   else 
   if(ch == 3)
   {
   costumer c;
   c.deletion();
   }
   else
   if(ch == 4)
   {
   break;
   }
   }
   }
   
   void room::add(void)
   {
   char ch;
   char x;
   chat t_rcode[5];
   int t_roomno;
   char t_status;
   float t_tariff;
   do
   {
   fstream file;
   file.open("ROOM.DAT", ios::out|ios::app);
   clrscr();
   gotoxy(1,1);
   cout<<"Enter the details for the room";
   gotoxy(1,3);
   
   
   
   
   
   
