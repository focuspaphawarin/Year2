#include<iostream>
using namespace std;
class LinkList{
	public:
		char val;
		LinkList *next;
};
class Stack{
	public:
		LinkList *head;
		void push (char val){
			LinkList* new_node = new LinkList();
			new_node -> val = val;
			new_node -> next = head;
			head = new_node;
		}
		char top (){
			return head -> val;
		}
		void pop (){
			LinkList *temp = head;
			head = head->next;
			delete temp;
		}
		bool empty (){
			if(head == NULL){
				return true;
			}
			else{
				return false;
			} 
		}
};
int main(){
	Stack *brackets = new Stack();
	cout << (*brackets).empty();
	(*brackets).push('j');
	(*brackets).push('k');
	(*brackets).push('g');
	cout << (*brackets).empty();
	cout<< (*brackets).top();
	(*brackets).pop();
	cout<< (*brackets).top();
}