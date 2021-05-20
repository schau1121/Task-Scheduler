#ifndef __EVENT_CPP__
#define __EVENT_CPP__
#include "../header/event.hpp"

//Date format: MM/DD/YY
//Time: HH:MM AM/PM
/*if(date[2] != '/' || date[5] != '/') {
    throw(invalid_argument("Wrong date format")
  }
  if(time[2] != ':' || (time.substr(6,2) != "AM" || time.substr(6,2) != "PM")) {
     throw(invalid_argument("Wrong time format")
  }
  
  in testing:
    EXPECT_THROW( ,invalid_argument)
*/


Event::Event(string name, string date, string time, string details, double duration) {
    this->name = name;
    this->date = date;
    this->time = time;
    this->details = details;
    this->duration = duration;
    this->priority = 6;
//    setStrategy(new SortByPriority());
}

void Event::display() const {

}

void Event::del() {

}

void Event::edit() {

}

void Event::addSubTask(TaskList list) {
    priorityQueue.push_back(list);
}

Event::~Event() {}
#endif
