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
   cout<<"Code : " ;
   gotoxy(1,4);
   cout<<"Room no. :";
   gotoxy(1,5);
   cout<<"Status :";
      gotoxy(1,6);
   cout<<"Tariff :";
      gotoxy(20,11);
   cout<<"SS : SINGLE SUITE ";
      gotoxy(20,12);
   cout<<"DSS : DELUXE SUITE(single Bed)";
      gotoxy(20,13);
   cout<<"DSD :DELUXE SUITE(double Bed)";
      gotoxy(20,14);
   cout<<"PS :Presidential Suite";
     int valid=0;
      do
      {
         valid=1;
         gotoxy(1,25);
         cout<<"ENTER THE ROOM CODE (SS/DSS/DSD/PS)";
         gotoxy(13,3);
         gets(t_rcode);
         int result;
         char string[3], string1[3], string2[3], string3[3];
         strcpy(string, "SS");
          strcpy(string1, "DSS");
          strcpy(string2, "DSD");
          strcpy(string3, "PS");
      if(strcmp(t_rcode, string2)==0||strcmp(t_rcode, string3)==0)
      {
         result=0;
      }
         else
         {
            result=1;
         }
         
         if(result==1);
         {
            valid = 0;
            gotoxy(1,25);
            clerol();
            gotoxy(1,24);
            cout<<"INVALID CODE";
            gotoxy(1,25);
            cout<<"Press any key to continue.....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clerol();
            gotoxy(13,3);
            clreol();
         }
      }
      while(valid==0);
      for(int i=11; i<=14; i++)
      {
         gotoxy(1,i);
         clreol();
      }
      
      do{
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
        cout<<"ENTER THE ROOM NUMBER";
         gotoxy(13,4);
         cin>>t_roomno;
         getch();
         if(t_roomno <=0 || t_roomno>900)
         {
            valid =0; 
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"IT SHOULD NOT BE NEGATIVE OR ZERO OR GREATER THAN 900";
            gotoxy(1,25);
            cout<<"Press any key to continue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,4);
            clreol();
         }
         if(room_found(t_roomno))
         {
            vlaid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"ROOM NO. ALREADY EXIST";
            gotoxy(1,25);
            cout<<"Press any key to continue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,4);
            clreol();
         }
      }
      while(valid!=1);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE ROOM STATUS : V=Vacant, O=Occupied";
         gotoxy(13,5);
         cin>>t_status;
         t_status =  toupper(t_status);
         if(t_status!= 'O' && t_status!='V')
         {
            valid-0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"INVALID DATA ENTERED";
            gotoxy(1,25);
            cout<<"Press any key to conitnue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,5);
            clreol();
         }
      }
      while(valid!=1);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"Enter the tariff for the room";
         gotoxy(13,6);
         cin>>t_tariff;
         getch();
         if(t_tariff <=0){
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"IT SHOULD NOT BE NAGTIVE OR ZERO";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,6);
            clreol();
         }
      }
    while(valid!=1);
      gotoxy(1,8);
      cout<<"Do you want to save the record (y/n):";
      
      do
      {
         valid=1;
         gotoxy(42,8);
         cin>>ch;
         getch();
         ch=toupper(ch);
         if(ch!='Y' && ch!='N')
         {
            valid= 0;
            gotoxy(42,8);
            clerol();
         }
      }
      while(valid!=1);
      if(ch== 'Y')
      {
         strcpy(roomcode, t_rcode):
         roomno =t_roomno;
         status=t_status;
         tariff=t_tariff;
         file.wtite((char*) this, size of (room));
      }
      gotoxy(1,9);
      cout<<"Do you want to add more records(y/n):";
      do
      {
         valid=1;
         gotoxy(42,9);
         cin>>ch;
         getch();
         ch= toupper(ch);
         if(ch!= 'Y' && ch!= 'N')
         {
            valid=0;
            gotoxy(42,9);
            clreol();
         }
      }
      while(valid!=1);
      file.close();
   }
      while(ch== 'Y');
   }
     
     
     void room ::modify(void)  
       { 
        clrscr();
        int valid;
   char ch;
   chat t_rcode[5];
   int t_roomno, tr;
   char t_status;
   float t_tariff;
   
   gotoxy(1,3);
   cout<<"Enter the room to be modified";
        cin>>tr;
        getch();
        if(room_founnd(tr)!=1)
        {
         gotoxy(1,25);
   clreol();
   gotoxy(1,24);
   cout<<"Room not found ";
   gotoxy(1,25);
   cout<<"Press any key to continue...";
           getch();
           return;
        }
        display_record(tr);
      gotoxy(1,10);
   cout<<"Do you want to modify this room record(y/n):";
        do
        { valid=1;
         gotoxy(48,10);
         cin>>ch;
         getch();
         ch=toupper(ch);
         if(ch!='Y' && ch!='N')
         { valid =0;
          gotoxy(42,9);
          clreol();
         }
        }
        while(valid!=1);
        if(ch=='N')
           return;
       gotoxy(1,12);
   cout<<"Enter the new data for the room";
      gotoxy(1,14);
   cout<<"Code : ";
      gotoxy(1,15);
   cout<<"Room no. : ";
      gotoxy(1,16);
   cout<<"Status : ";
        gotoxy(1,17);
   cout<<"Tariff : ";
      do
      {
         valid=1;
         gotoxy(1,25);
         cout<<"ENTER THE ROOM CODE (SS/DSS/DSD/PS)";
         gotoxy(13,14);
         gets(t_rcode);
         int result;
         char string[3], string1[3], string2[3], string3[3];
         strcpy(string, "SS");
          strcpy(string1, "DSS");
          strcpy(string2, "DSD");
          strcpy(string3, "PS");
      if(strcmp(t_rcode, string)==0||strcmp(t_rcode, string1)==0)||strcmp(t_rcode, string2)==0)||strcmp(t_rcode, string3)==0)
      {
         result=0;
      }
         else
         {
            result=1;
         }
         
         if(result==1);
         {
            valid = 0;
            gotoxy(1,25);
            clerol();
            gotoxy(1,24);
            cout<<"INVALID CODE";
            gotoxy(1,25);
            cout<<"Press any key to continue.....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clerol();
            gotoxy(13,14);
            clreol();
         }
      }
      while(valid==0); 
      do{
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
        cout<<"ENTER THE ROOM NUMBER";
         gotoxy(13,15);
         cin>>t_roomno;
         getch();
         if(t_roomno <=0 || t_roomno>900)
         {
            valid =0; 
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"IT SHOULD NOT BE NEGATIVE OR ZERO OR GREATER THAN 900";
            gotoxy(1,25);
            cout<<"Press any key to continue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,15);
            clreol();
         }
         if(room_found(t_roomno) && t_roomno!=tr)
         {
            vlaid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"ROOM NO. ALREADY EXIST";
            gotoxy(1,25);
            cout<<"Press any key to continue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,15);
            clreol();
         }
      }
      while(valid!=1);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE ROOM STATUS : V=Vacant, O=Occupied";
         gotoxy(13,16);
         cin>>t_status;
         t_status =  toupper(t_status);
         if(t_status!= 'O' && t_status!='V')
         {
            valid-0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"INVALID DATA ENTERED";
            gotoxy(1,25);
            cout<<"Press any key to conitnue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,16);
            clreol();
         }
      }
      while(valid!=1);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"Enter the tariff for the room";
         gotoxy(13,17);
         cin>>t_tariff;
         getch();
         if(t_tariff <=0){
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"IT SHOULD NOT BE NAGTIVE OR ZERO";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(13,17);
            clreol();
         }
      }
    while(valid!=1);
      gotoxy(1,19);
      cout<<"Do you want to save the record (y/n):";
      
      do
      {
         valid=1;
         gotoxy(42,19);
         cin>>ch;
         getch();
         ch=toupper(ch);
         if(ch!='Y' && ch!='N')
         {
            valid= 0;
            gotoxy(42,19);
            clerol();
         }
      }
      while(valid!=1);
      if(ch== 'Y')
      {
         fstream file;
         file.open("ROOM.DAT", ios::in);
         fstream temp;
         temp.open("temp.dat", ios::out);
         while(!file.eof())
         {
            file.read((char*) this, sizeof(room));
            if (roomno == tr)
            {
         strcpy(roomcode, t_rcode):
         roomno =t_roomno;
         status=t_status;
         tariff=t_tariff;
         temp.wtite((char *) this, size of (room));
            }
            else
            {
               temp.wtite((char *) this, size of (room));
            }
      }
         file.close();
         temp.close();
         file.open("ROOM.DAT", ios::out);
         temp.open("temp.DAT", ios::in);
         temp.seekg(0);
         while(!temp.eof())
         {
            temp.read((char *) this, sizeof(room));
            file.write((char *)this. sizeof(room));
         }
         file.close();
         temp.close();
         remove("temp.dat");
      }
     }
     
      
   
   
   
