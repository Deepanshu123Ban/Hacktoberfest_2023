#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

struct Node{
int data;
struct Node *next;
};
struct Node *head;

// functions
void create(int);
void display();

int main()
{
	// Variable Decleration
  int n,value;

  // number of node in Linklist
  cout<<"Enter n node in linklist ";
  cin>>n;

  // function for create Linklist
  create(n);

  // function dispaly for display original Linklist and reverse Linklist
  display();
}


// create function
void create(int n)
{
    struct Node *temp,*fnode;
    int value;
    head=(struct Node*)malloc(sizeof(struct Node));

    if(head==NULL)
    {
        cout<<"Empty element";
    }else{
        cout<<"Enter node1 ";
        cin>>value;
        head->data=value;
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
            cin>>value;
            fnode->data=value;
            fnode->next=NULL;
            temp->next=fnode;
            temp=temp->next;
        }
    }
    }
}


// display function
void display()
{
    struct Node *temp;
    vector<int>v;
    temp=head;

    if(head==NULL)
    {
        cout<<"Empty Linklist";
    }
    else{
    	cout<<"\nOutput\n";
	    cout<<"Original Linklist\n";
        while(temp!=NULL)
        {
	        cout<<temp->data<<" ";
            v.push_back(temp->data);
            temp=temp->next;
        }
        cout<<"\n";

        int index=v.size()-1;
        temp=head;
        while(temp!=NULL)
        {
	        temp->data=v[index];
	        index--;
	        temp=temp->next;
        }

        temp=head;
        cout<<"Reverse Linklist\n";
        while(temp!=NULL)
        {
	        cout<<temp->data<<" ";
	        temp=temp->next;
        }
    }
}
