package Day_2_Interface.student;

import Day_2_Interface.school.School;
import Day_2_Interface.school.SchoolPopulation;

import java.util.ArrayList;
public class Student extends SchoolPopulation implements School {

    ArrayList <String> classes;
    int roll;

    public Student(String name, int age, int roll, ArrayList<String> classes){
        super(name, age);
        this.classes = classes;
        this.roll = roll;

    }

    public String toString(){
        super.toString();
        return "Showing the Student details\n"+ super.toString() + "\troll :"+roll+"\nClasses involved : "+classes;
    }

}
