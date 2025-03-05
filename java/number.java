import java.util.Scanner;
public class number {
    public static void main(String[] args){
        Scanner number = new Scanner(System.in);
        int N = number.nextInt();
        int sum = 0;
        for(int i = 1; i<=N; i++){
           sum+= i;
        }
        System.out.println(sum);

    }
    
}
