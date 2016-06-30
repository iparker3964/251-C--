
#Internet-Service-Bill-Calculator

##Project source can be download from https://github.com/iparker3964/251-C--.git

##Program Objective:  
 
##Autor: Isaiah Parker

##How to run program

To execute the program simply download the repository, compile the code, and run it.

The program can be run from the command line prompt. 

##Class Documentation
Media Manager has 4 classes, 1 of which is abstract.

##Class MediaItem


This class holds information related to different functions of the media

###Constructor

public MediaItem(String name, int year, String title)

instantiates the media name, year, and title

###Attributes
| Attributes        | Description          | 
| ------------- |:-------------:| -----:|
| public String mediaName      | name of media | 
| protected int mediaYear      | The year of the media release        |  
| protected String mediaTitle | The title of the media      |    

###Methods
| returns        | Methods          | 
| ------------- |:-------------:| -----:|
| String       | getName() | 
|       | getName returns the value of the mediaName        |  
| int | getYear()     | 
|      | returns the value of the mediaYear |
| String | getTitle()     | 
|      | returns the value of the mediaTitle |
| void| setName(String name)     | 
|      | sets the media name to the current name to the passed parameter |  
| void | setYear(int year)     | 
|      | set the media year to the value passed to the parameter |
| void | setTitle(String title)     | 
|      | set the media title to the value passed to the parameter |  
| String | mediaType()     | 
|      | abstract method | 
| String | toString()     | 
|      | Displays mediaItem information as a string | 

##Class: Album
This class holds information regarding the albums media

###Constructor

public album(String name, int year, String title, String mediaType)

instantiates the name, year,title, and mediaType

###Attributes
| Attributes        | Description          | 
| ------------- |:-------------:| -----:|
| public String mediaName      | name of media | 
| public int mediaYear      | The year of the media release        |  
| public String mediaTitle | The title of the media      |  
| public String mediaType | The type of media      | 


###Methods
| returns        | Methods          | 
| ------------- |:-------------:| -----:|
| String       | mediaType() | 
|       | returns the media type        |  
| int | compareTo(mediaItem myAlbum)     | 
|      | compare the value of the parameter|

##Class: Movie
The class contains information regarding to the movie media

###Constructor

movie(String name, int year, String title, String mediaType)

initializes the movie name, year, title, and mediaType

###Attributes
| Attributes        | Description          | 
| ------------- |:-------------:| -----:|
| public String mediaName      | name of media | 
| public int mediaYear      | The year of the media release        |  
| public String mediaTitle | The title of the media      |  
| public String mediaType | The type of media      | 

###Methods
| returns        | Methods          | 
| ------------- |:-------------:| -----:|
| String       | mediaType() | 
|       | returns the media type        |  
| int | compareTo(mediaItem myAlbum)     | 
|      | compare the value of the parameter|

##Class MovieManager

This class contains contains the main method

###Attributes
| Attributes        | Description          | 
| ------------- |:-------------:| -----:|
|   ArrayList<MediaItem>    | contains the list of media items | 

###Methods
| returns        | Methods          | 
| ------------- |:-------------:| -----:|
|   void   | main(String[] args) |

