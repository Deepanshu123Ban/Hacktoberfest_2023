#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

/* In thise code use vector (vector<int>v) for merge two LinkList in one form */

struct Node{
int data;
int value;
struct Node *next;
struct Node *next1;
};
struct Node *head;
struct Node *head1;
// functions
void create(int);
void display();
void create1(int);
void display1();

int main()
{
	// Variable Decleration
  int n,m,value;

  // first LinkList input
  // number of node in Linklist1
  cout<<"Enter n node in linklist ";
  cin>>n;
  
  // function for create Linklist1
  create(n);
  
  // second LinkList input
  // number of node in Linklist2
  cout<<"Enter m node in linklist ";
  cin>>m;
  
  // function for create Linklist2
  create1(m);
  
  // function dispaly for display merge LinkList
  display();
}


// create function for LinkList1
void create(int n)
{
    struct Node *temp,*fnode;
    int first;
    head=(struct Node*)malloc(sizeof(struct Node));

    if(head==NULL)
    {
        cout<<"Empty element";
    }else{
        cout<<"Enter node1 ";
        cin>>first;
        head->data=first;
        head->next=NULL;
        temp=head;
    for(int i=1;i<n;i++)
    {
        fnode=(struct Node*)malloc(sizeof(struct Node));
        if(fnode==NULL)
        {
            cout<<"No memory allocated";
        }else{
            cout<<"Enter node"<<i+1<<" ";
            cin>>first;
            fnode->data=first;
            fnode->next=NULL;
            temp->next=fnode;
            temp=temp->next;
        }
    }
    }
}

// create1 function for LinkList2
void create1(int m)
{
    struct Node *temp1,*fnode1;
    int second;
    head1=(struct Node*)malloc(sizeof(struct Node));

    if(head1==NULL)
    {
        cout<<"Empty element";
    }else{
        cout<<"Enter node1 ";
        cin>>second;
        head1->value=second;
        head1->next1=NULL;
        temp1=head1;
    for(int i=1;i<m;i++)
    {
        fnode1=(struct Node*)malloc(sizeof(struct Node));
        if(fnode1==NULL)
        {
            cout<<"No memory allocated";
        }else{
            cout<<"Enter node"<<i+1<<" ";
            cin>>second;
            fnode1->value=second;
            fnode1->next1=NULL;
            temp1->next1=fnode1;
            temp1=temp1->next1;
        }
    }
    }
}

// display function two LinkList merge in one as vector form (vector<int>v)
void display()
{
    struct Node *temp;
    struct Node *temp1;
    vector<int>v;
    temp=head;
    temp1=head1;
    if(head==NULL && head1==NULL)
    {
        cout<<"Empty Linklist";
    }
    else{
        while(temp!=NULL)
        {
        	v.push_back(temp->data);
            temp=temp->next;
        }
        
        while(temp1!=NULL)
        {
	        v.push_back(temp1->value);
            temp1=temp1->next1;
        }
    }
    
    cout<<"\noutput (vector<int>v)\n";
    cout<<"two LinkList merge in one in vector form (vector<int>v)\n";
    for(int i=0;i<v.size();i++)
    {
    	cout<<v[i]<<" ";
	}
}
