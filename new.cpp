#include <bits/stdc++.h>
using namespace std;

#define QUEUELENGTH 4

int q[QUEUELENGTH];
int front = -1;
int rear = -1;

void enqueue(int number){
	if((front==-1) && (rear=-1)){
		front=rear=0;
	        q[rear]=number;
	}else if(((rear+1)%QUEUELENGTH)==front){
		cout<<"Queue is full\n";
	}else{
		rear=(rear+1)%QUEUELENGTH;
		q[rear]=number;
	}
}

void dequeue(){
	if((front=-1) && (rear==-1)){
		front=rear=0;
		cout<<"Queue is underflow\n";
	}else if(front == rear){
		front=rear=-1;
		cout<<"Queue is empty"<<endl;
	}else{
		front= (front+1)%QUEUELENGTH;
	}
}


void display(){
	if((front==-1) && (rear==-1)){
		cout<<"Queue is empty"<<endl;
	}else{
		int i=front;
		while(i!=rear){
			cout<<q[i]<<" "<<endl;
			i=(i+1)%QUEUELENGTH;
		}cout<<q[rear]<<endl;
	}cout<<endl;
}

int main(){
	enqueue(5);
	enqueue(6);
	enqueue(10);

	display();

	return 0;
}
