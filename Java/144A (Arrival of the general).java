import java.util.Scanner;

public class _144A {

    public static Scanner scn = new Scanner(System.in);

    public static void main(String[] args) {
        // Read inputs.
        int len = scn.nextInt();
        int[] soldiers = new int[len];
        for(int i = 0 ; i < len ; i++) soldiers[i] = scn.nextInt();

        // Calculating the answer.

            // 1. Find the shortest soldier position and height.
            int answer = 0, shortestVal = soldiers[0], shortestIndex = 0;
            for(int i = 0; i < len ; i++)
                if (shortestVal >= soldiers[i]) {
                 shortestVal = soldiers[i];
                 shortestIndex = i;
                }

            // 2. Find the tallest soldier position and height.
            int tallestVal = soldiers[0], tallestIndex = 0;
            for(int i = 0; i < len ; i++)
                if (tallestVal < soldiers[i]){
                    tallestVal = soldiers[i];
                    tallestIndex = i;
                }

            // Determine how many steps each soldier will move.
            answer = (tallestIndex < shortestIndex) ?  + tallestIndex :  + tallestIndex-1;
            answer += len-shortestIndex-1;


        System.out.println(answer);

    }
}
