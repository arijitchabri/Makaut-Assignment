package Day_2_Interface.employee;
import Day_2_Interface.school.School;
import Day_2_Interface.school.SchoolPopulation;
public class Staff extends SchoolPopulation implements School {

    int empId;
    int yearOfJoining;

    public Staff(String name, int age, int empId, int yearOfJoining){
        super(name, age);
        this.empId = empId;
        this.yearOfJoining = yearOfJoining;

    }

    public String toString(){
        super.toString();
        return "Showing the Staff details\n"+ super.toString() + "\tEmployee ID :"+empId+
                "\nYear of joining : "+yearOfJoining;
    }
}
