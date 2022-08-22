#include<iostream>
#include<string.h>
using namespace std;
// employee information

class Emp
{
	private :
	int emp_id;
	char emp_name[50];
	int emp_age;
	char emp_role[50];
	char emp_email[50];
	char emp_city[50];
	int emp_ex_year;
	static char emp_com_name[50];
	
	public:
		void setdata()
		{
	cout << "--------enter employee information-----------" << endl;
	cout << "employree id : ";                cin >> this->emp_id; 
	cout << "employree name : ";              cin >> this->emp_name; 
	cout << "employree age : ";               cin >> this->emp_age; 
	cout << "employree role : ";              cin >> this->emp_role; 
	cout << "employree email : ";             cin >> this->emp_email; 
	cout << "employree city name : ";         cin >> this->emp_city; 
	cout << "employree experience year : ";   cin >> this->emp_ex_year; 
	//cout << "employree company name : ";      cin >> this->emp_com_name; 
	cout << endl;
		}
		
		void getdata()
		{
	cout << "-------- employee information-----------" << endl;	
	cout << "employree id : " << emp_id << endl
	     << "employree name : " << emp_name << endl
	     << "employree age : "  << emp_age << endl
	     << "employree role : " << emp_role << endl
	     << "employree email : " << emp_email << endl
	     << "employree city name : " << emp_city << endl
	     << "employree experience year : " << emp_ex_year << endl
	     << "employree company name : " <<  emp_com_name << endl;	
		}
		
		
		static void chage_com_name()
		{
			strcpy(emp_com_name,"tI com");
		}
		
};

	char Emp:: emp_com_name[50] = "IT com";
	
int main()
{
	Emp::chage_com_name();
	Emp s[100];
	int n,i;
	
    cout << "enter employee number::";
    cin >> n;
    
    for(i=0;i<n;i++)
    {
      s[i].setdata();	
	}

    for(i=0;i<n;i++)
    {
      s[i].getdata();	
	}	

return 0;	
}
