
/*
sabbir Ahamed
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Person
{
    string Name,Birthday;

public:
    Person(){};
    Person(string name,string birthday)
    {
        Name=name;
        Birthday=birthday;
    }
    void viewPerson()
    {
        cout<<"Name : "<<Name<<endl;
        cout<<"Birthday : "<<Birthday<<endl;
    }
};

class Department
{
    string department_name;
public:
    Department(){};
    Department(string department_name)
    {
        this->department_name=department_name;
    }
    void view_Department()
    {
        cout<<"Name of Department : "<<this->department_name<<endl;
    }

};

class Student_Details : public Person
{
    int roll;
    Department department;
public:
    Student_Details(){};
    Student_Details(string name,string birthday,int roll,Department department) : Person(name,birthday)
    {
        this->roll=roll;
        this->department=department;
    }
    void viewStudent()
    {
        viewPerson();
        department.view_Department();
        cout<<"Roll : "<<this->roll<<endl;
    }
};

class Teacher_Details : public Person //Inheritance
{
    int teacher_id;
    Department department;
public:
    Teacher_Details(){};
    Teacher_Details(string name,string birthday,int teacher_id,Department dept) : Person(name,birthday)
    {
        this->teacher_id=teacher_id;
         department=dept;
    }

};

class Society_member : public Student_Details
{
    string designation;
public:
    Society_member(){};
    Society_member(string name,string birthday,int roll,Department department,string deisgnation): Student_Details(name,birthday,roll,department)
    {
        this->designation=designation;
    }
    void view_memberInfo();

};
 void Society_member :: view_memberInfo()
    {
        cout<<"Society Member Info: "<<endl;
        viewStudent();
        cout<<"Designation : "<<this->designation<<endl;
    }
int main()
{
    Department department("CSE");
    Student_Details *students[15]=
    {
        new Student_Details("Saiful Alam ","18-11-1998",10708041,department),
        new Student_Details("Shimul hasan","04-12-1999",10708013,department),
        new Student_Details("Amir Hamza","10-02-1997",10508010,department),
        new Student_Details("Emran Hasan ","18-10-1998",10708041,department),
        new Student_Details("Alia Rahman","06-10-1999",10708013,department),
        new Student_Details("Tamanna","11-05-1997",10508010,department),
        new Student_Details(" Mahim Sezan","20-10-1998",10708041,department),
        new Student_Details("Tipu Sultan","04-10-1997",10708013,department),
        new Student_Details("Kawser Ahmed","10-12-1999",10508010,department),
        new Student_Details("Tanvir Ahmed","15-09-1999",10708041,department),
        new Student_Details("Mehedi Hasan","02-07-1998",10708013,department),
        new Student_Details("Sakib Mahmud","21-03-1997",10508010,department)
    };

    Teacher_Details *teachers[10]={new Teacher_Details("Kamal Hossain Chowdhury","11-04-1980",1,department),
        new Teacher_Details("Mahmudul Hasan Raju","03-05-1982",2,department),
        new Teacher_Details("Faisal Bin Abdul Aziz","09-02-1985",3,department),
        new Teacher_Details("Hasan Hafizur Rahman","23-05-1983",4,department),
        new Teacher_Details("Partha chakrobarthy","05-08-1984",5,department),
        new Teacher_Details("Eva","11-10-1990",6,department)
    };
    Society_member *members[5]={new Society_member("Dipto Brotho Das","10-10-1995",11408041,department,"GS"),
        new Society_member("Jawad Shafi","12-12-1996",11608015,department,"Member"),
        new Society_member("Kawser Ahmed Shafi","11-12-1997",11708015,department,"Member"),
        new Society_member("Mahim Sezan","04-09-1996",11508015,department,"Member"),
        new Society_member("Chadon","02-08-1998",11708015,department,"Member"),
    };
    cout<<"->Society Member Information : "<<endl;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        members[i]->viewStudent();
        cout<<endl;
    }
    return 0;
}

