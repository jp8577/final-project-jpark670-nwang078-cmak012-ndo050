#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include "../header/time.h"
using namespace std;

class Task {
private:
    Time *startTime;
    Time *endTime;
    string category;
    string location;
    string description;
    int priority;

public:
    Task(Time *start, Time *end, string _catagory, string _location, string _description, int _priority);
    Time getStartTime();
    Time getEndTime();
    string getCategory();
    string getLocation();
    string getDescription();
    int getPriority();
};

#endif