#include<iostream>
using namespace std;

#define f(x) ( (x*x) - x + 1 )

class LinkedList{
  struct node{
    int coff;
    int exp;
    struct node *next;
}*start;
public:
LinkedList(){start=NULL;}
void createNodes();
void display();
};

void LinkedList::createNodes(){
    node *temp,*n;
    temp=n=NULL;
    while(1){
      int coef;
      cout<<"\nEnter the value of x\n";
      cin>>coef;
      if(coef==-1) break;
      int value;
      value=f(coef);
      //cout<<"\n\n\n Value is "<<value<<endl;
      n=new node;
      n->coff=coef;
      n->exp=value;
      if(start==NULL) start=n;
      else{
        temp->next=n;
      }
    temp=n;
    }
    n->next=NULL;
}
void LinkedList::display(){
  node *temp;
  temp=start;
  while(temp!=NULL){
    cout<<temp->coff<<" "<<temp->exp<<endl;
    temp=temp->next;
  }
}
int main(){
  LinkedList ob;
  ob.createNodes();
  ob.display();
}
