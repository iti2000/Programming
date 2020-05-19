//20. interface

interface math{
  int Add(int a, int b);
  int Sub(int a,int b);
}

class fun implements math{
  public int Add(int a,int b){
    return (a+b);
  }
}


class p20{
  public static void main(String[] args) {
    fun f = new fun();
    System.out.println(f.Add(2,3));
  }
}
