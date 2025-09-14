public class TilingProblem {

    public static int countWays(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return countWays(n - 1) + countWays(n - 2);
    }

    public static void main(String[] args) {
        int n = 4; // Example: 4x1 tiles
        System.out.println("Number of ways to tile " + n + "x1 wall: " + countWays(n));
    }
    
}
