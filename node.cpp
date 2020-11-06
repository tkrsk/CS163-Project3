//Tak. Masagatani
//CS260
//Fall 2020
//Project 3
//cpp file for node module
//node.cpp

#include "node.h"

using namespace std;

//Constructor
Node::Node(){
	next = nullptr;
}



//Destructor
Node::~Node(){
	next = nullptr;	
}



//Book.data wiping function
void Node::destroy(){
	book.clearData();
}



//Accessor
Node* Node::getNext(){
	return next;
}



char* Node::getTopic(){
	return book.getTopic();
}



char* Node::getWebsite(){
	return book.getWebsite();
}



int Node::getRating(){
	return book.getRating();
}



//Mutators
void Node::setNext(Node* parm){
	next = parm;
}



void Node::bookInit(char* addTopic, char* addWebsite, char* addSummary, char* addReview, int addRating){
	book.setTopic(addTopic);
	
	book.setWebsite(addWebsite);
	
	book.setSummary(addSummary);
	
	book.setReview(addReview);
	
	book.setRating(addRating);
}



//Print
void Node::print(){
	cout << book.getTopic() << ": " << book.getWebsite() << ": " << book.getSummary() << ": " << book.getReview() << ": " << book.getRating() << endl;
}