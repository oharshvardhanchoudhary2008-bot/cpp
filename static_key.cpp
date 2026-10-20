#include <iostream>
//////code of static key use in function
// void function1(){
//     static int count=0;//static variable
//     count++;
//     std::cout<<"function1 is called "<<count<<" times\n";
// }
// int main(){
//     function1();
//     function1();
//     function1();
//     return 0;
// }

//////code of static key use in class
class student{
    public:
    static int count;
    void countIncrease(){
        count++;
    }
};
///importent point about static variable is that it is shared by all the objects of the class and it is not associated with any object of the class so we have to initialize it outside the class using scope
int student::count=0;//we have to initialize the static variable outside the class because it is shared by all the objects of the class and it is not associated with any object of the class so we have to initialize it outside the class using scope resolution operator(::) and we have to use the class name to access the static variable because it is not associated with any object of the class and it is shared by all the objects of the class so we have to use the class name to access it.
int main(){
    student s1;
    s1.countIncrease();
    std::cout<<"count is-->"<<s1.count<<"it is print by s1.count\n";
    student s2;
    s2.countIncrease();
    std::cout<<"count is-->"<<s2.count<<"it is print by s2.count\n";
    std::cout<<"cosunt is-->"<<s1.count<<"it is print by student s1 after use s2.countIncrease() \n";
    return 0;
}


///code of static object
int main(){

    if(1){
        student s1;//non static object//yaha "if" chala fir constrater aya "if "katam distracter aya

    }
    if(1){//static object
        static student s2;//static object//yaha "if" chala fir constrater aya "if "katam distracter nahi aya kyuki static object ka life time pura program ke liye hota hai aur wo memory me tab tak rahta hai jab tak program chal raha hota hai

    }
    s2.countIncrease();//yaha error aayega kyoki static to hai par scope to local hai
    return 0;
}