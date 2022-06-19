#include<stdio.h>
#include<stdlib.h>
//creating a node
struct node{
int data;
struct node *next;
};
//function to create a linked list
struct node* createlinkedlist(){
struct node* head;
    struct node* second;
    struct node* third;
    //allocating memory for ll in heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     //link first and second nodes
     head->data=15;
     head->next=second;
     //limnk second and third
     second->data=17;
     second->next=third;
     //terminate the list at third node
     third->data=21;
     third->next=NULL;
     return head;
};
//function to display elements
void linkedlisttravel(struct node*ptr){
    while(ptr!=NULL){
      printf("Element : %d\n",ptr->data);
      ptr=ptr->next;
}
}
//function to insert element at first position
struct node* insertatfirst(struct node*head,int d){
    struct node* newhead=(struct node*)malloc(sizeof(struct node));
    newhead->data=d;
    newhead->next=head;
    return newhead;
}
//function to insert element at last position
struct node* insertatlast(struct node*head, int d){
   struct node*newlast=(struct node*)malloc(sizeof(struct node));
   struct node*p=head;
   newlast->data=d;
   while(p->next!=NULL){
    p=p->next;
   }
   p->next=newlast;
   newlast->next=NULL;
   return head;
}
//function to insert elment at index position
struct node* insertatindex(struct node*head, int d,int index){
     struct node*newnode=(struct node*)malloc(sizeof(struct node));
     struct node*p=head;
     int i=0;
     while(i!=index-1){
        p=p->next;
        i++;
     }
     newnode->data=d;
     newnode->next=p->next;
     p->next=newnode;
     return head;

}
//function to delete a element at first
   struct node* deleteatfirst(struct node*head){
   struct node*ptr=head;
   head=head->next;
   free(ptr);
   return head;
   }

//function to delete a element at last
   struct node* deleteatlast(struct node*head){
   struct node*ptr=head;
   struct node*q=head->next;
   while(q->next!=NULL){
    ptr=ptr->next;
    q=q->next;
   }
   ptr->next=NULL;
   free(q);
   return head;
   }

//main function
int main(){
        struct node* first;
        struct node* second;


    //creation of linked list
     printf("Creating a LL with 15,17&21 as elements:\n");
       first=createlinkedlist();
     //display elents in the linked list
       linkedlisttravel(first);
     //Insertion at first node
     printf("Inserting 9 at the beginning of linked list:\n");
       second=insertatfirst(first,9);
     //show ll
     printf("Display elements after insertion:\n");

       linkedlisttravel(second);
    // Inserting at last
     printf("Inserting 11 at the end of linked list:\n");
       first=insertatlast(second,11);

     printf("Display elements after insertion:\n");
     //show LL
       linkedlisttravel(first);
    //Inserting at index 3
    printf("Inserting 33 at index 3rd:\n");

      second=insertatindex(first,33,3);
      //show LL
    printf("Display elements after insertion:\n");

      linkedlisttravel(second);

      //deleting at first
      printf("Deleting the first element:\n");
       first=deleteatfirst(second);
       //show LL
       printf("Display elements after deletion;\n");
        linkedlisttravel(first);

        //deleting at last
      printf("Deleting the last element:\n");
       second=deleteatlast(first);
       //show LL
       printf("Display elements after deletion;\n");
        linkedlisttravel(second);

    return 0;
}
