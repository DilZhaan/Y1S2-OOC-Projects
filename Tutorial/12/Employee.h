//Base class
class Employee{
    protected:
        int empNo;
        char* name;
        char* designation;
        double basicSalary;

    public:
        //Constructor
        Employee(int pempNo, char pname[], char pdesignation[], double pbasicSalary);
        //Declare methods
        void display();
        virtual double  calcNetSalary(){};
};
class AcademicStaff: public Employee{
    protected:
        double allowance;

    public:
        //Constructor
        AcademicStaff(int pempNo, char pname[], char pdesignation[], double pbasicSalary, double pallowance);

        //Declare Methods
        void display();
        double  calcNetSalary();
};
class NonAcademic: public Employee{
    protected:
        //Declare the variables
        double otRate;
        double otHours;

    public:
        //Constructor
        NonAcademic(int pempNo, char pname[], char pdesignation[], double pbasicSalary, double potRate,float potHours);

        //Declare Methods
        void display();
        double  calcNetSalary();
};
