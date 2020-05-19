//Assume a vehicle plate number consists of three uppercase letters followed by four digits. Write a program to generate a plate number.
import java.util.*;

class p7{

  public static boolean check(String str){
    if(str == null)
    {
      return false;
    }
    if(str.length()!=7){
      return false;
    }
    for(int i=0;i<3;i++){
      char c = str.charAt(i);
      if(c>='A' && c<='Z'){

       }
      else
      {
        return false;
      }
    }
    for(int i=3;i<7;i++){
      char ch = str.charAt(i);
      if(ch>='0' && ch<='9')
      {
      }
      else{
        return false;
      }
    }
    return true;
  }

  public static void main(String args[]){
    System.out.println("Enter a number plate which has 3 uppercase letter followed by 4 numbers");
    Scanner scan = new Scanner(System.in);
    String str = scan.nextLine();
    System.out.println(check(str));

  }
}
