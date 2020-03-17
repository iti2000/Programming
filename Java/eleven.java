//11. Program to implement Access Control.

class A{
  int a=1;
  public int b=2;
  protected int c=3;
  private int d=4;

  private int geta(){
    return a;
  }
  int get_private_a(){
    return geta();
  }
  protected int getb(){
    return b;
  }
  public int getc(){
    return c;
  }
  int getd(){
    return d;
  }
}

class eleven{
  public static void main(String[] args) {
    A a = new A();

    //Accessed Direcctly
    System.out.println(a.a);
    System.out.println(a.b);
    System.out.println(a.c);

    //Accessing all with methods
    System.out.println(a.get_private_a());
    System.out.println(a.getb());
    System.out.println(a.getc());
    System.out.println(a.getd());
  }
}
