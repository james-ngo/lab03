#ifndef HTABLE_H
#define HTABLE_H

typedef struct node Node;

typedef struct linkedlist LinkedList;

struct node {
	int c;
	int freq;
	Node *next;
	Node *left;
	Node *right;
};

struct linkedlist {
	Node *head;
	Node *tail;
};

void traverse_list(LinkedList*);

void append(LinkedList*, Node*);

void insert(LinkedList*, Node*);

int min(Node*, int);

void remove_at(Node*, int, int);

#endif