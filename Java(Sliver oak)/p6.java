//Write a program that prompts the user to enter a letter and check whether a letter is a vowel or constant.
import java.util.*;
class p6{
  public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
     char c = scan.next().charAt(0);
     if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A' || c=='E' || c=='I' || c=='O'|| c=='U'){
       System.out.println("vowel");
     }
     else
     System.out.println("consonent");

  }
}
