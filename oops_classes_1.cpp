#include <iostream>
class teachers{
    private:
    double salary;
    public:
    std::string name;
    std::string dept;
    std::string subject;
    std::string gender;
    std::string gread;
    void setSalary(double s){
        salary =s;
    }
    double getSalary(){
        return salary;
    }// we can use multiple constructor in class and we can also use default constructor and parameterized constructor]
    teachers(){//but if we use default constructor then we have to give value in it otherwise it will give garbage value
        //one more thing that we use multiple constructor but all have different parameters this paramiters are use to identify which constructor we want to call
        gread="A+";
    }
    teachers(std::string n,std::string d,double s){
        name =n; 
        dept =d;
        salary=s;
    }
};


//student class
class student{
    public:
    std::string name;
    std::string dept;
    double cgpa;
    void printInfo(){
        std::cout<<"name of student is-->"<<name<<"\n";
        std::cout<<"department of student is-->"<<dept<<"\n";
        std::cout<<"cgpa of student is-->"<<cgpa<<"\n";
    }
    student(std::string name,std:: string dept,double cgpa){
        this->name=name;//this pointer is use to refer to the current object and it is use to access the members of the current object
        this->dept=dept;
        this->cgpa=cgpa;
    }
    student(student &s){//copy constructer}
        this->name=s.name;
        dept=s.dept;
        cgpa=s.cgpa;
    }
};
int main(){
    teachers T1;
    T1.name="harh";
    T1.setSalary(7200000);
    teachers T2("harsh","cse",7200000);
    std::cout<<"this is the salary of teacher"<<T1.name<<"is-->"<<T1.getSalary()<<"\n";
    
        //copy constracter--> it is use to copy the value of one object to another object and it is use when we want to create a new object with the same value as an existing object
        teachers T3(T2);//copy constructor
        std::cout<<"getInfo of T3-->";
       





        //this is for student class
        student s1("harsh","cse",9.5);
        s1.printInfo();
        student s2(s1);//copy constructor
        s2.printInfo();
        return 0;
}