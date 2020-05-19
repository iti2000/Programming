//32. Program to read characters from console using I/O classes.

import java.io.*;

class p32{
	public static void main(String[] args) throws Exception{   //or u can put try catch in line 9
		BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

		String name = read.readLine();

		System.out.println(name);
	}
}
