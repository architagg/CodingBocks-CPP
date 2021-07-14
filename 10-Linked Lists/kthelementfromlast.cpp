#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtTail (node*&head, int data){
	node* temp = new node(data);
	if(head==NULL){
		head = temp;
		return;
	}
	node *tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	tail-> next = temp;
	return; 
}

void kfromend(node* head, int n){
	int len =0;
	node* temp = head;

	while(temp != NULL){
		temp = temp->next;
		len++;
	}
	if(len < n){
		return;
	}
	temp = head;

	for(int i=1;i<len-n+1;i++){
		temp = temp->next;
	}
	cout<<temp->data<<endl;
	return;
}






int main() {
	node* head = NULL;
	int n , k;
	while(n!=-1){
	cin>>n;
	if(n!=-1){
		// cout<<n<<",";
		insertAtTail(head,n);
	}
	}
	cin>>k;
	kfromend(head,k);
	return 0;
}
