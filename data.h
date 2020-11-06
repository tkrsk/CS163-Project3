//Taka Masagatani
//CS260
//Fall 2020
//Project 3
//Header file for data module
//data.h

#include <iostream>
#include <cstring>

using namespace std;

class Data{
public:
//Constructor 
	Data();

//Destructor
	~Data();

//Accessors
	char* getTopic();
	char* getWebsite();
	char* getSummary();
	char* getReview();
	int getRating();

//Mutators
	void setTopic(char* addTopic);
	void setWebsite(char* addWebsite);
	void setSummary(char* addSummary);
	void setReview(char* addReview);
	void setRating(int addRating);

//Wipe data function
	void clearData();

private:
	char* topic;
	char* website;
	char* summary;
	char* review;
	int rating;
};

