#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node * next;
	node(int d){
		data=d;
		next=NULL;
	}

};

// PRINT LIST
void print(node* head)
{
   
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}


//BUILD LIST
void buildlist(node* & head, int n)
{
     while(n--)
     {
        int d;
        cin>>d;
    if(head==NULL)
    {
        head=new node(d);
    }
   else
   { node * tail= head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=new node(d);
    }
	}
}



//K-NODE APPEND
node* knode(node*head , int k){
	node* f = head;
	node* s = head;
	int cnt=1;
	while(cnt<k){
		f = f->next;
		cnt++;
	}

	node*prev;
	while(f->next!=NULL){
		prev = s;
		f=f->next;
		s=s->next;
	}
	f->next = head;
	head = s;
	prev->next = NULL;
	return head;
}

int main() {
	node*head = NULL;
	int n,k;
	cin>>n;
	buildlist(head,n);
	cin>>k;
	k = k%n;
	if(k==0){
		print (head);
	}
	else{
	node* res = knode(head,k);
	print(res);}

	return 0;
}
