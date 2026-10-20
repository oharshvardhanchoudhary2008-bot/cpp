#include <iostream> 
class Student {
protected:
  std::string id;

private:
  std::string idpassward;

public:
  std::string name;
  std::string dept;
  int rollno;
  ///functiopn overloading
  void function1(int a){std::cout
                        << "hello I am function1 with integer parameter I am making for function overloading\nn";
  }
   void function1(double a){
    std::cout
                        << "hello I am function1 with double parameter I am making for function overloading\n";
  }                 
  ///function overriding
  void function2(int a){
    std::cout<<"hello I am function2 of student class(parent class) making for function overriding \n";
  } 
  ///virtual funciton
  virtual void function3(int a){
    std::cout<<"hello I am function3 of student class(parent class) making for virtual function\n";
  }
};
class Teacher:public Student{
    public:
    void function2(int a){
        std::cout<<"hello I am function2 of teacher class(child class) and parent class is student class and I am making for funtion overreding\n";
    }
    void function3(int a){
        std::cout<<"hello I am function3 of teacher class(child class) and parent class is student class and I am making for virtual function\n";
      std::cout<<"virtual function same as function overriding but it is used when we have pointer of parent class and object of child class and we want to call the function of child class using pointer of parent class then we have to make that function virtual in parent class\n";
      }
};
 class shape{
    public://this class is a abstract class because it has pure virtual function
    virtual void area()=0;//pure virtual function
    void area(int a){
        std::cout<<"area of square is-->"<<a*a<<"\n";
    }
};
int main(){
    Teacher t1;
    t1.name="harsh";
    t1.function2(10);
    t1.function1(10);
    t1.function1(10.5);
    t1.function3(10);
    // shape s1;///this thing is not possible because shape class is an abstract class and we can't create object of abstract class but we can create pointer of abstract class and we can point that pointer to the object of child class and we can call the function of child class using pointer of parent class because of virtual function
    // s1.area(5);
    // shape* s1;//we can create pointer of abstract class
    // s1= new Teacher;//we can point that pointer to the object of child class
    // s1->area(5);//we can call the function of child class using pointer of parent class because of virtual function
    //  delete s1;//we have to delete the pointer of abstract class because we have used new operator to create object of child class and we have
    return 0;
}