#include <bits/stdc++.h>
using namespace std;
int main(){

        //vector contener of stl libeary
        vector <int> vec={1,2,3,4,56,6};
        vec.emplace_back(12);
        vec.insert(vec.begin()+3,12);
        vec.erase(vec.begin());
        for(vector<int>::iterator it=vec.begin();it!=vec.end();it++){
            cout<<*it<<"<-~->";
        }
        cout<<"\n";
        vec.erase(vec.begin()+2,vec.end());
        for(auto it=vec.begin();it!=vec.end();it++){
            cout<<*it<<"<-~->";
        }
        cout<<"\n";
        //vector insert and copy
        vector<int> vec_2={1,2,3,4,5};
        vector<int>vec_1(vec_2);//vector copy * it only happen only at decleration time if i write "vec(vec_2)"--> this give error because vector declear in the starting 
        vec.insert(vec.begin(),vec_2.begin(),vec.end()); 
        for(auto it:vec){
            cout<<it<<"<-~->";
        }
        cout<<"\nvector is complit at this line"<<endl;
        //list--> it is similer as vector but it have only one extra function is ls.push/emplce.front(value);--> it have very fast compare to iterate in vector for zeroth index

        list<int> ls;
        ls.emplace_front(123);
        ls.push_back(12);
        //less all thing same as vector
        for(auto it:ls){
            cout<<it<<"<-~->";
        }
        cout<<endl<<"using pop_front in list(ls)"<<endl;
        ls.pop_front();
        for(list<int>::iterator it=ls.begin();it!=ls.end();it++){
            cout<<*it<<"<-~->";
        }
        cout<<endl;

        
        
        // deque  --> no change same as list       
        deque<int> dq={1,2,3};
        dq.push_front(4);
        dq.pop_front();
        for(deque<int>::iterator it=dq.begin();it != dq.end();it++){
            cout<<*it<<"<-~->";
        }
        //all thing are same as list



        //Stack--LIFO-last in fist go -->last me jo aayega vo first jayega
        stack<int>st;//mainly 3 things are in push,pop,top;
        st.push(12);//we are only use last value and it have not any index system so we can't use any valuse except last value 
        st.emplace(10);
        st.push(11);
        cout<<st.top()<<"after pop last number we can use next top number "<<endl;
        st.pop();
        cout<<"this is number which apear after pop-->"<<st.top()<<endl;
        // se can use swap and check it if empty or not;
        stack<int> st_2;
        cout<<"empty hai st_2 by check st_2.empty()-->(value is)  - " << st_2.empty()<<endl;
        st_2.swap(st); 
    
    


        //??note__>sabse last wala element array me fist position par hota hai or use hi top position bhi kahate hai




        //Queue-->FIFO-->first come and fist out--> phale aao or  phale jaao
        queue<int> q;//same it have only main 3 operater posh, pop,back-last value,front--main hai ye
        q.push(12);
        q.emplace(10);// isme q.top nahi hota hai
        q.pop();
        q.push(111);
        q.push(13);
        cout<<"we can print last value by q.back()-->"<<q.back()<<endl;
        cout<<"main we use queue to print front value by q.front()-->"<<q.front()<<endl;
        
        
        //priority queue-->pura same hai but ye gate huai sequance me store karta hai matlab sabse phle number par sabse bada rahegba
        priority_queue<int> pq;
        pq.push(5);//{5};
        pq.push(2);//{5,2}
        pq.push(10);//{10,5,2}
        pq.pop();//{5,2}
        cout<<"yaha priority queue ke karan array sorted hai diending order me or top par sabse bada malab ghata karam"<<pq.top();//-->5
        cout<<endl;
        //if sequence chane karna ho top par sabse choti value ke liye syntax
        priority_queue<int,vector<int>,greater<int>>pq_change_sequence;
        pq_change_sequence.push(5);//{5};
        pq_change_sequence.push(2);//{2,5}
        pq_change_sequence.push(10);//{2,5,10}
        pq_change_sequence.pop();//{2,5}
        


        //set-->only unique and sorted ordered;
        set<int> s;
        s.insert(3);//isme push nahi hota hai isme insert hota hai jiska matlab dalna 
        s.emplace(4);//{3,4}
        s.insert(3);//{3,4}
        s.insert(1);//{1,3,4}
        s.insert(1);//{1,3 4}
        auto it1=s.find(3);//it give return iterater of the value if it is present in set
        auto it2=s.find(10);//it not find in set so it give iterater of s.end()--matlab addrese of right of last index
        // all other thing like erase,begin,rbegin,end,size,swap etc
        s.lower_bound(3);
        s.upper_bound(3);


        //multiset-->it is only sorted not unique
        multiset<int>ms;
        //all thing same but it have multipuly dublicate value so if are erase a number then all number are erase and other operation bhi same work karega
        //ms.find()-->only first wale ki value dega

        //unordered_set-->only unique not sorted
        unordered_set<int>unos;
        //all thing same 
        //but lower bound or uper bound operater work nahi karega;

        //note__>map or unordered map or hashing bhi stl-libeary me hi aata hai


        return 0;
}