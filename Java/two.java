//2.Program to implement a Class and method with parameters and return value.
class ABC{
  int a,b;
  public int area(int x,int y){
      a = x;
      b = y;
      return(a * b);
  }
}
class two{
  public static void main(String args[]){
    ABC abc = new ABC();
    System.out.println(abc.area(9,7));
  }
}
