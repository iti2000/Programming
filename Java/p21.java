//21. Partial implementation

interface function{
  void do1();
  void do2();
}

abstract class A implements function{
  public void do1(){
    System.out.println("do1");
  }
}

class B extends A{
  public void do2(){
    System.out.println("do2");
  }
}

class p21{
  public static void main(String[] args) {
    B b = new B();
    b.do2();
    b.do1();
  }
}
