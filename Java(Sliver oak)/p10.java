//Write a test program that prompts the user to enter ten numbers, invoke a method to reverse the numbers, display the numbers.

import java.util.*;

class p10{

/*  static void reverse(int a[]){
    for(int i=9;i>=0;i--){
      System.out.println(a[i]);
    }
  }
*/
static int[] reverse(int a[]){
  int b[] = new int[10];
  for(int i=0;i<10;i++){
    int p = 9;
    b[i] = a[p-i];

  }
  return b;
}

  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    System.out.println("Enter 10 Numbers:");
    int a[] = new int[10];
    for(int i=0;i<10;i++){
      a[i] = scan.nextInt();
    }
  //  reverse(a);

    int c[] = new int[9];
    c = reverse(a);
    for(int i=0;i<10;i++){
    System.out.println(c[i]);
  }
  }
}
