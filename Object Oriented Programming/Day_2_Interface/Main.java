package Day_2_Interface;


import Day_2_Interface.employee.*;
import Day_2_Interface.student.*;
import Day_2_Interface.school.*;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args){
        ArrayList<String> classes = new ArrayList<String>();
        classes.add("Operating System");
        classes.add("OOP");
        classes.add("DBMS");
        Student student1 = new Student("Arijit Chabri",20, 23, classes);

        Teacher teacher1 = new Teacher("Ayan Ghosh", 35, 34519,
                2019, "Senior Class Teacher");

        Staff staff1 = new Staff("Dawipayan Ghosh", 22, 3215, 2022);

        System.out.println();
        System.out.println("School Name : " + student1.schoolName);
        System.out.println("Board : " + student1.boardName);
        System.out.println("Address : " + student1.address);
        System.out.println();

        System.out.println(student1.toString());
        System.out.println();
        System.out.println(teacher1.toString());
        System.out.println();
        System.out.println(staff1.toString());
    }
}