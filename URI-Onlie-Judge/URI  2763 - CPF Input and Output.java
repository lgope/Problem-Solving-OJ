import java.util.Scanner;

/**
 *
 * @author Lakshman
 */
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        String[] da = in.nextLine().split("\\.|-");
        
        for (int i = 0; i < da.length; i++) {
            System.out.printf("%s\n", da[i]);
        }
        in.close();
    }
}
