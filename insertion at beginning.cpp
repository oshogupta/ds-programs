#include<iostream>
using namespace std;

class link_list{
struct node{
int info;
struct node *next;
}*start;
public:
    link_list(){
    start=NULL;
    }
    int create_nodes();
    void display();
     int beg_insertion();
};

int link_list::create_nodes(){
    node *n,*t;
    int num=1;
    t=n=NULL;
    while(1){
        cout<<"enter Number: ";
        cin>>num;
        if(num==(-999)) break;
        else{
            n=new node;
            if(n==NULL){cout<<"Overflow";return 1;}
            n->info=num;
            if(start==NULL) start=n;
            else{t->next=n;}
            t=n;
        }
    }
     n->next=NULL;
}
void link_list::display(){
node *temp=start;
while(temp!=NULL){
    cout<<temp->info;
    if(temp->next!=NULL) cout<<" ";
    temp=temp->next;
}
delete(temp);
}
int link_list::beg_insertion(){
node *n;
n=new node;
if(n==NULL) {cout<<"Overflow";return 1;}
int num;
cout<<"\nEnter the number you want to insert at beg."<<endl;
cin>>num;
n->info=num;
n->next=start;
start=n;
}


int main(){
int status;
link_list obj;
status=obj.create_nodes();
if(status==1) return 0;
int t;
t=obj.beg_insertion();
if(t==1) return 0;
obj.display();
return 0;
}
