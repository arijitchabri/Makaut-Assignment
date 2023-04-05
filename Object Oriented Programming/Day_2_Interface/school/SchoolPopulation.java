package Day_2_Interface.school;
import java.lang.String;
public class SchoolPopulation {
    String name;
    int age;

    public String toString(){
        return "Name : "+name+"\tAge : "+age;
    }

    protected SchoolPopulation(String name, int age){
        this.name = name;
        this.age = age;
    }

}
