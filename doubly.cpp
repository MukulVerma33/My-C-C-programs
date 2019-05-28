#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{ int data;
struct node *rlink;
struct node *llink;
};
struct node *root=NULL;
void append();
void addatbegin();
int length();
void display();
void addinbetween();
int main()
{ int ch=0;
while(ch!=6)
{ printf("operations are: \n");
printf("1.add at end: \n");
printf("2.add at beginning: \n");
printf("3.length of linked list: \n");
printf("4.display all elements: \n");
printf("5.insertion in between: \n");
printf("6.exit \n");
printf("enter the value: ");
scanf("%d",&ch);
switch(ch)
{ case 1:
	append();
	break;
case 2:
	addatbegin();
	break;
case 3:
	int len;
	len=length();
	printf("%d",len);
	break;
case 4:
	display();
		break;
case 5:
	addinbetween();
	break;
case 6:
	printf("exit");
default:
	printf("default");
}
}
}
void append()
{ struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&temp->data);
temp->rlink=NULL;
if(root==NULL)
{ root=temp;
}
else
{ struct node* p;
p=root;
while(p->rlink!=NULL)
{ p=p->rlink; 
}
p->rlink=temp;
temp->llink=p;
}
}
void display()
{ struct node* temp;
temp=root;
printf("%d",root->data);
if(temp==NULL)
{ printf("list is empty");
}
else
{ while(temp->rlink!=NULL)
{ temp=temp->rlink;
printf("%d",temp->data);

}
}
}
int length()
{ int count=1;
struct node* temp;
temp=root;
while(temp->rlink!=NULL)
{ count++;
temp=temp->rlink;
}
return(count);
}
void addbetween()
{ struct node* temp,*p;
int loc,i;
printf("enter location: ");
scanf("%d",&loc);
p=root;
while(i<loc)
{ p=p->rlink;
i++;
}
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&temp->data);
temp->llink=NULL;
temp->rlink=NULL;
temp->rlink=p->rlink;
p->rlink->llink=temp;
temp->llink=p;
}
void addbegin()
{ struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&temp->data);
temp->rlink=NULL;
temp->llink=NULL;
if(root==NULL)
{ root=temp;
}
else
{ temp->rlink=root;
root->llink=temp;
temp=root;
}
}


