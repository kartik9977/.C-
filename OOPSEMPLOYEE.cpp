#include<iostream>
#include<conio.h>
#include<stdio.h>
 class employee
    {
        private:
        int emId;
        char emName[50];
        char emDsn[50];
        float IT,TA,DA,HRA,temp;
        float grSalary,netSalary,basSalary;

        public:
        employee()
        {
         cout<<"Enter the employee ID :";
            cin>>emId;
         cout<<"Enter the employee Name :";
            cin>>emName;
         cout<<"Enter the employee Designation :";
            cin>>emDsn;
         cout<<"Enter the employee bas salary:";
            cin>>basSalary;

            IT = 0.1;
            TA = 100;
            DA = 300;
            HRA = 500;

            grSalary = basSalary+TA+DA+HRA;
            temp = grSalary*IT;
            netSalary = grSalary - temp;
        }
            void display()
            {
                System.out.pritln("")
            }
    };
        void employee::display()
        {
        
         cout<<"The ID of employee is :"<<emId<<endl;
         cout<<"The ID of employee Name :"<<emName<<endl;
         cout<<"The ID of employee Designation :"<<emDsn<<endl;
         cout<<"The ID of employee  Gross salary is :"<<grSalary<<endl;
         cout<<"The ID of employee is Base Salary :"<<basSalary<<endl;
         cout<<"The ID of employee is Net Salary :"<<netSalary<<endl;
        }
    
        int main()
        {
            employee kartik;
            kartik.display();
            return 0;
        }

