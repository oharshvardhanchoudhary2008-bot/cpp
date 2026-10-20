// #include <iostream>
// class sender{
//     public:
//     std::string name;
//     int age;
//     sender(std::string n,int a){
//         name=n;
//         age=a;
//     };
//     sender(){
//         std::cout<<"I am sender class constructor"<<std::endl;
//     }
//     ~sender(){
//         std::cout<<"I am sender class destructor"<<std::endl;
//     }
// };
// class reciever:public sender{
//     public:
//     int rollno;//there name and age are inherent from sender
//     void printInfo(){
//         std::cout<<"name of reciever is-->"<<name<<"\n";
//         std::cout<<"age of reciever is-->"<<age<<"\n";
//         std::cout<<"rollno of reciever is-->"<<rollno<<"\n";
//     }
//     reciever(std::string n,int a,int r):sender(n,a){
//         rollno=r;
//     }
//     ~reciever(){
//         std::cout<<"I am destroyer of reciever class"<<std::endl;
//     }
//     reciever(){
//         std::cout<<"I am constructor of recievet class\n";
//     }
// };
// int main(){
//     // sender r1;
//     // reciever r2;
//     // r1.name="harsh";////there we can see that there only same name properties are made value doesn't pass ;
//     // r1.age=20;
//     // r2.rollno=123;
//     // r2.printInfo();
//     reciever r1;
//     r1.name="harsh";
//     r1.age=20;
//     r1.rollno=123;
//     r1.printInfo();
//     return 0;
// }








#include <iostream>
class student1{
    protected:
    std::string name;
    int age;
    student1(std::string n,int a){
        name=n;
        age=a;
    };
    public:
    student1(){
        std::cout<<"I am student1 class constructor"<<std::endl;
    }
    ~student1(){
        std::cout<<"I am student1 class destructor"<<std::endl;
    }
};
class student2: public student1 {
    public:
    int rollno;//there name and age are inherent from sender
    void printInfo(){
        std::cout<<"name of student2 is-->"<<name<<"\n";
        std::cout<<"age of student2 is-->"<<age<<"\n";
        std::cout<<"rollno of student2 is-->"<<rollno<<"\n";
    }
    student2(std::string n,int a,int r):student1(n,a){
        rollno=r;
    }
    ~student2(){
        std::cout<<"I am destroyer of student2 class"<<std::endl;
    }
    student2(){
        std::cout<<"I am constructor of student2 class\n";
    }
};
int main(){ 
    student2 s2;
   /* s1.name="harsh";//there we use portected access modifire and we can access the name and age properties of student1 class in student2 class because of protected access modifire;
    student2 s2;/////////but we can't access the name and age properties of student1 class in main function because of protected access modifire;
    s2.name="harsh";//there we use portected access modifire and we can access the name and age properties of student1 class in student2 class because of protected access modifire;
    s2.age=20;*/
    s2.rollno=123;
    s2.printInfo();
    return 0;
}