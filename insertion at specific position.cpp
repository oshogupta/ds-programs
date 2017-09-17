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
     void pos_insert();
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

void link_list::pos_insert(){
    int pos;
    cout<<"\nEnter position\n";
    cin>>pos;
    int c=0;
    node *n,*temp,*n1;
    n=start;
    while(1){
        c++;
        if(c==pos){
            n1=new node;
            int no;
            cout<<"\nEnter the number to be added\n";
            cin>>no;
            n1->info=no;
            n1->next=n;
            temp->next=n1;
            break;
        }
        if(c>pos) break;
     temp=n;
     n=n->next;
    }
}

int main(){
int status;
link_list obj;
status=obj.create_nodes();
if(status==1) return 0;
obj.pos_insert();
obj.display();
return 0;
}
