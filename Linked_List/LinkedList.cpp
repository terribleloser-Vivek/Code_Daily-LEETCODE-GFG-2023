#include<iostream.h>
#include<conio.h>
#include<process.h>


class Linked_List
{
//Structure declaration for the node
struct node
{
int info;
struct node *link;
};

//private structure variable declared
struct node *start;
public:
Linked_List()//Constructor defined
{
start = NULL;
}

//public fucntion declared
void Create_List(int);
void AddAtBeg(int);
void AddAfter(int,int);
void Delete();
void Count();
void Search(int);
void Display();
void Reverse();
};

//---------------------------------------------------------------------------------------

//This function will create a new linked list of elements
void Linked_List::Create_List(int data)
{
struct node *q,*tmp;
//New node is created with new operator
tmp= (struct node *)new(struct node);
tmp->info=data;
tmp->link=NULL;
if (start==NULL) /*If list is empty */
start=tmp;
else
{ /*Element inserted at the end */
q=start;
while(q->link!=NULL)
q=q->link;
q-> link=tmp;
}
}/*End of create_list()*/

//---------------------------------------------------------------------------------------

//following function will add new element at the beginning
void Linked_List::AddAtBeg(int data)
{
struct node *tmp;
tmp=(struct node*)new(struct node);
tmp->info=data;
tmp->link=start;
start=tmp;
}/*End of addatbeg()*/

//---------------------------------------------------------------------------------------

//This function will add new element at any specified position
void Linked_List::AddAfter(int data,int pos)
{
LINKED LIST 103
struct node *tmp,*q;
int i;
q=start;
//Finding the position in the linked list to insert
for(i=0;i<pos-1;i++)
{
q=q->link;
if(q==NULL)
{
cout<<“\n\nThere are less than “<<pos<<” elements”;
getch();
return;
}
}/*End of for*/
tmp=(struct node*)new(struct node);
tmp->link=q->link;
tmp->info=data;
q->link=tmp;
}/*End of addafter()*/

//---------------------------------------------------------------------------------------


//Funtion to delete an element from the list
void Linked_List::Delete()
{
struct node *tmp,*q;
int data;
if(start==NULL)
{
cout<<“\n\nList is empty”;
getch();
return;
}
cout<<“\n\nEnter the element for deletion : ”;
cin>>data;
if(start->info == data)
{
tmp=start;
start=start->link; //First element deleted
delete(tmp);
return;
}
q=start;
while(q->link->link != NULL)
{
if(q->link->info==data) //Element deleted in between
{
tmp=q->link;
q->link=tmp->link;
delete(tmp);
return;
}
q=q->link;
}/*End of while */
if(q->link->info==data) //Last element deleted
{
tmp=q->link;
delete(tmp);
q->link=NULL;
return;
}
cout<<“\n\nElement “<<data<<” not found”;
getch();
}/*End of del()*/

//---------------------------------------------------------------------------------------


void Linked_List::Display()
{
struct node *q;
if(start == NULL)
{
cout<<“\n\nList is empty”;
return;
}
q=start;
cout<<“\n\nList is : ”;
while(q!=NULL)
{
cout<<q->info;
q=q->link;
}
cout<<“\n”;
getch();
}/*End of display() */

//---------------------------------------------------------------------------------------

void Linked_List::Count()
{
struct node *q=start;
int cnt=0;
while(q!=NULL)
{
q=q->link;
cnt++;
}
cout<<“Number of elements are \n”<<cnt;
getch();
}/*End of count() */

//---------------------------------------------------------------------------------------

void Linked_List::Reverse()
{
struct node *p1,*p2,*p3;
if(start->link==NULL) /*only one element*/
return;
p1=start;
p2=p1->link;
p3=p2->link;
p1->link=NULL;
p2->link=p1;
while(p3!=NULL)
{
p1=p2;
p2=p3;
p3=p3->link;
p2->link=p1;
}
start=p2;
}/*End of rev()*/

//---------------------------------------------------------------------------------------


void Linked_List::Search(int data)
{
struct node *ptr = start;
int pos = 1;
while(ptr!=NULL)
{
if(ptr->info==data)
{
cout<<“\n\nItem “<<data<<” found at position ”<<pos;
106 PRINCIPLES OF DATA STRUCTURES USING C AND C++
getch();
return;
}
ptr = ptr->link;
pos++;
}
if(ptr == NULL)
cout<<“\n\nItem “<<data<<” not found in list”;
getch();
}

//---------------------------------------------------------------------------------------

void main()
{
        int choice,n,m,position,i;
        Linked_List po;
        while(1)
        {
            clrscr();
            cout<<“1.Create List\n”;
            cout<<“2.Add at begining\n”;
            cout<<“3.Add after \n”;
            cout<<“4.Delete\n”;
            cout<<“5.Display\n”;
            cout<<“6.Count\n”;
            cout<<“7.Reverse\n”;
            cout<<“8.Search\n”;
            cout<<“9.Quit\n”;
            cout<<“\nEnter your choice:”;
            cin>>choice;
                    switch(choice)
                    {
                    case 1:
                        cout<<“\n\nHow many nodes you want:”;
                        cin>>n;
                        for(i=0;i<n;i++)
                            {
                            cout<<“\nEnter the element:”;
                            cin>>m;
                            po.Create_List(m);
                            }
                        break;

                    case 2:
                        cout<<“\n\nEnter the element:”;
                        cin>>m;
                        po.AddAtBeg(m);
                        break;
                    case 3:
                        cout<<“\n\nEnter the element:”;
                        cin>>m;
                        cout<<“\nEnter the position after which this element is inserted:”;
                        cin>>position;
                        po.AddAfter(m,position);
                        break;
                    case 4:
                        po.Delete();
                        break;
                    case 5:
                        po.Display();
                        break;
                    case 6:
                        po.Count();
                        break;
                    case 7:
                        po.Reverse();
                        break;
                    case 8:
                        cout<<“\n\nEnter the element to be searched:”;
                        cin>>m;
                        po.Search(m);
                        reak;
                    case 9:
                        exit(0);
                    default:
                        cout<<“\n\nWrong choice”;
                    }/*End of switch */
        }/*End of while */
}/*End of main()*/