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
     void end_insertion();
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

void link_list::end_insertion(){
node *temp=start;
node *n;
//node *t;
    n=new node;
    int num;
    cout<<endl<<"Enter number"<<endl;
    cin>>num;
    n->info=num;
    n->next=NULL;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
delete(temp);
//return 1;
}

int main(){
int status;
link_list obj;
status=obj.create_nodes();
if(status==1) return 0;
obj.end_insertion();
obj.display();
return 0;
}
