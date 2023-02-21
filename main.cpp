#include<fstream>
#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>

using namespace std;

class book
{
    char book_number[30];
    char book_name[50];
    char author_name[20];
public:
    void create_book()
    {
        cout<<"\nEnter The Book Number: ";
        cin>>book_number;
        cout<<"\nEnter The Name of The Book: ";
        cin.ignore();
        cin.getline(book_name,50);
        cout<<"\nEnter The Author's Name: ";
        cin.ignore();
        cin.getline(author_name,50);
        cout<<"\t\t\n\nBook Created Successfully...";
    }

    void show_book()
    {
        cout<<"\nBook Number: "<<book_number;
        cout<<"\nBook Name: "<<book_name;
        cout<<"\nAuthor's Name: "<<author_name;
    }
    void modify_book()
    {
        cout<<"\nBook number : "<<book_number;
        cout<<"\nModify Book Name : ";
        cin.ignore();
        cin.getline(book_name,50);
        cout<<"\nModify Author's Name: ";
        cin.ignore();
        cin.getline(author_name,50);
    }
    char* getbooknumber()
    {
        return book_number;
    }
    void report()
    {cout<<book_number<<setw(30)<<book_name<<setw(30)<<author_name<<endl;}

    book(){
        cout<<"The implicit constructor was called(book)"<<endl;
    }
};

class book1 : public book
{
    char book1_number[30];
    char book1_name[50];
    char author1_name[20];
public:
    void create_book1()
    {
        cout<<"\nEnter The Book Number: ";
        cin>>book1_number;
        cout<<"\nEnter The Name of The Book: ";
        cin.ignore();
        cin.getline(book1_name,50);
        cout<<"\nEnter The Author's Name: ";
        cin.ignore();
        cin.getline(author1_name,50);
        cout<<"\t\t\n\nBook Created Successfully...";
    }

    void show_book1()
    {
        cout<<"\nBook Number: "<<book1_number;
        cout<<"\nBook Name: "<<book1_name;
        cout<<"\nAuthor's Name: "<<author1_name;
    }
    void modify_book1()
    {
        cout<<"\nBook number : "<<book1_number;
        cout<<"\nModify Book Name : ";
        cin.ignore();
        cin.getline(book1_name,50);
        cout<<"\nModify Author's Name: ";
        cin.ignore();
        cin.getline(author1_name,50);
    }
    char* getbooknumber1()
    {
        return book1_number;
    }
    void report1()
    {cout<<book1_number<<setw(30)<<book1_name<<setw(30)<<author1_name<<endl;}
    book1(){
        cout<<"The implicit constructor was called(book1)"<<endl;
    }
};

class book2 : public book
{
    char book2_number[30];
    char book2_name[50];
    char author2_name[20];
public:
    void create_book2()
    {
        cout<<"\nEnter The Book Number: ";
        cin>>book2_number;
        cout<<"\nEnter The Name of The Book: ";
        cin.ignore();
        cin.getline(book2_name,50);
        cout<<"\nEnter The Author's Name: ";
        cin.ignore();
        cin.getline(author2_name,50);
        cout<<"\t\t\n\nBook Created Successfully...";
    }

    void show_book2()
    {
        cout<<"\nBook Number: "<<book2_number;
        cout<<"\nBook Name: "<<book2_name;
        cout<<"\nAuthor's Name: "<<author2_name;
    }
    void modify_book2()
    {
        cout<<"\nBook number : "<<book2_number;
        cout<<"\nModify Book Name : ";
        cin.ignore();
        cin.getline(book2_name,50);
        cout<<"\nModify Author's Name: ";
        cin.ignore();
        cin.getline(author2_name,50);
    }
    char* getbooknumber2()
    {
        return book2_number;
    }
    void report2()
    {cout<<book2_number<<setw(30)<<book2_name<<setw(30)<<author2_name<<endl;}
    book2(){
        cout<<"The implicit constructor was called(book2)"<<endl;
    }
};

class book3 : public book
{
    char book3_number[30];
    char book3_name[50];
    char author3_name[20];
public:
    void create_book3()
    {
        cout<<"\nEnter The Book Number: ";
        cin>>book3_number;
        cout<<"\nEnter The Name of The Book: ";
        cin.ignore();
        cin.getline(book3_name,50);
        cout<<"\nEnter The Author's Name: ";
        cin.ignore();
        cin.getline(author3_name,50);
        cout<<"\t\t\n\nBook Created Successfully...";
    }

