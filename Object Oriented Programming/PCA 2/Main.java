/*
Implement the following program in JAVA and upload one pdf file containing the source code,
output screenshot and discussion related to improvements.

 Java program:
 Create a class called "Book" that contains the following
 private fields: `title` (String), `author` (String), and `year` (int),
 and a public method called `getBookInfo`
 that returns a formatted string with the book's information
 (e.g. "Title: Harry Potter and the Sorcerer's Stone, Author: J.K. Rowling, Year: 1997").

 Next, create a subclass called "Ebook"
 that extends the "Book" class, with the additional private field of `fileSize` (int),
 and a public method called `getFilesize` that returns the file size of the ebook in MB.

 Finally, create a main method that instantiates both a "Book" object and an "Ebook" object,
 sets their respective fields, and calls their `getBookInfo` and `getFilesize` methods.

 Improvement 1:
 Implement an interface called "Readable"
 that has a public method called `isReadable`
 that returns a boolean value based on whether the book or ebook is readable
 (e.g. if it is an ebook, then the file size must be less than the available storage space
 and for books printed copy must be available to buy).
 Have the "Book" and "Ebook" classes implement this interface and modify the main method
 to test the functionality.

 Improvement 2:
 Can you think of implementing catalogue functionality for books and ebooks data available?
 Catalogue will contain all the book and ebook data available and provide search functionality.
 Discuss your approach and implement code if possible.
*/

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;
interface Readable{
    boolean isReadable();
}

class Book implements Readable {
    private String title;   // Title of the book
    private String author;  // Author of the book
    private int year;       // Pub year of the book

    static ArrayList<Book> books = new ArrayList<Book>();   // Implementing a array list to add the elements
    // they created.

    Book(String title, String author, int year) {
        // Constructor of book.
        this.title = title;
        this.author = author;
        this.year = year;
        books.add(this);    // Adding the new object to the array list.
    }

    Book() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the book : ");
        title = sc.nextLine();
        System.out.println("Enter the author of the book : ");
        author = sc.nextLine();
        System.out.println("Enter the publication year of the book : ");
        year = sc.nextInt();
        books.add(this);        // Adding the new object to the array list.
    }

    public String getBookInfo() {
        // Getting the info of a book and returning the info as a string.
        return ("Title: " + title + ", Author: " + author + ", Year: " + year);
    }

    public String getTitle() {
        // For getting the title of a book.
        return title;
    }

    final private boolean printedCopyAvailable() {
        // Generating a random boolean to determine if the printed copy is available or not.
        Random rand = new Random();
        boolean value = rand.nextBoolean();
        return value;
    }

    @Override
    public boolean isReadable() {
        // Checking if a copy is readable or not.
        if (printedCopyAvailable()) return true;    // Calling the printed copy available function.
        else return false;
    }

    static Book catalogue(String book) {
        // This is a static function for searching a book.
        // The books are stored in the array list and form this function we are searching them.
        for (Book listbook : books) {
            if (listbook.title.equals(book)) {
                // If found then returning a book object.
                System.out.println("The book index is : " + (books.indexOf(listbook)+1));
                return listbook;
            }
        }
        System.out.println(book + " is not available.");
        return null;    // If not found returning a null object.
    }
}


class Ebook extends Book implements Readable {
    private int fileSize;       // File size of an Ebook.

    Ebook(){
        super();        // Initializing the super.
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the file size : ");
        fileSize = sc.nextInt();
    }
    Ebook(String title, String author, int year, int fileSize){
        super(title, author, year);     // Initializing the super.
        this.fileSize = fileSize;
    }

    public int getFilesize(){
        // Returning the file size of an Ebook.
        return fileSize;
    }

    @Override
    public String getBookInfo(){
        // Overriding the getBookInfo method from its parent and adding the file size.
        String returnString = super.getBookInfo() +
                ", Book size is : "  + getFilesize() + " MB";

        return (returnString);
    }

    @Override
    public boolean isReadable(){
        // Determining if an Ebook is readable or not.
        int size = 25;           // Default available size is set to 25 MB.
        if (getFilesize() > size) return false;
        return true;
    }
}



public class Main {
    public static void main(String[] args) {

        System.out.println();

        // Creating the Ebooks
        Ebook ebook = new Ebook("Harry potter", "Jk Rowlin", 1997, 10);

        String title = "The monk who sold his ferrari";
        String author = "Robin Sharma";
        int year = 2014;
        int size = 27;
        Ebook ebook1 = new Ebook(title, author, year, size);

        // Creating the Books
        Book book = new Book("Let us C++", "Yasband Kanedkar", 1999);

        title = "C in depth.";
        author = "Dipali";
        year = 2001;
        Book book1 = new Book(title, author, year);

        // Looping through the books and printing its all data.
        for (Book book_ : Book.books){
            System.out.println(book_.getBookInfo());
            if(book_.isReadable()) System.out.println(book_.getTitle()+" is readable.\n");
            else System.out.println(book_.getTitle()+" is not readable.\n");
        }
        Book.catalogue("The monk who sold his ferrari");
    }
}

/*
 Improvement 2:
 Can you think of implementing catalogue functionality for books and ebooks data available?
 Catalogue will contain all the book and ebook data available and provide search functionality.
 Discuss your approach and implement code if possible.
 Improvement 2 can be done. We did this by having an arraylist in our code.
 We added each book element into that arraylist. Then when we wanted to access a book we are searching for it.
 To search we only need its title.
 */