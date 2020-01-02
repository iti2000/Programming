//4.Program to implement object passing as arguments.

class Compare{
   public String name;
  public int marks;

  Compare(String a, int b){
    name = a;
    marks = b;
  }
  public static void compare(Compare c1,Compare c2)
{
  if(c1.marks>c2.marks){
    System.out.println(c1.name + " has greater marks");
  }
  else{
    System.out.println(c2.name + " has greater marks");
  }
}
}
class four{
  public static void main(String args[]){
    Compare c1 = new Compare("Iti",30);
    Compare c2 = new Compare("Rita",50);
    Compare.compare(c1,c2);
  }
}
