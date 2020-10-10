https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1


int getCount(struct Node* head){

int l=0;
Node *t;
t=head;
while(t!=NULL)
{
    t=t->next;
    l++;
}
return l;
    //Code here

}