    void show_book3()
    {
        cout<<"\nBook Number: "<<book3_number;
        cout<<"\nBook Name: "<<book3_name;
        cout<<"\nAuthor's Name: "<<author3_name;
    }
    void modify_book3()
    {
        cout<<"\nBook number : "<<book3_number;
        cout<<"\nModify Book Name : ";
        cin.ignore();
        cin.getline(book3_name,50);
        cout<<"\nModify Author's Name: ";
        cin.ignore();
        cin.getline(author3_name,50);
    }
    char* getbooknumber3()
    {
        return book3_number;
    }
    void report3()
    {cout<<book3_number<<setw(30)<<book3_name<<setw(30)<<author3_name<<endl;}
    book3(){
        cout<<"The implicit constructor was called(book3)"<<endl;
    }
};

class student
{
    char ID_number[20];
    char Student_name[20];
    char stbno[6];
    int token;
public:
    void create_student()
    {
        cout<<"\nEnter The ID Number ";
        cin>>ID_number;
        cout<<"\n\nEnter The Name of The Student: ";
        cin>>Student_name;
        token=0;
        stbno[0]='/0';
        cout<<"\t\t\n\nStudent Record Created Successfully...";
    }
    void show_student()
    {
        cout<<"\nID Number: "<<ID_number;
        cout<<"\nStudent Name: ";
        puts(Student_name);
        cout<<"\nNo of Book issued: "<<token;
        if(token==1)
            cout<<"\nBook No "<<stbno;
    }
    void modify_student()
    {
        cout<<"\nID Number: "<<ID_number;
        cout<<"\nModify Student Name: ";
        cin.ignore();
        cin.getline(Student_name,50);
    }
    char* get_ID_number()
    {
        return ID_number;
    }
    char* retstbno()
    {
        return stbno;
    }
    int rettoken()
    {
        return token;
    }
    void addtoken()
    {token=1;}
    void resettoken()
    {token=0;}
    void getstbno(char t[])
    {
        strcpy(stbno,t);
    }
    void report()
    {cout<<"\t"<<ID_number<<setw(20)<<Student_name<<setw(10)<<token<<endl;}
    student(){
        cout<<"The implicit constructor was called(student)"<<endl;
    }
};

