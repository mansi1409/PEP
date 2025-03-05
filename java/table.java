import java.util.Scanner;

public class table {
    public static void main(String[] args){
        Scanner table = new Scanner(System.in);
        System.out.print("Enter N:");
        int N = table.nextInt();
        
        for(int i = 1; i<=10; i++){
            System.out.println(N + "X" + i + "=" + N*i);
        }
      
    }

    
}
