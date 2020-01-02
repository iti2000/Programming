import java.util.Random;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.util.Scanner;

class abc {

    Scanner sc = new Scanner(System.in);
    File file = new File("quiz.txt");
    Random random = new Random();
    int min = 0;
    int max = 10;
    int ans;
    static int result = 0;
    static String main_string = "";
    static String temp = "";
    static String line;

    public void func() {

        for (int x = 0; x <= 3; x++) {

            int a = random.nextInt(max - min + 1) + min;
            int b = random.nextInt(max - min + 1) + min;
            temp = a + " x " + b + " = ";
            System.out.print(temp);
            main_string = main_string + temp;
            ans = sc.nextInt();
            sc.nextLine();
            main_string = main_string + ans + "\n";
            if (a * b == ans) {
                result++;
            } else {
                System.err.println("Wrong Answer");
            }
        }
    }

    public void Show_Result() {
        System.out.println("Your Result is : " + result);
    }

    public void file_edit() {
        try {
            file.createNewFile();
            PrintWriter pw = new PrintWriter(file);
            pw.println(main_string);
            System.out.println("File is created");
            pw.close();
            abc a1 = new abc();
            int z = 0;
            System.out.print("To Open The Created File Press 2 : ");
            Scanner scr;
            scr = new Scanner(System.in);
            z = scr.nextInt();
            if (z == 2) {
                a1.open_file();
            } else {
                System.out.println("Wrong Input ! Sorry !");
            }

        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }

    public void file_create() {
        // create object and takes the name of file
        if (file.exists()) {
            file_edit();
        } else {
            System.out.print("File Already Exist ! You Want To Rewrite ? Y/N : ");
            String yn = sc.nextLine();
            System.out.print(yn);
            if (yn == "Y") {
                file_edit();
            } else if (yn == "y") {
                file_edit();
            } else {
                System.out.println("Terminating Program....");
            }

        }

    }

    public void open_file() {
        BufferedReader br = null;

        try {
            br = new BufferedReader(new FileReader("quiz.txt"));
            String line;

            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {

        } finally {
            try {
                br.close();
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
    }

    public static class Testing_1 {

        public static void main(String[] args) {
            int z = 0;
            System.out.println("---------------Quiz---------------");
            System.out.println("Enter the answers of the questions");
            abc a1 = new abc();
            a1.func();
            a1.Show_Result();
            a1.file_create();
        }
    }
}