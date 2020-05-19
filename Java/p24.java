//24. User define Exception

class ItiException extends Exception
{
	public ItiException(String s)
	{
		super(s);
	}
}

public class p24
{
	public static void main(String args[])
	{
    int i =17;
    try
		{
			   if(i<18){
           throw new ItiException("You are young");
         }else{
           System.out.println("You can vote");
         }
		}
		catch (ItiException ex)
		{
			System.out.println(ex);
		}
	}
}
