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
    void sorting();
    void display();
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
void link_list::sorting(){
node *t,*s;
t=start;
while(t!=NULL){
    s=t->next;
    while(s!=NULL){
        if((t->info)>(s->info)){
            int temp=t->info;
            t->info=s->info;
            s->info=temp;
        }
        s=s->next;
    }
t=t->next;
}
}


int main(){
int status;
link_list obj;
status=obj.create_nodes();
obj.sorting();
if(status==1) return 0;
obj.display();
return 0;
}
