//9.Program to implement Recursion (Example of factorial).
import java.util.*;

class nine{

  static long fac(int x){
    if(x == 0){
      return(1);
    }
    else{
      return(x*fac(x-1));
    }
  }

  public static void main(String args[]){

    System.out.println("Enter any number:");

    Scanner scan = new Scanner(System.in);
    final int x = scan.nextInt();

    long ans = fac(x);
    System.out.println(ans);

  }
}
