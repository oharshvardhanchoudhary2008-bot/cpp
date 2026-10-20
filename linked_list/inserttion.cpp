// #include <bits/stdc++.h>
// using namespace std;
// struct node{
//     public:
//     int data ;
//     node* next ;
//     node(int value){
//         data=value;
//         next=nullptr;
//     }
// };

// node* createArrToLL(vector<int> &arr){
//     node*head=new node(arr[0]);
//     node*mover=head;
//     for(int i=1;i<arr.size();i++){
//         node*temp=new node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }

  

// // inert a head
// node* insertHead(int value,node *head){
//     node*temp=new node(value);//this is creating a new index which is made head so this is calles zeroth index;
//     temp->next=head;
//     return temp;
// }




// //inserting tail
// node * insertLastIndex(node*head,int value){
//     node* ptrOfLast= new node(value);
//     if(head==NULL)return ptrOfLast;
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=ptrOfLast;
//     return head;
// }




// //inster at kth position
// node* insertKthpos(node*head,int k,int value){
    
//     if(head==nullptr){
//         if(k==1) return new node(value);
//         else return NULL;
//     }
//     if(k==1)return insertHead( value, head);
//     node* temp=head;
//     node* insertind=new node(value);
//     node*privese=NULL;
//     int  count=0;
//     while(temp){
//         count++;
//         if(count==k){
//             insertind->next=temp;
//             privese->next=insertind;
//             return head;// this is when when value is insert at any position ;

//         }
//         privese=temp;
//         temp=temp->next;
//     }
//     if(count+1==k) return insertLastIndex(head, value);
//     return head;
// }



// //inserting a aliment before value
// node* insertBeforeX(node*head,int x,int value){
//     if(head==nullptr)return nullptr;
//     static node*temp=nullptr;
//     if(head->data==x){
//         node*temp=head->next;
//         head= insertHead( value, head);
//     }else{
//     node*temp=head->next;
//     }
//     node*privese=head;
//     while(temp){
//         if(temp->data==x){
//             privese->next=new node(value);// ye complex method se is liye kiya kyoki this is a new method withch i derive or "i don't wnat to create new poiter like case of inserthing at kth position ";
//             privese->next->next=temp;
//            // we dont go chack inserting value because inserting value is equal to target then one infinite loop is crearte;
//         }
//         cout<<"i am here";
//         privese=temp;
//         temp=temp->next;
//     }
//     return head;
   
// }


// int main(){
//     vector<int> arr={1,2,3,4,5,6,7,8,9};
//     node*head=nullptr;
//     node*temp;
//     //function call to store all vector
//     head=createArrToLL(arr);
//     temp=head;
//     int  value;
    

    
    
    
    
//     //insert a head;
//     cout<<"insert a head \n"<<"enter a number to insert  in LL";
//     cin>>value;
//     head=insertHead(value,head);
//     temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"\n \n \n ";




//     // for inserting last index
//     cout<<"enter the value to insert at last -->";
//     cin>>value;
//     head=insertLastIndex(head,value);
//     temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
 
 
 
//     //inserting at kth postion
//     int k;
//     cout<<"enther  which postion you want to insert-->";
//     cin>>k;
//     cout<<"enter th value to insert-->";
//     cin>>value;
//     cout<<endl;
//     head =insertKthpos(head, k,  value);
//     temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
 
 
//  //inserting a vaslue x before value ;]
//  int x;
//  cout<<"enter a target (x) to find it and a vlue insert it just first of it--> ";
//  cin>>x;
//  cout<<"\n enter value for complite this opertion -->";
//  cin>>value;
//  head=insertBeforeX(head,  x,  value);
//  temp=head;
//  while(temp){
//     cout<<temp->data<<"  ";
//     temp=temp->next;
//  }
 
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

struct node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = nullptr;
    }
};

node* createArrToLL(vector<int>& arr) {
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node* insertHead(int value, node* head) {
    node* temp = new node(value);
    temp->next = head;
    return temp;
}

node* insertLastIndex(node* head, int value) {
    node* ptrOfLast = new node(value);
    if (head == NULL) return ptrOfLast;
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = ptrOfLast;
    return head;
}

node* insertKthpos(node* head, int k, int value) {
    if (head == nullptr) {
        if (k == 1) return new node(value);
        else return NULL;
    }
    if (k == 1) return insertHead(value, head);
    node* temp = head;
    node* insertind = new node(value);
    node* previous = NULL;
    int count = 0;
    while (temp) {
        count++;
        if (count == k) {
            insertind->next = temp;
            previous->next = insertind;
            return head;
        }
        previous = temp;
        temp = temp->next;
    }
    if (count + 1 == k) return insertLastIndex(head, value);
    return head;
}

// FIX 1: removed 'node*' before temp inside if/else (was shadowing outer temp)
// FIX 2: changed temp->next->next to temp->next (was skipping nodes)
node* insertBeforeX(node* head, int x, int value) {
    if (head == nullptr) return nullptr;

    node* temp = nullptr;        // outer temp

    if (head->data == x) {
        temp = head->next;       // FIX 1: no 'node*' here
        head = insertHead(value, head);
    } else {
        temp = head->next;       // FIX 1: no 'node*' here
    }

    node* previous = head;
    while (temp) {
        if (temp->data == x) {
            previous->next = new node(value);
            previous->next->next = temp;
            temp = previous->next;
        }
        previous = temp;
        temp = temp->next;       // FIX 2: was temp->next->next
    }
    return head;
}

void printLL(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    node* head = nullptr;

    head = createArrToLL(arr);

    // Insert at head
    int value;
    cout << "Insert at head\nEnter a number: ";
    cin >> value;
    head = insertHead(value, head);
    printLL(head);

    // Insert at last
    cout << "Enter value to insert at last: ";
    cin >> value;
    head = insertLastIndex(head, value);
    printLL(head);

    // Insert at kth position
    int k;
    cout << "Enter position to insert: ";
    cin >> k;
    cout << "Enter value to insert: ";
    cin >> value;
    head = insertKthpos(head, k, value);
    printLL(head);

    // Insert before x
    int x;
    cout << "Enter target (x): ";
    cin >> x;
    cout << "Enter value to insert before x: ";
    cin >> value;
    head = insertBeforeX(head, x, value);
    printLL(head);

    return 0;
}
