using namespace std;

struct stack {
	
	struct node {
		int val;
		node *next;
		
		node(int a) {
			val = a;
		}
	};
	
	node *t;
	int size;
	
	stack() {
		t = NULL;
		size = 0;
	}
	
	void push(int a) {
		if (t == NULL) {
			t = new node(a);
			t->next = NULL;
		} else {
			node *b = new node(a);
			b->next = t;
			t = b;
		}
		size++;
	}
	
	int	top() {
		return t->val;
	} 
	
	int pop() {
		int a = top();
		node *b = t;
		t = t->next;
		delete b;
		size--;
		return a;
	}
	
};