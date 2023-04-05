package Day_2_Interface.employee;

import Day_2_Interface.school.School;
import Day_2_Interface.school.SchoolPopulation;

public class Teacher extends SchoolPopulation implements School {
    int empId;
    int yearOfJoining;

    String designation;

    public Teacher(String name, int age, int empId, int yearOfJoining, String designation){
        super(name, age);
        this.empId = empId;
        this.yearOfJoining = yearOfJoining;
        this.designation = designation;

    }

    public String toString(){
        super.toString();
        return "Showing the Teacher details\n"+ super.toString() + "\tEmployee ID :"+empId+
                "\nYear of joining : "+yearOfJoining+"\tDesignation : "+designation;
    }


}
