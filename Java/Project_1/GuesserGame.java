package Java.Project_1;

import java.util.*;

public class GuesserGame {
    Scanner in = new Scanner(System.in);
    public int ans;

    public int guesser() {
        int guess;
        System.out.print("Hey Guesser Guess a no : ");
        guess = in.nextInt();
        return guess;
    }

    public void dispo(int w) {
        System.out.println("Game won by Player : " + w);
    }

    public void dispin(int w) {
        System.out.print("Player " + w + " Enter a no between 1 - 10 : ");
    }

    public void umpire(int a, int b, int c) {
        
        // Evaluating whether assumption by which player is right.

        if (a == ans)
            dispo(1);

        else if (b == ans)
            dispo(2);

        else if (c == ans)
            dispo(3);

        else
            System.out.println("Game lost try again!!");

    }

    public void input() {
        int a, b, c;
        System.out.println("Welcome to the Guesser Game !");
        System.out.println();
        ans = guesser();
        dispin(1);
        a = in.nextInt();
        dispin(2);
        b = in.nextInt();
        dispin(3);
        c = in.nextInt();
        umpire(a, b, c);
    }

    public static void main(String[] args) {
        GuesserGame obj = new GuesserGame();
        obj.input();
    }
}
