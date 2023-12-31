#include <iostream>
#include <cstdlib>
using namespace std;
class BinarySearchTree{
	private:
		struct tree_node{
			tree_node* left;
			tree_node* right;
			int data;
		};
		tree_node* root;
	public:
		BinarySearchTree(){
			root = NULL;
		}
		bool isEmpty() const { return root==NULL; }
		void print_inorder();
		void inorder(tree_node*);
		void print_preorder();
		void preorder(tree_node*);
		void print_postorder();
		void postorder(tree_node*);
		void insert(int);
		void remove(int);
};

void BinaySearchTree::insert(int d){
	tree_node* t = new tree_node;
	tree_node* parent;
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	parent = NULL;
	
	if(isEmpty()) root = t;
	else{
		tree_node* curr;
		curr = root;
		
		while(curr){
			parent = curr;
			if(t->data > curr->data) curr = curr->right;
			else curr = curr->left;
		}
		if(t->data < parent->data)
		parent->left = t;
		else
		parent->right = t;
	}
}

void BinarySearchTree::remove(int d){
	bool found = false;
	if(isEmpty()){
		cout<<" This Tree is empty! "<<endl;
		return;
	}
	tree_node* curr;
	tree_node* parent;
	curr = root;
	while(curr != NULL){
		if(curr->data == d){
			found = true;
			break;
		}
		else{
			parent = curr;
			if(d>curr->data) curr = curr->right;
			else curr = curr->left;
		}
	}
	if(!found){
		cout<<" Data not found! "<<endl;
		return;
	}
	
	if((curr->left == NULL && curr->right != NULL)|| (curr->left != NULL && curr->right == NULL)){
		if(curr->left == NULL && curr->right != NULL){
			if(parent->left == curr){
				parent->left = curr->right;
				delete curr;
			}
			else {
				parent->right = curr->right;
				delete curr;
			}
		}
		else{
			if(parent->left == curr){
				parent->left = curr->left;
				delete curr;
			}
			else {
				parent->right = curr->left;
				delete curr;
			}
		}
		return;
	}
	if(curr->left == NULL && curr->right == NULL){
		if(parent->left == curr) parent->left = NULL;
		else parent->right = NULL;
		delete curr;
		return;
	}
	if(curr->left != NULL && curr->right != NULL){
		tree_node* chkr;
		chkr = curr->right;
		if((chkr->left == NULL) && (chkr->right == NULL)){
			curr = chkr;
			delete chkr;
			curr->right = NULL;
		}
		else{
			if((curr->right)->left != NULL){
				tree_node* lcurr;
				tree_node* lcurrp;
				lcurrp = curr->right;
				lcurr = (curr->right)->left;
				while(lcurr->left != NULL){
					lcurrp = lcurr;
					lcurr = lcurr->left;
				}
				curr->data = lcurr->data;
				delete lcurr;
				lcurrp->left = NULL;
           }
           else
           {
               tree_node* tmp;
               tmp = curr->right;
               curr->data = tmp->data;
		 		 		    curr->right = tmp->right;
               delete tmp;
           }

        }
		 return;
    }

}

void BinarySearchTree::print_inorder()
{
  inorder(root);
}

void BinarySearchTree::inorder(tree_node* p)
{
    if(p != NULL)
    {
        if(p->left) inorder(p->left);
        cout<<" "<<p->data<<" ";
        if(p->right) inorder(p->right);
    }
    else return;
}

void BinarySearchTree::print_preorder()
{
  preorder(root);
}

void BinarySearchTree::preorder(tree_node* p)
{
    if(p != NULL)
    {
        cout<<" "<<p->data<<" ";
        if(p->left) preorder(p->left);
        if(p->right) preorder(p->right);
    }
    else return;
}

void BinarySearchTree::print_postorder()
{
  postorder(root);
}

void BinarySearchTree::postorder(tree_node* p)
{
    if(p != NULL)
    {
        if(p->left) postorder(p->left);
        if(p->right) postorder(p->right);
        cout<<" "<<p->data<<" ";
    }
    else return;
}


int main()
{
    BinarySearchTree b;
    int n, ch,tmp,tmp1,x;
    cout<<"\tOperasi Pohon Biner Nama Kalian \n\n";
    cout<<"Masukkan banyak data : ";
    cin>>n;
    for(int i=0; i<n; i++){
    	cout<<"Angka : ";cin>>x;
    	b.insert(x);
	}
	cout<<"\n\nIn-Order Traversal "<<endl;
	cout<<"-----------------------"<<endl;
	b.print_inorder();
	
	cout<<"\n\nPre-Order Traversal "<<endl;
	cout<<"-----------------------"<<endl;
	b.print_preorder();
	
	cout<<"\n\nPost-Order Traversal "<<endl;
	cout<<"-----------------------"<<endl;
	b.print_postorder();
	cout<<endl;
	
	system("pause");
	return 0;
}

