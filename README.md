  > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\<"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# MovieRec
 > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author).
 
 > Authors: \<[Nathanael Shin(nshin014)](https:://github.com/nks738)\>, \<[Henry Zheng(hzhen055)](https://github.com/HenryKZheng)\>, \<[John-Paul Sassine(jsass003)](https://github.com/jpsassine)\>
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.

## Project Description
 > * Purpose <br />
 > Our project is called MovieRec. This program will allow users to input a movie and upon receiving it, our program will run through 
 a list of different movies and recommend three movies they might like based on the information they gave the program. To accomplish this, we would 
 navigate through a list of movies and compare the genre and rating of the chosen movie with the movies in the list. The final output will be 3 movies that 
 most closely match with the user's movie. 
 
 > * Why we Chose MovieRec <br />
 We decided to do this project because our group really enjoys watching different movies and thought it would be a neat idea to have a program that would
 recommend different movies when we run out of things to watch.
 > * Tools <br />
 [Movie List](https://data.world/owentemple/greatest-films-of-all-time/workspace/file?filename=guardian_2010_greatest_films_of_all_time.csv) - list of movies to compare with users movie <br />
 [C++] - language <br />
 
 > * Input and Output <br />
 Input: Movie, Genre, Date, Actor, Rating <br />
 Output: Recommended movies based off input <br />
 
 > * Design Patterns <br />
Composite Design Pattern: <br />
Since the Composite design pattern revolves around a style of designing that incoporates a group of objects that would be treated as instances of the same object, we believe we could use this pattern when dealing with subcategories within categories(such as different categories under seasonal categories). For example, when comparing movies, the user could input a subcategory like rom-com in the comedy genre to narrow down the search even more. <br />

> * Strategy Design Pattern: <br />
Due to the fact that our project has various features that require different algorithms to organize and present the movies, we will use the strategy design pattern to give us the ability to switch through algorithms as we see fit and give us more control over the various features. This way we can organize our different “sorts” (sort by alphabetical order, sort by best rated, etc.). <br />

> * Factory Design Patter: <br />
This design pattern will aid us in the creation of the initial objects, as these movie objects will have many sub classes that they can be categorized into (i.e genre, season, length). One piece of functionality that we will incorporate using the abstract factory pattern is the direct conversion of data into objects using classes of movies and gnere subclasses. Organization is key for user likeability so this will be very beneficial to help establish organization of the objects while still having robust identification from the beginning.



 <br />

 > ## Phase II
 > See "Projects" to view the Kanban board.
## Class Diagram
 > [class diagram](https://github.com/cs100/final-project-hnp/blob/master/Project%20Class%20Diagram.pdf)
 
 > ## Phase III
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did):
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint:
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
