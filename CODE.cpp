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
     
     
     void room ::deletion(void)  
       { 
        clrscr();
        int valid;
   char ch;
   chat t_rcode[5];
   int t_roomno;  
   gotoxy(1,3);
   cout<<"Enter the room to be deleted";
        cin>>t_roomno;
        if(!room_founnd(t_roomno))
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
        display_record(t_roomno);
      gotoxy(1,10);
   cout<<"Do you want to delete this room record(y/n):";
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
        fstream file;
         file.open("ROOM.DAT", ios::in);
         fstream temp;
         temp.open("temp.dat", ios::out);
         while(!file.eof())
         {
            file.read((char*) this, sizeof(room));
            if (roomno == t_roomno)
            {
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
     
     
     int room :: room_found( int t_roomno)
     {
        fstream file;
         file.open("ROOM.DAT", ios::in);
         file.seekg(0);
         int found = 0;
     while(file.read((char*) this, sizeof(room)))
     {
        if(roomno== t_roomno)
           found = 1;
     }
     file.close();
     return found;
  }
      void room :: display_record( int t_roomno)
     {
        fstream file;
         file.open("ROOM.DAT", ios::in);
         file.seekg(0);
         int found = 0;
     while(file.read((char*) this, sizeof(room)) && !found)
     {
        if(t_roomno== roomno)
        {
           found = 1;
           gotoxy(1,5);
   cout<<"Room Code : "<< roomcode;
      gotoxy(1,6);
   cout<<"Room no. : "<<roomno;
      gotoxy(1,7);
   cout<<"Status : "<<status;
        gotoxy(1,8);
   cout<<"Tariff : "<<Tariff;
     }
     }
     file.close();
  }

     
     void room :: display_room_record( int t_roomno)
     {
        fstream file;
         file.open("ROOM.DAT", ios::in);
         file.seekg(0);
         int found = 0;
     while(file.read((char*) this, sizeof(room)) && !found)
     {
        if(t_roomno== roomno)
        {
           found = 1;
           gotoxy(1,5);
   cout<<"Room Code : "<< roomcode;
      gotoxy(1,6);
   cout<<"Room no. : "<<roomno;
      gotoxy(1,7);
   cout<<"Status : "<<status;
        gotoxy(1,8);
   cout<<"Tariff : "<<Tariff;
     }
     }
     file.close();
  }


     
      void costumer :: add(void)
   {
  room r;
   menu m1;
   char ch;
   int valid = 1;
   int t_roomno, t_no_cust;
   char t_name[21], t_address[35], t_phone[8], t_nation[16], t_passport[30];
   float t_advance, t_misc, t_room_srv;
   clrscr();
   gotoxy(1,1);
   cout<<"Enter the details of the costumer";
   gotoxy(1,3);
   cout<<"Room no. :";
   gotoxy(1,4);
   cout<<"Name : " ;
   gotoxy(1,5);
   cout<<"No. of guests :";
      gotoxy(1,6);
   cout<<"Address :";
         gotoxy(1,7);
   cout<<"Phone :";
   gotoxy(1,8);
   cout<<"Nationality : " ;
   gotoxy(1,9);
   cout<<"Passport Number :";
      gotoxy(1,11);
   cout<<"Advance :";
         gotoxy(1,12);
   cout<<"Miscellaneous:";
   gotoxy(1,13);
   cout<<"Room service : " ;
   char t_status;
         do
         {
            valid =1;
          gotoxy(20,3);
            cin>> t_roomno;
         t_status = r.room_status(t_roomno);
         if(!r.room_found(t_roomno) || t_status == 'O')
         {
            valid =0; 
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"ROOM NO. NOT FOUND OR NOT VACANT";
            gotoxy(1,25);
            cout<<"Press any key to continue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,3);
            clreol();
         }
         }
      while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE NAME OF THE COSTUMER";
         gotoxy(20,4);
         gets(t_name);
         if((strlen(t_name)<= 0) || (strlen(t_name)>20))
         {
            valid-0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"LENGTH SHOULD NOT BE ZERO OR GREATER THAN 20";
            gotoxy(1,25);
            cout<<"Press any key to conitnue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,4);
            clreol();
         }
      }
      while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE NO. OF GUESTS WITH THE COSTUMER";
         gotoxy(20,5);
         cin>>t_no_cust;
         if((t_no_cust <0)||(t_no_cust > 4))
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"GUEST SHOULD NOT BE LESS THAN  ZERO OR GREATER THAN 4";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,5);
            clreol();
         }
      }
          while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE ADDRESS OF THE COSTUMER";
         gotoxy(20,6);
         gets(t_address);
         
         if((strlen(t_address) <=0)||(strlen(t_address) > 50))
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"LENGTH SHOULD NOT BE  ZERO OR GREATER THAN 50";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,6);
            clreol();
         }
      }
          while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE PHONE NO. OF  THE COSTUMER";
         gotoxy(20,7);
         cin>>t_phone;
         if((strlen(t_phone) < 8) ||(strlen(t_phone) > 1) || (strlen(t_phone) > 8)))
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"LENGTH SHOULD NOT BE LESS THAN 8 OR GREATER THAN 8";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,7);
            clreol();
         }
      }
          while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE NATIONALITY OF  THE COSTUMER";
         gotoxy(20,8);
         gets(t_nation);
         if((strlen(t_nation) < = 0) ||(strlen(t_nation) > 15))
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"LENGTH SHOULD NOT BE LESS THAN 0 OR GREATER THAN 15";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,8);
            clreol();
         }
      }
          while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE PASSPORT NO. OF  THE COSTUMER";
         gotoxy(20,9);
        gets(t_passport);
         if((strlen(t_passport) <= 0) ||(strlen(t_passport) > 15))
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"LENGTH SHOULD NOT BE LESS THAN 0 OR GREATER THAN 15";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,9);
            clreol();
         }
      }
       while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE ADVANCE IN RS.";
         gotoxy(20,11);
         cin>>t_advance;
         if(t_advance<0)
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<" SHOULD NOT BE LESS THAN 0";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,11);
            clreol();
         }
      }
         while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE MISCELLANEOUS CHARGES";
         gotoxy(20,12);
         cin>>t_misc;
         if(t_misc <0 )
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<" SHOULD NOT BE LESS THAN 0";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,12);
            clreol();
         }
      } 
         while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE ROOM SERVICE CHARGE";
         gotoxy(20,13);
         cin>>t_room_srv;
         getch();
         if(t_room_srv < 0)
         {
            valid=0;
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<" SHOULD NOT  LESS THAN 0";
            gotoxy(1,25);
            cout<<"press any key to conitnue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,13);
            clreol();
         }
      }
         
     while(!valid);
      gotoxy(1,15);
      cout<<"Do you want to save the record (y/n):";
      do
      {
         valid=1;
         gotoxy(42,15);
         cin>>ch;
         getch();
         ch=toupper(ch);
         if(ch!='Y' && ch!='N')
         {
            valid= 0;
            gotoxy(42,15);
            clerol();
         }
      }
      while(!valid);
      if(ch== 'Y')
      {
         r.change_status(t_roomno, 'O');
         fstream file;
         file.open("COSTUMER.DAT", ios::out| ios::app);
          roomno =t_roomno;
         strcpy(name, t_name);
          strcpy(phone, t_phone);
        advance=t_advance;
         misc=t_misc;
         room_srv=t_room_srv;
         file.wtite((char*) this, sizeof (costumer));
         file.close();
      }
         m1.main_menu();
      }

     
     
     
     
     void costumer ::modify(void)  
       { 
        clrscr();
        room r;
        int valid;
   char ch;
   int t_roomno, tr;
        char t_name[21], t_phone[8];
   float t_advance, t_misc, t_room_srv;
   fstream  file;
        file.open("COSTUMER.DAT", ios :: ate);
        
   gotoxy(1,3);
   cout<<"Enter the room no of the costumer to be modified";
        cin>>tr;
        getch();
        char t_status;
        t_status = r.room_status(tr);
        if(!r.room_found(tr)||t_status== 'V')
        {
         gotoxy(1,25);
   clreol();
   gotoxy(1,24);
   cout<<"Room not found or vacant ";
   gotoxy(1,25);
   cout<<"Press any key to continue...";
           getch();
           return;
        }
        display_record(tr);
      gotoxy(1,12);
   cout<<"Do you want to modify this room record(y/n):";
        do
        { valid=1;
         gotoxy(48,12);
         cin>>ch;
         getch();
         ch=toupper(ch);
         if(ch!='Y' && ch!='N')
         { valid =0;
          gotoxy(42,12);
          clreol();
         }
        }
        
        while(!valid);
        if(ch=='N')
           return;
       gotoxy(1,14);
   cout<<"Enter the new data for the costumer";
      gotoxy(1,16);
   cout<<"Room no. : ";
      gotoxy(1,17);
   cout<<"Name : ";
        gotoxy(1,18);
   cout<<"Phone : ";
        gotoxy(1,19);
   cout<<"Advance : ";
        gotoxy(1,20);
   cout<<"Miscellaneous : ";
        gotoxy(1,21);
   cout<<"Room Service : ";
      do{
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
        cout<<"ENTER THE ROOM NUMBER for the costumer";
         gotoxy(20,16);
         cin>>t_roomno;
         getch();
         t_status = r.room_status(t_roomno);
         
         if((!r.room_found(t_roomno)) || (r.room_found(t_roomno) && t_roomno!=tr && t_status == 'O'))
         {
            valid =0; 
            gotoxy(1,25);
            clreol();
            gotoxy(1,24);
            cout<<"ROOM NO NOT EXIST OR NOT VACANT";
            gotoxy(1,25);
            cout<<"Press any key to continue...";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,16);
            clreol();
         }
      }
      while(!valid);
      do
      {
         valid=1;
         gotoxy(1,25);
         clreol();
         gotoxy(1,25);
         cout<<"ENTER THE NAME OF THE COSTUMER:";
         gotoxy(20,17);
         gets(t_name);
         getch();
         strupr(t_name);
         fflush(stdin);
         if((strlen(t_name) <= 0) ||(strlen(t_name) > 20))
         {
            valid = 0;
            gotoxy(1,25) ;
            clreol();
            gotoxy(1,24);
            cout<<"LENGTH SHOULD NOT BE ZERO OR GREATER THAN 20";
            gotoxy(1,25);
            cout<<"Press any key to continue....";
            getch();
            gotoxy(1,24);
            clreol();
            gotoxy(1,25);
            clreol();
            gotoxy(20,17);
            clreol();
         }
      }
        while(!valid);
        do
        {
           valid=1;
           gotoxy(1,25);
           clreol();
           gotoxy(1,25);
           cout<<"ENTER THE PHONE NO. OF THE CUSTOMER, ENTER '_' FOR NO PHONE NO.";
           gotoxy(20,18);
           cin>>t_phone;
           if((strlen(t_phone) < 8 && strlen(t_phone) > 1) || (strlen(t_phone) > 8))
           {
              valid = 0;
              gotoxy(1, 25);
              clreol();
              gotoxy(1, 24);
              cout<<"Length should not less than 8 or greater than 8";
              gotoxy(1,25);
              cout<<"Press any key to continue.....";
              getch();
              gotoxy(1, 24);
              clreol();
              gotoxy(1, 25);
              clreol();
              gotoxy(20,18);
              clreol();
           }
        }
        while( !valid);
        do
        {
           valid =1 ;
           gotoxy(1,25);
           clreol();
           gotoxy(1,25);
           cout<<"ENTER THE ADVANCE RS. ";
           gotoxy(20,19);
           cin>>t_advance;
           getch();
           if(t_advance < 0)
           {
              valid = 0;
              gotoxy(1,25);
              clreol();
              gotoxy(1,24);
              cout<<"SHOULD NOT LESS THAN ZERO ";
              gotoxy(1,25);
              cout<<"Press any key to continue.....";
              getch();
              gotoxy(1,24);
              clreol();
              gotoxy(1,25);
              clreol();
              gotoxy(20,19);
              clreol();
           }
        }
        while(!valid);
        do
        {
           valid = 1;
           gotoxy(1,25);
           clreol();
           gotoxy(1, 25);
           cout<<"ENTER THE MISCELLANEOUS CHARGES";
           gotoxy(20,20) ;
           cin>>t_misc;
           getch();
           if(t_misc <0)
           {
              valid=0;
              gotoxy(1,25);
              clreol();
              gotoxy(1,24);
              cout<<"SHOULD NOT LESS THAN ZERO";
              gotoxy(1,25);
              cout<<"Press any key to continue....";
              getch();
              gotoxy(1,24);
              clreol();
              gotoxy(1,25);
              clreol();
              gotoxy(20,20);
              clreol();
           }
        }
        while(!valid);
        do
        {
           valid=1;
           gotoxy(1,25);
           clreol();
           gotoxy(1,25);
           cout<<"ENTER THE ROOM SERVICE CHARGES ";
           gotoxy(20,21);
           cin>>t_room_srv;
           getch();
           if(t_room_srv < 0)
           {
              valid = 0;
              gotoxy(1,25);
              clreol();
              gotoxy(1,24);
              cout<<" SHOULD NOT LESS THAN ZERO";
              gotoxy(1,25);
              cout<<"Press any key to contine...";
              getch();
              gotoxy(1,24);
              clreol();
              gotoxy(1,25);
              clreol();
              gotoxy(20,21);
              clreol();
           }
        }
        while(!valid);
        gotoxy(1,23);
        cout<<"Do you want to save the record (y/n):";
        do
        {
           valid =1;
           gotoxy(42,23);
           cin>>ch;
           getch();
           ch=toupper(ch);
           if( ch! = 'Y' && ch! = 'N')
           {
              valid = 0;
              gotoxy(42,23);
              clreol();
           }
        }
        while(!valid);
        if(ch== 'Y')
        {
           if(t_roomno !=tr)
           {
              r.change_status(t_roomno, 'O');
              r.change_status(tr, 'V');
           }
           int  recno;
           recno=recordno(tr);
           int location;
           location = (recno -1)* sizeof(costumer);
           file.skeep(location);
           roomno = t_roomno;
           strcpy(name, t_name);
           strcpy(phone, t_name);
           room_srv = t_room_srv;
           advance = t_advance;
           misc=t_misc;
           file.write((char *) this, sizeof(customer));
        }
        file.close();
     }
     void customer :: delete_record(int t_roomno)
     {
        fstream file;
        file.open("CUSTOMER.DAT", ios::in);
        fstream temp;
        temp.open("temp.dat" , ios::out);
        while(!file.eof())
        {
           file.read((char *) this, sizeof(customer));
           if(file.eof() )
           break;
           if(roomno ! = t_roomno)
              temp.write((char  *) this, sizeof(costumer));
        }
        file.close();
        temp.close();
        file.open("COSTUMER.DAT" , ios::out);
        temp.open("temp.dat" , ios::in);
        temp.seekg(0);
        while(!temp.eof())
        {
           temp.read((char *) this, sizeof(customer));
           if(temp.eof())
              break;
           file.write((char *)this, sizeof(customer));
        }
        file.close();
        temp.close();
     }
     void customer :: deletion(void)
     {
        clrscr();
        room r;
        int valid;
        char ch;
        int t_roomno;
        gotoxy(1,3);
        cout<<"Enter the room no. of the customer to be deleted";
        cin>>t_roomno;
        char t_status;
        t_status = r.room_status(t_roomno);
        if(!r.romm_found(t_roomno) ||t_status == 'V')
        {
           gotoxy(1,25);
           clreol();
           gotoxy(1,24);
           cout<<"ROOM NO. NOT FOUND OR ROOM IS VACANT";
           gotoxy(1,25);
           cout<<"Press any key to continue...";
           getch();
          return;
        }
        display_record(t_roomno);
        gotoxy(1,15);
        cout<<"Do you want to delete this Costumer Record (y/n):";
        do
        {
           valid=1;
           gotoxy(52,15);
           cin>>ch;
           getch();
           ch = toupper(ch);
           if(ch! = 'Y' && ch!='N')
           {
              valid = 0;
              gotoxy(52,15);
              clreol();
           }
        }
        while(!valid);
        if (ch== 'N')
           return;
        r.change_status(t_roomno, 'V');
        delete_record(t_roomno);
     }
     
     char room :: room_status(int t_roomno)
     {
        fstream file;
        file.open("ROOM.DAT", ios::in);'
        file.seekg(0);
        int found = 0;
        char t_status;
        while (file.read((char *) this, sizeof(room)) && !found)
        {
           if(t_roomno == roomno)
           {
              found =1;
              t_status = status;
           }
        }
        file.close();
        return t_status;
     }
      void room :: change_status(int t_roomno, char t_status)
      {
         int recno;
         recno = recordno(t_roomno);
         fstream file;
         file.open("ROOM.DAT", ios::out | ios::ate);
         int location;
         location = (recno-1) * sizeof(room);
         file.skeep(location);
         status = t_status;
         file.write((char *) this, sizeof(room);
                    file.close();
                    }
                    
                    void costumer :: display_record(int t_roomno)
                    {
                       fstream file;
                       file.open("COSTUMER.DAT", ios::in);
                       file.seekg(0);
                       int found = 0;
                       while(file.read((char *) this, sizeof(customer)) && !found)
                       {
                          if(t_roomno == roomno)
                          {
                             found =1;
                             gotoxy(1,5);
 cout<<"Room no. : " <<roomno;
      gotoxy(1,6);
   cout<<"Customer Name : "<<name;
        gotoxy(1,7);
   cout<<"Phone no. : "<<phone;
        gotoxy(1,8);
   cout<<"Advance : "<<advance;
        gotoxy(1,9);
   cout<<"Miscellaneous : "<<misc;
        gotoxy(1,10);
   cout<<"Room Service : "<<room_srv;
                          }
                       }
                       file.close();
                    }
                    void customer :: display_customer_record(int t_roomno)
                    {
                       fstream file;
                       file.open("COSTUMER.DAT", ios::in);
                       file.seekg(0);
                       int found = 0;
                       while(file.read((char *) this, sizeof(customer)) && !found)
                       {
                          if(t_roomno == roomno)
                          {
                             found = 1;
                             gotoxy(1,5);
                             cout<<"Room no. : " <<roomno;
      gotoxy(1,6);
   cout<<"Customer Name : "<<name;
        gotoxy(1,7);
   cout<<"Phone no. : "<<phone;
        gotoxy(1,8);
   cout<<"Advance : "<<advance;
        gotoxy(1,9);
   cout<<"Miscellaneous charges : "<<misc;
        gotoxy(1,10);
   cout<<"Room Service charges : "<<room_srv;
                          }
                       }
                       file.close();
                    }
                    
                    int costumer :: recordno(int t_roomno)
                    {
                       fstream file;
                       file.open("COSTUMER.DAT", ios::in);
                       file.seekg(0);
                       int found = 0;
                       while(file.read((char *) this, sizeof(customer)))
                       { count++;
                        if(t_roomno == roomno)
                           break;
                       }
                       file.close();
                       return count;
                    }
                    int room :: recordno(int t_roomno)
                    {
                       fstream file;
                       file.open("ROOM.DAT", ios::in);
                       file.seekg(0);
                       int found = 0;
                       while(file.read((char *) this, sizeof(customer)))
                       { count++;
                        if(t_roomno == roomno)
                           break;
                       }
                       file.close();
                       return count;
                    }
                    void main(void)
                    {
                       clrscr();
                       menu m;
                       textcode(C80);
                       textbackground(WHITE);
                       textcolor(RED);
                       m.main_menu();
                       getch();
                    }
                    
                    
                          
                       
        
        
       
           
     
          
              
         
        
              
              
              
              
              
              
              
              
    
