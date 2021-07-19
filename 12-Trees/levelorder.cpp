#include<iostream>
using namespace std;

class node{
	public:

	string data;
	node* left;
	node* right;

	node(string d){
		data = d;
		left=right=NULL;
	}
};



node* buildtree(){
	string str;
	cin>>str;
	if(str=="false"){
		return NULL;
	}
	if(str=="true"){
		string d;
		cin>>d;
		node*root = new node(d);
		root -> left = buildtree();
		root -> right = buildtree();
		return root;
	}


	node* root = new node(str);
	root->left = buildtree();
	root->right = buildtree();
	return root;
}


int height(node*root){
	if(root==NULL){
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs)+1;
}



void kthlevel(node*root,int k){
	if(root==NULL){
		return;
	}
	if(k==0){
		cout<<root->data<<" " ;
	}
	kthlevel(root->left,k-1);
	kthlevel(root->right,k-1);
}

void kthlevel2(node*root,int k){
	if(root==NULL){
		return;
	}
	if(k==0){
		cout<<root->data<<" " ;
	}
	kthlevel(root->right,k-1);
	kthlevel(root->left,k-1);
}

void zigzag(node* root){
	int h = height(root);
	for(int i=0;i<h;i++){
		if(i%2==0){
			kthlevel(root,i);
		}
		else{
			kthlevel2(root,i);
		}
	}
}

int main() {
	  
	  node*root = buildtree();
	  zigzag(root);

	return 0;
}
