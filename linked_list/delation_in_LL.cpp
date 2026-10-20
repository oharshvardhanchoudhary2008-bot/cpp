#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data ;
    node* next;
    node(int value){
        data=value;
        next=nullptr;
    }
};
node* convertArrToLL(vector <int>&arr){
    node*head=new node(arr[0]);
    node*mover=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}


//////remove head 
node*deletHead(node*head){
    // if head is null then return null;
    if(head==NULL)return head;//return NULL; bhi likh sakte hai kyoki head pointer ko null karne ke baad uska value null ho jayega to usko return karne me koi problem nahi hogi;
    //it is same as (head==nullptr) return head; bhi likh sakte hai kyoki nullptr bhi null ke barabar hota hai;
    node*temp=head;
    head=head->next;
    free(temp);
    //ya fir delet temp; bhi likh sakte hai kyoki temp pointer hai or temp pointer ko free karne ke baad uska value null ho jayega to usko delet karne me koi problem nahi hogi;
    return head;
}

//remove tail
void deletTail(node*head){
    if(head==NULL)return ;//if head is null then return;
    node*temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    free(temp->next);

    temp->next=nullptr;
    return ;
}


// remove kth node /(|k-1|)index
node* removeKthnode(node*head,int k){
    if(head==NULL)return head;
    if(k== 1){
        //this means we want to remove head 
        node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    // jab jo index delet karna hai wo head na ho 
    int count=0;
    node*temp=head;
    node*privese=NULL;
    while (temp != nullptr) {
      count++;
      if (count == k) {
        privese->next = temp->next;
        delete temp;
        break;
      }
      privese=temp;
      temp=temp->next;
    }
    return head;
}


//remove value from linkes lisr(LL)
node* removeValue(node*head,int value){
    if(head==nullptr)return NULL;
    if(head->data==value){
        return deletHead(head);
    }
    node*temp=head->next,*privese=NULL;
    while(temp){
        if(temp->data==value){
            privese->next=temp->next;
            free(temp);
            temp=privese;
        }
        privese=temp;
        temp=temp->next;
    }
    return head;
}
int main(){
    vector <int>arr={1,2,3,4,5};
    node * head=convertArrToLL(arr);
    //delet head
    head=deletHead(head);
    cout<<"after delet head the linked list is \n";
    node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n \n \n after delet tail the linked list is \n";
    deletTail(head);
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //remove kth node /index
    cout<<"\n \n \n after delet kth node the linked list is \n";
    head=removeKthnode(head,3);
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //remove value it is happen by linear search algorithm
    int value;
    std::cin>>value;
    head=removeValue(head,value);
     temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}