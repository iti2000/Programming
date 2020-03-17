//13. innerclass

class outer{
  class inner{
    public void show(){
      System.out.println("Inner Class");
    }
  }

  public void show(){
    System.out.println("outer Class");
  }
}

class p13{
  public static void main(String[] args) {
    outer out = new outer();
    out.show();
    outer.inner in = new outer().new inner();
    in.show();
  }
}
