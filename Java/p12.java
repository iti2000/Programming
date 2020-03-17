//12. use of static keyword

class A{
  static int a=1;
  static{
    System.out.println(a);
  }
  static void fun(int a){
    --a;
    System.out.println(a);
  }
}

class p12{
  static{
    System.out.println("Block 1");
  }
  public static void main(String[] args) {
    //new A();
    A.fun(3);
  }
  static{
    System.out.println("Block 2");
  }
}
