/*#include <iostream>
#include <vector>
// using namespace std;
struct node{//we don't need to useing namespace std  for struct; 
    public:
    int data;
    node*next;
    // node(int value,node *pointer){
    //     data=value;
    //     next=pointer;
    // }
    node(int value){
        data=value;
        next=nullptr;
    }
    
} ;
node* convertArrToLL(const std::vector<int>&arr){
        node*head=new node(arr[0]);
        node*mover=head;//mover is the pointer which will move through the linked list and add new nodes to it;
        for(int i=1;i<arr.size();i++){
            node* temp=new node(arr[i]);//this part crate(by constracter call) a new node matlab naya object banaya hai jo arr[i] ko store karta hai or ISKA POINTER null pointer ko indicate karta hai by constracter;
            mover->next=temp;//this part is to connect the new node to the linked list by making the next pointer of the current node (mover) point to the new node;
            //above two lines are create a new index of LL and mover->
            mover=temp;
        }
        return head;
    }
int main(){
    // node a=node(10,NULL);
    // node*p=new node(20,nullptr);
    // std::cout<<p->data<<"is is print by p->data which are same as *(p).data"<<std::endl;
    // std::cout<<a.data<<"is is print by a.data"<<std::endl;
    std::vector <int> arr={1,23,3,5,3241,37};
    node *head = convertArrToLL(arr);
    node * temp=head;
    while(temp){
        std::cout<<temp->data<<" ";//this part is to print the data of each node in the linked list by traversing it using a temporary pointer (temp) that starts at the head of the list and moves to the next node until it reaches the end (nullptr).
        temp=temp->next;//yaha temp ak pointer hai only pointter not a object so we can use value of the pointer of which v alue which it  is pointing  by temp->data
    }
    return 0;
}

*/


///////ab niche wala final code hai jo sab sahi samjhane ke baad likha hai 
#include <iostream>
#include <vector>
class node{
    public:
    int data;
    node*next;//ye pointer hai jika data type node hai kyoki ye class "node" ko poinnte karta hai or class khud me ak data type hota hai;
    node(int value){
        data =value;
        next=nullptr;
    }
};
//this function is chack the target is are present or not in the linked list and return true if target is present otherwise return false;
bool serachInLL(node*head,int target){
    node* temp=head;
    while(temp!=nullptr){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
/* ye head pointer return karega is liye*/   node*  convertArrToLL(std::vector<int>&arr){
        node* head=new node(arr[0]);
        node*mover=head;
        for(int i=1;i<arr.size();i++){
            node*temp=new node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
}
int main(){
    int n;
    std::cout<<"enter the size of the array\n";
    std::cin>>n;
    std::vector<int>arr(n);
    std::cout<<"enter the elements of the array\n";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    node*head=convertArrToLL(arr);
    node*temp=head;
    while(temp){//while(temp!=nullptr) bhi likh sakte hai kyoki temp jab nullptr ho jayega to loop stop ho jayega;
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }


    //this par t is to check the target is present in the linked list or not;
    int target;
    std::cout<<"\n \n \n  enter the target ehich you go to find in the linked list\n";
    std::cin>>target;
    if(serachInLL(head,target)){
        std::cout<<"target is present in the linked list\n";
    }
    else{
        std::cout<<"target is not present in the linked list\n";
    }
    return 0;
}