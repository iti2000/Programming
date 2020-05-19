//Write a program that prompts the user to enter three integers and display the integers in decreasing order.

import java.util.*;

class p5{
  static void max_fun(int a[]){
    if(a[0]<a[1] || a[0]<a[2]){
      if(a[0]<a[1]){
        int temp = a[0];
        a[0] = a[1];
        a[1] = temp;
      }
      if(a[0]<a[2]){
        int temp = a[0];
        a[0] = a[2];
        a[2] = temp;
      }
    }
    if(a[1]<a[2]){
      int temp = a[1];
      a[1] = a[2];
      a[2] = temp;
    }
  }
  public static void main(String args[]){
    System.out.println("Enter three Numbers");
     int a[]= new int[3];
    Scanner scan = new Scanner(System.in);
    for(int i=0;i<3;i++){
      a[i] = scan.nextInt();
    }
    max_fun(a);
    System.out.println(a[0] +" "+a[1]+ " "+ a[2]);

  }
}
