#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <vector>
#include <string>

//header files
#include "base.hpp"
#include "sortstrategy.hpp"
#include "../src/task.cpp"
#include "../src/tasklist.cpp"


using namespace std;

class client {
	private:
		vector<Base*> allObjects;
		vector<Base*> allTasks;
		vector<Base*> allLists;
		vector<Base*> allEvents;
		string sortingMethod;
	public:
		//constructor
		client();
		~client();

		void displayMenu();
		
		void load();
		void save();
		void clear();


		//print functions
		void view();
		void printAll();
		//print all unassigned tasks 
		void printTasks();
		//print all unassigned taskLists and their queues
		void printLists();
		//print all events
		void printEvents(); 

		//sort function
		void setSortingMethod();
		
		//completed functions
		void markAsCompleted();

		
		//create functions
		void create();
		void createTask();
		void createList();
		void createEvent();	

		//after printing all lists, ask user for which list to add a task to
		void addTaskToTaskList(Base* currList);	
		//after printing all events, ask user for which event to add event to
		void addListToEvent(Base* currEvent);



		//edit functions
		void editList(Base* currObject);
		void editEvent(Base* currObject);
		void editTask(Base* currObject);


		//delete functions
		void delTask();
		void delList();
		void delEvent();


};

#endif //MENU_HPP
