import java.lang.Math;
import java.util.Scanner;

abstract class GeometricShape {
    double area;
    abstract void calculateArea();
}

class Circle extends GeometricShape{
    // Implementing the circle class.
    int radius;
    Scanner sc = new Scanner(System.in);

    Circle(int radius){
        this.radius = radius;
    }

    Circle(){
        System.out.println("What is the radius of the circle : ");
        radius = sc.nextInt();
    }

    @Override
    void calculateArea() {
        area = Math.PI * radius * radius;
    }
}

class Triangle extends  GeometricShape{
    // Implementing the Triangle class.
    int base, height;
    Scanner sc = new Scanner(System.in);

    Triangle(int base, int height){
        this.base = base;
        this.height = height;
    }

    Triangle(){
        System.out.println("Enter the base : ");
        base = sc.nextInt();
        System.out.println("Enter the height : ");
        height = sc.nextInt();
    }

    @Override
    void calculateArea() {
        area = 0.5 * base * height;
    }
}

class Rectangle extends GeometricShape{
    // Implementing the Rectangle class.
    int length, width;
    Scanner sc = new Scanner(System.in);

    Rectangle(int length, int side2){
        this.length = length;
        this.width = side2;
    }

    Rectangle(){
        System.out.println("Enter ths side1 value : ");
        length = sc.nextInt();
        System.out.println("Enter the side2 value : ");
        width = sc.nextInt();
    }

    @Override
    void calculateArea() {
        area = length * width;
    }
}

public class AreaCalculator {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.println("1. Circle \n2. Triangle \n3. Rectangle");
        System.out.println("What is your shape you want to calculate the area ?\n");
        int choice = sc.nextInt();
        if (choice == 1){
            // This is for circle
            Circle circle = new Circle();
            circle.calculateArea();
            System.out.println("The area of the circle is : " + circle.area);
        }

        else if(choice == 2){
            // This is for triangle
            Triangle triangle = new Triangle();
            triangle.calculateArea();
            System.out.println("The area of the triangle is : " + triangle.area);
        }

        else if(choice == 3){
            // This is for rectangle
            Rectangle rectangle = new Rectangle();
            rectangle.calculateArea();
            System.out.println("The area of the rectangle is : " + rectangle.area);
        }
        else{
            System.out.println("Wrong input.");
        }
    }
}
