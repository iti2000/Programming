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


  }
}