fstream fp,fp1;
book bk;
student st;
void write_book()
{
    system("cls");
    int more_or_main;
    fp.open("book.dat",ios::out|ios::app);
    do
    {
        bk.create_book();
        fp.write((char*)&bk,sizeof(book));
        cout<<"\nPress 1 to add more books.";
        cout<<"\nPress 2 to return to main menu.\n";
        cout<<"Enter: ";
        cin>>more_or_main;
    }while(more_or_main == 1);
    fp.close();
}
void write_student()
{
    system("cls");
    int more_or_main;
    fp.open("student.dat",ios::out|ios::app);
    do
    {
        st.create_student();
        fp.write((char*)&st,sizeof(student));
        cout<<"\nPress 1 to add more students.";
        cout<<"\nPress 2 to return to main menu.\n";
        cout<<"Enter: ";
        cin>>more_or_main;
    }while(more_or_main == 1);
    fp.close();
}
void display_a_book(char n[])
{
    system("cls");
    cout<<"\nBOOK DETAILS\n";
    int check=0;
    fp.open("book.dat",ios::in);
    while(fp.read((char*)&bk,sizeof(book)))
    {
        if(strcmpi(bk.getbooknumber(),n)==0)
        {
            bk.show_book();
            check=1;
        }
    }
    fp.close();
    if(check==0)
        cout<<"\n\nBook does not exist";
    getch();
}
void display_a_student(char n[])
{
    system("cls");
    cout<<"\nSTUDENT DETAILS\n";
    int check=0;
    fp.open("student.dat",ios::in);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if((strcmpi(st.get_ID_number(),n)==0))
        {
            st.show_student();
            check=1;
        }
    }
    fp.close();
    if(check==0)
        cout<<"\n\nStudent does not exist";
    getch();
}
void  modify_book()
{
    system("cls");
    char n[20];
    int found=0;
    cout<<"\n\n\tMODIFY BOOK";
    cout<<"\n\n\tEnter The book number: ";
    cin>>n;
    fp.open("book.dat",ios::in|ios::out);
    while(fp.read((char*)&bk,sizeof(book)) && found==0)
    {
        if(strcmpi(bk.getbooknumber(),n)==0)
        {
            bk.show_book();
            cout<<"\nEnter The New Details of book"<<endl;
            bk.modify_book();
            int pos=-1*sizeof(bk);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&bk,sizeof(book));
            cout<<"\n\n\t Record Updated Successfully...";
            found=1;
        }
    }
    fp.close();
    if(found==0)
        cout<<"\n\n Record Not Found ";
    getch();
}
void modify_student()
{
    system("cls");
    char n[20];
    int found=0;
    cout<<"\n\n\tMODIFY STUDENT RECORD... ";
    cout<<"\n\n\tEnter Student's ID number: ";
    cin>>n;
    fp.open("student.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),n)==0)
        {
            st.show_student();
            cout<<"\nEnter The New Details of student"<<endl;
            st.modify_student();
            int pos=-1*sizeof(st);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));
            cout<<"\n\n\t Record Updated Successfully...";
            found=1;
        }
    }
    fp.close();
    if(found==0)
        cout<<"\n\n Record Not Found ";
    getch();
}
void delete_student()
{
    system("cls");
    char n[20];
    int flag=0;
    cout<<"\n\n\n\tDELETE STUDENT";
    cout<<"\n\nEnter The ID number of the Student You Want To Delete: ";
    cin>>n;
    fp.open("student.dat",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.dat",ios::out);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(strcmpi(st.get_ID_number(),n)!=0)
            fp2.write((char*)&st,sizeof(student));
        else
            flag=1;
    }
    fp2.close();
    fp.close();
    remove("student.dat");
    rename("Temp.dat","student.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted ..";
    else
        cout<<"\n\nRecord not found";
    getch();
}
void delete_book()
{
    system("cls");
    char n[20];
    int flag=0;
    cout<<"\n\n\n\tDELETE BOOK";
    cout<<"\n\nEnter The Book's number You Want To Delete: ";
    cin>>n;
    fp.open("book.dat",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.dat",ios::out);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&bk,sizeof(book)))
    {
        if(strcmpi(bk.getbooknumber(),n)!=0)
        {
            fp2.write((char*)&bk,sizeof(book));
        }
        else
            flag=1;
    }
    fp2.close();
    fp.close();
    remove("book.dat");
    rename("Temp.dat","book.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted ..";
    else
        cout<<"\n\nRecord not found";
    getch();
}
void display_all_students()
{
    system("cls");
    fp.open("student.dat",ios::in);
    if(!fp)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
        getch();
        return;
    }
    cout<<"\n\n\t\tSTUDENT LIST\n\n";
    cout<<"==================================================================\n";
    cout<<"\tID Number."<<setw(10)<<"Name"<<setw(20)<<"Book Issued\n";
    cout<<"==================================================================\n";
    while(fp.read((char*)&st,sizeof(student)))
    {
        st.report();
    }
    fp.close();
    getch();
}
void display_allb()
{
    system("cls");
    fp.open("book.dat",ios::in);
    if(!fp)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
        getch();
        return;
    }
    cout<<"\n\n\t\tBook LIST\n\n";
    cout<<"=========================================================================\n";
    cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
    cout<<"=========================================================================\n";
    while(fp.read((char*)&bk,sizeof(book)))
    {
        bk.report();
    }
    fp.close();
    getch();
}
void issue_book()
{
    system("cls");
    char sn[20],bn[20];
    int found=0,flag=0;
    cout<<"\t\t\nBOOK ISSUE";
    cout<<"\n\n\tEnter student's ID number: ";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp1.open("book.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==0)
            {
                cout<<"\n\n\tEnter book number: ";
                cin>>bn;
                while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
                {
                    if(strcmpi(bk.getbooknumber(),bn)==0)
                    {
                        bk.show_book();
                        flag=1;
                        st.addtoken();
                        st.getstbno(bk.getbooknumber());
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book issued successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"You have not returned the last book ";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp1.close();
}
void book_return()
{
    system("cls");
    char sn[20],bn[20];
    int found=0, flag=0, day, fine;
    cout<<"\t\tRETURN BOOKS\n";
    cout<<"\n\n\tEnter The student's ID number: ";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp1.open("book.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==1)
            {
                while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
                {
                    if(strcmpi(bk.getbooknumber(),st.retstbno())==0)
                    {
                        bk.show_book();
                        flag=1;
                        cout<<"\n\nBook returned in no. of days";
                        cin>>day;
                        if(day>15)
                        {
                            fine=(day-15)*1;
                            cout<<"\n\nThe Book is last. You have to pay a fine of  "<<fine;
                        }
                        st.resettoken();
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book returned successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"No book is issued..please check!!";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp1.close();
}

void book_menu()
{
    int option;
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n\t\tPress 1 to CREATE BOOKS";
    cout<<"\n\t\tPress 2 to DISPLAY ALL BOOKS";
    cout<<"\n\t\tPress 3 to DISPLAY SPECIFIC BOOK";
    cout<<"\n\t\tPress 4 to MODIFY BOOKS";
    cout<<"\n\t\tPress 5 to DELETE BOOKS";
    cout<<"\n\t\tPress 6 to GO BACK TO MAIN MENU";
    cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\t\tOption: ";
    cin>>option;
    switch(option)
    {
        case 1:  system("cls");
            write_book();
            break;
        case 2: display_allb();
            break;
        case 3:
            char num[20];
            system("cls");
            cout<<"\n\n\tPlease Enter The book No. ";
            cin>>num;
            display_a_book(num);
            break;
        case 4: modify_book();break;
        case 5: delete_book();break;
        case 6: system("cls");
            break;
        default:cout<<"\a";
    }
}
void student_menu()
{
    int option;
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n\t\tPress 1 to CREATE STUDENT RECORD";
    cout<<"\n\t\tPress 2 to DISPLAY ALL STUDENTS RECORD";
    cout<<"\n\t\tPress 3 to DISPLAY SPECIFIC STUDENT RECORD";
    cout<<"\n\t\tPress 4 to MODIFY STUDENT RECORD";
    cout<<"\n\t\tPress 5 to DELETE STUDENT RECORD";
    cout<<"\n\t\tPress 6 to GO BACK TO MAIN MENU";
    cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\t\tOption: ";
    cin>>option;
    switch(option)
    {
        case 1:  system("cls");
            write_student();
            break;
        case 2: system("cls");
            display_all_students();
            break;
        case 3:
            char num[20];
            system("cls");
            cout<<"\n\n\tPlease Enter The ID Number: ";
            cin>>num;
            display_a_student(num);
            break;
        case 4:system("cls");
            modify_student();break;
        case 5: system("cls");
            delete_student();break;
        case 6: exit(0);
            break;
        default:cout<<"\a";
    }
}

//adunam cu 3
fstream fp3,fp4;
book1 bk1;
void write_book1()
{
    system("cls");
    int more_or_main;
    fp3.open("book1.dat",ios::out|ios::app);
    do
    {
        bk1.create_book1();
        fp3.write((char*)&bk1,sizeof(book1));
        cout<<"\nPress 1 to add more books.";
        cout<<"\nPress 2 to return to main menu.\n";
        cout<<"Enter: ";
        cin>>more_or_main;
    }while(more_or_main == 1);
    fp3.close();
}

void display_a_book1(char n[])
{
    system("cls");
    cout<<"\nBOOK DETAILS\n";
    int check=0;
    fp3.open("book1.dat",ios::in);
    while(fp3.read((char*)&bk1,sizeof(book1)))
    {
        if(strcmpi(bk1.getbooknumber1(),n)==0)
        {
            bk1.show_book1();
            check=1;
        }
    }
    fp3.close();
    if(check==0)
        cout<<"\n\nBook does not exist";
    getch();
}

void modify_book1()
{
    system("cls");
    char n[20];
    int found=0;
    cout<<"\n\n\tMODIFY BOOK";
    cout<<"\n\n\tEnter The book number: ";
    cin>>n;
    fp3.open("book1.dat",ios::in|ios::out);
    while(fp3.read((char*)&bk1,sizeof(book1)) && found==0)
    {
        if(strcmpi(bk1.getbooknumber1(),n)==0)
        {
            bk1.show_book1();
            cout<<"\nEnter The New Details of book"<<endl;
            bk1.modify_book1();
            int pos=-1*sizeof(bk);
            fp3.seekp(pos,ios::cur);
            fp3.write((char*)&bk1,sizeof(book1));
            cout<<"\n\n\t Record Updated Successfully...";
            found=1;
        }
    }
    fp3.close();
    if(found==0)
        cout<<"\n\n Record Not Found ";
    getch();
}

void delete_book1()
{
    system("cls");
    char n[20];
    int flag=0;
    cout<<"\n\n\n\tDELETE BOOK";
    cout<<"\n\nEnter The Book's number You Want To Delete: ";
    cin>>n;
    fp3.open("book1.dat",ios::in|ios::out);
    fstream fp5;
    fp5.open("Temp1.dat",ios::out);
    fp3.seekg(0,ios::beg);
    while(fp3.read((char*)&bk1,sizeof(book1)))
    {
        if(strcmpi(bk1.getbooknumber1(),n)!=0)
        {
            fp5.write((char*)&bk1,sizeof(book1));
        }
        else
            flag=1;
    }
    fp5.close();
    fp3.close();
    remove("book1.dat");
    rename("Temp1.dat","book1.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted ..";
    else
        cout<<"\n\nRecord not found";
    getch();
}

void display_allb1()
{
    system("cls");
    fp3.open("book1.dat",ios::in);
    if(!fp3)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
        getch();
        return;
    }
    cout<<"\n\n\t\tBook LIST\n\n";
    cout<<"=========================================================================\n";
    cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
    cout<<"=========================================================================\n";
    while(fp3.read((char*)&bk1,sizeof(book1)))
    {
        bk1.report1();
    }
    fp3.close();
    getch();
}

void issue_book1()
{
    system("cls");
    char sn[20],bn1[20];
    int found=0,flag=0;
    cout<<"\t\t\nBOOK ISSUE";
    cout<<"\n\n\tEnter student's ID number: ";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp4.open("book1.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==0)
            {
                cout<<"\n\n\tEnter book number: ";
                cin>>bn1;
                while(fp4.read((char*)&bk1,sizeof(book1))&& flag==0)
                {
                    if(strcmpi(bk1.getbooknumber1(),bn1)==0)
                    {
                        bk1.show_book1();
                        flag=1;
                        st.addtoken();
                        st.getstbno(bk1.getbooknumber1());
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book issued successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"You have not returned the last book ";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp4.close();
}

void book1_return()
{
    system("cls");
    char sn[20],bn1[20];
    int found=0, flag=0, day, fine;
    cout<<"\t\tRETURN BOOKS\n";
    cout<<"\n\n\tEnter The student's ID number:  ";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp4.open("book1.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==1)
            {
                while(fp4.read((char*)&bk1,sizeof(book1))&& flag==0)
                {
                    if(strcmpi(bk1.getbooknumber1(),st.retstbno())==0)
                    {
                        bk1.show_book1();
                        flag=1;
                        cout<<"\n\nBook returned in no. of days";
                        cin>>day;
                        if(day>15)
                        {
                            fine=(day-15)*1;
                            cout<<"\n\nThe Book is last. You have to pay a fine of  "<<fine;
                        }
                        st.resettoken();
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book returned successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"No book is issued..please check!!";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp4.close();
}

void book_menu1()
{
    int option;
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n\t\tPress 1 to CREATE BOOKS";
    cout<<"\n\t\tPress 2 to DISPLAY ALL BOOKS";
    cout<<"\n\t\tPress 3 to DISPLAY SPECIFIC BOOK";
    cout<<"\n\t\tPress 4 to MODIFY BOOKS";
    cout<<"\n\t\tPress 5 to DELETE BOOKS";
    cout<<"\n\t\tPress 6 to GO BACK TO MAIN MENU";
    cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\t\tOption: ";
    cin>>option;
    switch(option)
    {
        case 1:  system("cls");
            write_book1();
            break;
        case 2: display_allb1();
            break;
        case 3:
            char num[20];
            system("cls");
            cout<<"\n\n\tPlease Enter The book No. ";
            cin>>num;
            display_a_book1(num);
            break;
        case 4: modify_book1();break;
        case 5: delete_book1();break;
        case 6: system("cls");
            break;
        default:cout<<"\a";
    }
}

//adunam cu 3
fstream fp6,fp7;
book2 bk2;
void write_book2()
{
    system("cls");
    int more_or_main;
    fp6.open("book2.dat",ios::out|ios::app);
    do
    {
        bk2.create_book2();
        fp6.write((char*)&bk2,sizeof(book2));
        cout<<"\nPress 1 to add more books.";
        cout<<"\nPress 2 to return to main menu.\n";
        cout<<"Enter: ";
        cin>>more_or_main;
    }while(more_or_main == 1);
    fp6.close();
}

void display_a_book2(char n[])
{
    system("cls");
    cout<<"\nBOOK DETAILS\n";
    int check=0;
    fp6.open("book2.dat",ios::in);
    while(fp6.read((char*)&bk2,sizeof(book2)))
    {
        if(strcmpi(bk2.getbooknumber2(),n)==0)
        {
            bk2.show_book2();
            check=1;
        }
    }
    fp6.close();
    if(check==0)
        cout<<"\n\nBook does not exist";
    getch();
}

void modify_book2()
{
    system("cls");
    char n[20];
    int found=0;
    cout<<"\n\n\tMODIFY BOOK";
    cout<<"\n\n\tEnter The book number: ";
    cin>>n;
    fp6.open("book2.dat",ios::in|ios::out);
    while(fp6.read((char*)&bk2,sizeof(book2)) && found==0)
    {
        if(strcmpi(bk2.getbooknumber2(),n)==0)
        {
            bk2.show_book2();
            cout<<"\nEnter The New Details of book"<<endl;
            bk2.modify_book2();
            int pos=-1*sizeof(bk);
            fp6.seekp(pos,ios::cur);
            fp6.write((char*)&bk2,sizeof(book2));
            cout<<"\n\n\t Record Updated Successfully...";
            found=1;
        }
    }
    fp6.close();
    if(found==0)
        cout<<"\n\n Record Not Found ";
    getch();
}

void delete_book2()
{
    system("cls");
    char n[20];
    int flag=0;
    cout<<"\n\n\n\tDELETE BOOK";
    cout<<"\n\nEnter The Book's number You Want To Delete: ";
    cin>>n;
    fp6.open("book2.dat",ios::in|ios::out);
    fstream fp8;
    fp8.open("Temp2.dat",ios::out);
    fp6.seekg(0,ios::beg);
    while(fp6.read((char*)&bk2,sizeof(book2)))
    {
        if(strcmpi(bk2.getbooknumber2(),n)!=0)
        {
            fp8.write((char*)&bk2,sizeof(book2));
        }
        else
            flag=1;
    }
    fp8.close();
    fp6.close();
    remove("book2.dat");
    rename("Temp2.dat","book2.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted ..";
    else
        cout<<"\n\nRecord not found";
    getch();
}

void display_allb2()
{
    system("cls");
    fp6.open("book2.dat",ios::in);
    if(!fp6)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
        getch();
        return;
    }
    cout<<"\n\n\t\tBook LIST\n\n";
    cout<<"=========================================================================\n";
    cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
    cout<<"=========================================================================\n";
    while(fp6.read((char*)&bk2,sizeof(book2)))
    {
        bk2.report2();
    }
    fp6.close();
    getch();
}

void issue_book2()
{
    system("cls");
    char sn[20],bn2[20];
    int found=0,flag=0;
    cout<<"\t\t\nBOOK ISSUE";
    cout<<"\n\n\tEnter student's ID number: ";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp7.open("book2.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==0)
            {
                cout<<"\n\n\tEnter book number: ";
                cin>>bn2;
                while(fp7.read((char*)&bk2,sizeof(book2))&& flag==0)
                {
                    if(strcmpi(bk2.getbooknumber2(),bn2)==0)
                    {
                        bk2.show_book2();
                        flag=1;
                        st.addtoken();
                        st.getstbno(bk2.getbooknumber2());
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book issued successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"You have not returned the last book ";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp7.close();
}

void book2_return()
{
    system("cls");
    char sn[20],bn2[20];
    int found=0, flag=0, day, fine;
    cout<<"\t\tRETURN BOOKS\n";
    cout<<"\n\n\tEnter The student's ID number: ";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp7.open("book2.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==1)
            {
                while(fp7.read((char*)&bk2,sizeof(book2))&& flag==0)
                {
                    if(strcmpi(bk2.getbooknumber2(),st.retstbno())==0)
                    {
                        bk2.show_book2();
                        flag=1;
                        cout<<"\n\nBook returned in no. of days";
                        cin>>day;
                        if(day>15)
                        {
                            fine=(day-15)*1;
                            cout<<"\n\nThe Book is last. You have to pay a fine of  "<<fine;
                        }
                        st.resettoken();
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book returned successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"No book is issued..please check!!";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp7.close();
}


void book_menu2()
{
    int option;
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n\t\tPress 1 to CREATE BOOKS";
    cout<<"\n\t\tPress 2 to DISPLAY ALL BOOKS";
    cout<<"\n\t\tPress 3 to DISPLAY SPECIFIC BOOK";
    cout<<"\n\t\tPress 4 to MODIFY BOOKS";
    cout<<"\n\t\tPress 5 to DELETE BOOKS";
    cout<<"\n\t\tPress 6 to GO BACK TO MAIN MENU";
    cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\t\tOption: ";
    cin>>option;
    switch(option)
    {
        case 1:  system("cls");
            write_book2();
            break;
        case 2: display_allb2();
            break;
        case 3:
            char num[20];
            system("cls");
            cout<<"\n\n\tPlease Enter The book No. ";
            cin>>num;
            display_a_book2(num);
            break;
        case 4: modify_book2();break;
        case 5: delete_book2();break;
        case 6: system("cls");
            break;
        default:cout<<"\a";
    }
}


//adunam cu 3 * 2
fstream fp9,fp10;
book3 bk3;
void write_book3()
{
    system("cls");
    int more_or_main;
    fp9.open("book3.dat",ios::out|ios::app);
    do
    {
        bk3.create_book3();
        fp9.write((char*)&bk3,sizeof(book3));
        cout<<"\nPress 1 to add more books.";
        cout<<"\nPress 2 to return to main menu.\n";
        cout<<"Enter: ";
        cin>>more_or_main;
    }while(more_or_main == 1);
    fp9.close();
}

void display_a_book3(char n[])
{
    system("cls");
    cout<<"\nBOOK DETAILS\n";
    int check=0;
    fp9.open("book1.dat",ios::in);
    while(fp9.read((char*)&bk3,sizeof(book3)))
    {
        if(strcmpi(bk3.getbooknumber3(),n)==0)
        {
            bk3.show_book3();
            check=1;
        }
    }
    fp9.close();
    if(check==0)
        cout<<"\n\nBook does not exist";
    getch();
}

void modify_book3()
{
    system("cls");
    char n[20];
    int found=0;
    cout<<"\n\n\tMODIFY BOOK";
    cout<<"\n\n\tEnter The book number: ";
    cin>>n;
    fp9.open("book3.dat",ios::in|ios::out);
    while(fp9.read((char*)&bk3,sizeof(book3)) && found==0)
    {
        if(strcmpi(bk3.getbooknumber3(),n)==0)
        {
            bk3.show_book3();
            cout<<"\nEnter The New Details of book"<<endl;
            bk3.modify_book3();
            int pos=-1*sizeof(bk);
            fp9.seekp(pos,ios::cur);
            fp9.write((char*)&bk3,sizeof(book3));
            cout<<"\n\n\t Record Updated Successfully...";
            found=1;
        }
    }
    fp9.close();
    if(found==0)
        cout<<"\n\n Record Not Found ";
    getch();
}

void delete_book3()
{
    system("cls");
    char n[20];
    int flag=0;
    cout<<"\n\n\n\tDELETE BOOK";
    cout<<"\n\nEnter The Book's number You Want To Delete: ";
    cin>>n;
    fp9.open("book3.dat",ios::in|ios::out);
    fstream fp11;
    fp11.open("Temp3.dat",ios::out);
    fp9.seekg(0,ios::beg);
    while(fp9.read((char*)&bk3,sizeof(book3)))
    {
        if(strcmpi(bk3.getbooknumber3(),n)!=0)
        {
            fp11.write((char*)&bk3,sizeof(book3));
        }
        else
            flag=1;
    }
    fp11.close();
    fp9.close();
    remove("book3.dat");
    rename("Temp3.dat","book3.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted ..";
    else
        cout<<"\n\nRecord not found";
    getch();
}

void display_allb3()
{
    system("cls");
    fp9.open("book3.dat",ios::in);
    if(!fp9)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
        getch();
        return;
    }
    cout<<"\n\n\t\tBook LIST\n\n";
    cout<<"=========================================================================\n";
    cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
    cout<<"=========================================================================\n";
    while(fp9.read((char*)&bk3,sizeof(book3)))
    {
        bk3.report3();
    }
    fp9.close();
    getch();
}

void issue_book3()
{
    system("cls");
    char sn[20],bn3[20];
    int found=0,flag=0;
    cout<<"\t\t\nBOOK ISSUE";
    cout<<"\n\n\tEnter student's ID number: ";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp10.open("book3.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==0)
            {
                cout<<"\n\n\tEnter book number: ";
                cin>>bn3;
                while(fp10.read((char*)&bk3,sizeof(book3))&& flag==0)
                {
                    if(strcmpi(bk3.getbooknumber3(),bn3)==0)
                    {
                        bk3.show_book3();
                        flag=1;
                        st.addtoken();
                        st.getstbno(bk3.getbooknumber3());
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book issued successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"You have not returned the last book ";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp10.close();
}

void book3_return()
{
    system("cls");
    char sn[20],bn3[20];
    int found=0, flag=0, day, fine;
    cout<<"\t\tRETURN BOOKS\n";
    cout<<"\n\n\tEnter The student's ID number:";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp10.open("book3.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(strcmpi(st.get_ID_number(),sn)==0)
        {
            found=1;
            if(st.rettoken()==1)
            {
                while(fp10.read((char*)&bk3,sizeof(book3))&& flag==0)
                {
                    if(strcmpi(bk3.getbooknumber3(),st.retstbno())==0)
                    {
                        bk3.show_book3();
                        flag=1;
                        cout<<"\n\nBook returned in no. of days";
                        cin>>day;
                        if(day>15)
                        {
                            fine=(day-15)*1;
                            cout<<"\n\nThe Book is last. You have to pay a fine of  "<<fine;
                        }
                        st.resettoken();
                        int pos=-1*sizeof(st);
                        fp.seekp(pos,ios::cur);
                        fp.write((char*)&st,sizeof(student));
                        cout<<"\n\n\t Book returned successfully...";
                    }
                }
                if(flag==0)
                    cout<<"Book number does not exist";
            }
            else
                cout<<"No book is issued..please check!!";
        }
    }
    if(found==0)
        cout<<"Student record not exist...";
    getch();
    system("cls");
    fp.close();
    fp10.close();
}

void book_menu3()
{
    int option;
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n\t\tPress 1 to CREATE BOOKS";
    cout<<"\n\t\tPress 2 to DISPLAY ALL BOOKS";
    cout<<"\n\t\tPress 3 to DISPLAY SPECIFIC BOOK";
    cout<<"\n\t\tPress 4 to MODIFY BOOKS";
    cout<<"\n\t\tPress 5 to DELETE BOOKS";
    cout<<"\n\t\tPress 6 to GO BACK TO MAIN MENU";
    cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\t\tOption: ";
    cin>>option;
    switch(option)
    {
        case 1:  system("cls");
            write_book3();
            break;
        case 2: display_allb3();
            break;
        case 3:
            char num[20];
            system("cls");
            cout<<"\n\n\tPlease Enter The book No. ";
            cin>>num;
            display_a_book3(num);
            break;
        case 4: modify_book3();break;
        case 5: delete_book3();break;
        case 6: system("cls");
            break;
        default:cout<<"\a";
    }
}


int main()
{
    int option = 0;
    int option1=0;
    int option2 = 0;
    int option3 = 0;
    for(;;)
    {
        cout<<"\n\t\tPress 1 to ISSUE BOOKS";
        cout<<"\n\t\tPress 2 to RETURN BOOKS";
        cout<<"\n\t\tPress 3 to UPDATE STUDENT RECORDS";
        cout<<"\n\t\tPress 4 to UPDATE BOOK RECORDS";
        cout<<"\n\t\tPress 5 to TO EXIT";
        cout<<"\n\t\tOption: ";
        cin>>option;
        switch(option)
        {

            case 1:system("cls");
                cout<<"\n\t\tPress 1 to issue best - selling books";
                cout<<"\n\t\tPress 2 to issue study books";
                cout<<"\n\t\tPress 3 to issue fiction books";
                cout<<"\n\t\tPress 4 to issue comedy books";
                cout<<"\n\t\tOption:";
                cin>> option2;
                switch(option2){
                    case 1:system("cls");
                    issue_book();
                    break;
                    case 2:system("cls");
                    issue_book1();
                    break;
                    case 3:system("cls");
                    issue_book2();
                    break;
                    case 4:system("cls");
                    issue_book3();
                    break;
                    case 5: exit(0);
                    default :cout<<"\a";
                }
                break;
            case 2:system("cls");

                cout<<"\n\t\tPress 1 to return best - selling books";
                cout<<"\n\t\tPress 2 to return study books";
                cout<<"\n\t\tPress 3 to return fiction books";
                cout<<"\n\t\tPress 4 to return comedy books";
                cout<<"\n\t\tOption:";
                cin>>option3;

                switch(option3){
                    case 1:system("cls");
                    book_return();
                    break;
                    case 2:system("cls");
                    book1_return();
                    break;
                    case 3:system("cls");
                    book2_return();
                    break;
                    case 4:system("cls");
                    book3_return();
                    break;
                    case 5:exit(0);
                    default :cout<<"\a";
                }
                break;
            case 3:system("cls");
                student_menu();
                break;
            case 4:system("cls");
                cout<<"\n\t\tPress 1 to choose the best - selling book category ";
                cout<<"\n\t\tPress 2 to choose study books category";
                cout<<"\n\t\tPress 3 to choose fiction books category";
                cout<<"\n\t\tPress 4 to choose comedy books category";
                cout<<"\n\t\tOption:";
                cin>>option1;
                switch(option1)
                {
                    case 1:system("cls");
                        book_menu();
                        break;
                    case 2:system("cls");
                        book_menu1();
                        break;
                    case 3:system("cls");
                        book_menu2();
                        break;
                    case 4:system("cls");
                        book_menu3();
                        break;
                    case 5:exit(0);
                    default :cout<<"\a";
                }
                break;
            case 5:exit(0);
                break;
            default :cout<<"\a";
                exit(0);
        }
    }
}