## Assignment 1 :

1. Program to find the mean of given numbers in java using for/while loop
2. Calculate the area of a circle, rectangle, square, and triangle using the concept of hierarchical concept, and method overriding.
3. Write a java code to print the Fibonacci series. Use the concept of public access modifier and access from a different package.
4. Calculate the factorial of a number using method and recursion in Java.
5. Write a Java code to swap two numbers.

## Assignment 2 :

Lab assignment 5: 
Read the given scenario and WAP in JAVA implementing the mentioned concepts.

a. Define an interface named School and a base class SchoolPopulation.

b. Define two different classes namely, Student and Employee. These classes are derived from School and SchoolPopulation.

c. Define other two classes Staff and Teacher.

d. Staff and Teacher classes are derived from the Employee class.

e. The SchoolPopulation class has name and age data and display method to display the name and age of a person. The School interface has school name, affiliated board name and address.

f. The Student class has data like roll number/ id and classes enrolled and display method to print the data such as name, age, roll number/ id and classes enrolled of the student.

g. Staff has employee id and date of joining data and display method to display name, age, employee id, date of joining of the staff.

h. Teacher has designation (Junior Class Teacher (Class 1 to 5) and Senior Class Teacher (Class 6 to 10) and display method to display the name, age, employee id, date of joining and designation of the Faculty.

i. Each class should have their own constructor definition and be placed in the proper package.

Implement the above classes and subclasses using the concepts of inheritance, interface, package and
abstract methods in JAVA.


## PCA 2

Implement the following program in JAVA and upload one pdf file containing the source code,
output screenshot and discussion related to improvements.

 Java program:
 Create a class called "Book" that contains the following
 private fields: 'title' (String), 'author' (String), and 'year' (int),
 and a public method called 'getBookInfo'
 that returns a formatted string with the book's information
 (e.g. "Title: Harry Potter and the Sorcerer's Stone, Author: J.K. Rowling, Year: 1997").

 Next, create a subclass called "Ebook"
 that extends the "Book" class, with the additional private field of 'fileSize' (int),
 and a public method called 'getFilesize' that returns the file size of the ebook in MB.

 Finally, create a main method that instantiates both a "Book" object and an "Ebook" object,
 sets their respective fields, and calls their 'getBookInfo' and 'getFilesize' methods.

 Improvement 1:
 Implement an interface called "Readable"
 that has a public method called 'isReadable'
 that returns a boolean value based on whether the book or ebook is readable
 (e.g. if it is an ebook, then the file size must be less than the available storage space
 and for books printed copy must be available to buy).
 Have the "Book" and "Ebook" classes implement this interface and modify the main method
 to test the functionality.

 Improvement 2:
 Can you think of implementing catalogue functionality for books and ebooks data available?
 Catalogue will contain all the book and ebook data available and provide search functionality.
 Discuss your approach and implement code if possible.
