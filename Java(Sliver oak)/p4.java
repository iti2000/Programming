//Body Mass Index (BMI) is a measure of health on weight. It can be calculated by taking your weight in kilograms and dividing by the square of your height in meters. Write a program that prompts the user to enter a weight in pounds and height in inches and displays the BMI. Note:- 1 pound=.45359237 Kg and 1 inch=.0254 meters.

import java.util.*;
public class p4
{
     double bmi(float weight,float height){
        double bmi=(weight*0.4535)/(height*0.0254)*(height*0.0254);
        return bmi;

    }

	public static void main(String[] args) {
	    Scanner scan = new Scanner(System.in);
	    System.out.println("Enter Weight in pounds:");
	    float weight = scan.nextFloat();
	    System.out.println("Enter height in inches:");
	    float height = scan.nextFloat();
      p4 obj = new p4();
	    System.out.println("BMI is:"+ obj.bmi(weight,height));
	}
}
