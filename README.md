# Task Scheduler
> Authors: [Scott Peterson](https://github.com/scottyallenp), [Anh Nguyen](https://github.com/AnhQNguyen), [Simon Chau](https://github.com/schau1121)
 
## Project Description
> ### User Experience
> We plan on building a task management application where a user can create and view personal tasks and events. Users will be able to transfer their event and task lists made in our application to their personal Google Calendar.
> ### Importance
> We find this project really important because it is a very practical application for us as college students. With classes, clubs, and our careers, it becomes increasingly difficult to manage our time, and we are sure that plenty of people can relate. Additionally, we are interested in familiarizing ourselves with an API and since the documentation is very thorough, we thought this project would be a great opportunity to learn.
> ### Tools and Technology
> * C++ -  An object-oriented programming language 
> * Google’s Calendar API - An API that allows for application integration into Google Calendar
> * Valgrind - A programming tool used for code profiling and debugging
> * Gtest - A unit and integration testing library for C++
> ### Application Input / Output
> The user will be able to create customized tasks inside an event by including: a string used for a short title, a string for a task description, a string for a classification tag, an integer determining the task’s priority, an integer for estimated task duration in hours, and a datetime string labeling the event time. Depending on the component that the user is creating (event/task) there will be different prompts for the user's input. For example, if a user creates an event, they will be prompted to input a datetime to schedule. Our application will output a list of tasks and events including their details, events will be prioritized based on their deadlines while tasks will be prioritized based on their rank in the priority queue. Additionally, our application will output a call to the Google Calendar API where the user should be able to see their scheduled event.
> ### Design Patterns
> * Composite
>   * We chose to use the composite design pattern to implement a list of tasks or events composed of smaller tasks inside of them. With this pattern we plan to implement the basic interface which consists of editing, deleting, and creating tasks/events. An issue we anticipate encountering  with our project is finding a balance between creating a simple interface for the user to interact with the components, while also maintaining separate functionality. With the composite pattern, objects are treated very similarly, and we plan on using polymorphism and recursion to our advantage to solve this problem.
> * Decorator
>   * The decorator design pattern will be used to implement the notification feature within our application. Our task manager will consist of two different objects: tasks and events. This design pattern allows us to create a notification system that displays different details within the notification based on which component that needs to be displayed. An issue we plan on encountering with the composite design pattern is differentiating the functionality of the interface depending on component, however, with the decorator, this should be easily solved. The decorator pattern should allow us to extend the functionality of each component without creating another subclass.

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
