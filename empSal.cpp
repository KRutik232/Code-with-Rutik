//Write a C++ program to implement a class called Employee that has private member variables for name,
// employee ID, and salary. Include member functions to calculate and set salary based on employee performance.

#include<iostream>
using namespace std;
class Employee
{
   string name;
   int id;
   double salary;
   double increment;
   public:
   Employee(string & n,int i,double s)
   {
    name=n;
    id=i;
    salary=s;
   }
   int totalSal(float r)
   {
      if(r<=2.5)
      {
         cout<<"Your salary is RS "<<salary<<" only with no increment\n";
      }
      else if(r>2.5 && r<=3.5)
      {
         increment=(salary*40)/100;
         cout<<"Your salary is RS "<<salary+increment<<" only with 40 percent increment\n";
      }
      else 
      {
        increment=(salary*60)/100;
         cout<<"Your salary is RS "<<salary+increment<<" only with 60 percent increment\n";
      }
   }
};
int main()
{
    string na;
   float rating;
   cout<<"Name of employ is \n";
   cin>>na;
   cout<<"employee performance rating \n";
   cin>>rating;
   Employee e(na,48,97000.587);
   e.totalSal(rating);
}