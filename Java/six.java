//6.Program to implement Call by value.
class Swap{

  public void swap(int a,int b){
    int c = b;
    b=a;
    a=c;
    System.out.println("After swapping a= "+a+"b="+b);

  }
}

class six{
  public static void main(String args[]){
    int a=3,b=4;
    System.out.println("Before swapping: a=" + a +" b=" +b);
    Swap swap = new Swap();

   swap.swap(3,4);
  }
}
