import java.math.BigInteger;
import java.util.*;
class Summing_the_N_series {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        BigInteger mod = BigInteger.valueOf((long) (Math.pow(10,9)+7));
        while (t-- > 0) {
            long n = sc.nextLong();
            BigInteger ans = BigInteger.valueOf(n).pow(2);
            BigInteger finalAns = ans.mod(mod);
            System.out.println(finalAns);
        }
    }
}