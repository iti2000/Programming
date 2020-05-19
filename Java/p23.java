//23. try catch

class p23{
  public static void main(String[] args) {
    try{
      System.out.println(100/0);
    }
    catch(Exception e){
      System.out.println(e);
    }
  }
}
