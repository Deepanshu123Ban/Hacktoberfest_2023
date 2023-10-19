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
void display1();

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
  
  // function display1 for display remove node LinkList 
  display1();
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
    int value;
    temp=head;
    if(head==NULL)
    {
        cout<<"Empty Linklist";
    }
    else{
    	cout<<"\nEnter node for remove in LinkList ";
    	cin>>value;
    	cout<<"output\n";
    	cout<<"original LinkList\n";
        while(temp!=NULL)
        {
        	cout<<temp->data<<" ";
	        if(temp->data!=value)
	        {
            v.push_back(temp->data);
            }
            temp=temp->next;
        }
        int add=0;
        temp=head;
        while(temp!=NULL)
        {
        	temp->data=v[add];
        	add++;
        	if(add==v.size())
        	{
        		temp->next=NULL;
        		return;
			}
        	temp=temp->next;
		}
    }
}

void display1()
{
    struct Node *temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"Empty Linklist";
    }
    else{
    	cout<<"\n";
    	cout<<"Remove node LinkList\n";
        while(temp!=NULL)
        {
	        cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
