/*                                         Alpha_the_Coder                  */
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    // Complete the makingAnagrams function below.
    static int makingAnagrams(String s1, String s2)
    {
        int freq1[]=new int[26];
        int freq2[]=new int[26];
        for(int i=0;i<26;i++)
        {
            freq1[i]=0;
            freq2[i]=0;
        }
        for(int i=0;i<s1.length();i++)
        {
            char ch=s1.charAt(i);
            freq1[ch-'a']++;
        }
        for(int i=0;i<s2.length();i++)
        {
            char ch=s2.charAt(i);
            freq2[ch-'a']++;
        }

        int result=0;
        for(int i=0;i<26;i++)
        result+=Math.abs(freq1[i]-freq2[i]);
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s1 = scanner.nextLine();

        String s2 = scanner.nextLine();

        int result = makingAnagrams(s1, s2);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
