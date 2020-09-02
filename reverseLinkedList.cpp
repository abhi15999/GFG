#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

struct Node{
	int data;
	Node* next;
};
void append(Node**head_ref,int x)
{
	Node* new_node = new Node();
	Node* last = *head_ref;
	new_node->data = x;
	new_node->next = NULL;

	if(*head_ref == NULL)
	{
		*head_ref = new_node;
		return ;
	}

	while(last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return ;

}

void pushFront(Node**head_ref,int x)
{
	Node* new_node = new Node();

	new_node->data = x;
	new_node->next = *head_ref;
	*head_ref = new_node;
}
void printList(Node* node)
{
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
	cout<<endl;
}

//Middle Element of Linked List
// int getMiddle(Node* head)
// {
// 	if(head == NULL)
// 	{
// 		return -1;
// 	}
// 	Node* curr = head;
// 	int c = 0;
// 	while(curr->next!=NULL)
// 	{
// 		c++;
// 		curr = curr->next;
// 	}

// 	c = (c & 1) ? c/2 + 1 : c/2;
// 	curr = head;
// 	while(c--)
// 	{
// 		curr = curr->next;
// 	}

// 	return curr->data;

// }

Node* reverseLink(Node*head)
{
	Node *curr = head;
	Node *prev=NULL, *next=NULL:

	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return prev;
}

void solve()
{
	
	Node* head = NULL;
	append(&head,1);
	append(&head,2);
	append(&head,3);
	append(&head,4);
	append(&head,5);
	append(&head,6);
	printList(head);
	reverseLink(head);
	// cout<<getMiddle(head)<<endl;

}



int main()
{	
	fast
	int T;
	cin>>T;
	while(T--)
	{
	solve();
	}
	return 0;
}