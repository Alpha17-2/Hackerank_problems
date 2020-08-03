/*                        Alpha_The_Coder
                       Created on : 02/08/2020                                                                                                */

import java.util.*;
public class ApandDel
{
    public static String append(int k, int l1 ,int l2)
    {
        //System.out.println(k+" "+l1+" "+l2);
        String ans="";
        int dif=l1-l2;
        if (dif>k) ans="No";  // Not enough operation to add
        else if ( (dif==k) || (k>=l2+l1) ) ans="Yes";
        else ans=((k-dif)%2==0)?"Yes":"No";
        return ans;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        int l1=s1.length(),l2=s2.length();
        int k=sc.nextInt();

        if (s1.compareTo(s2)==0) // same string
            {
                if (k%2==0)  System.out.println("Yes");
                else
                {
                    if (k < 2 * l1) System.out.println("No");
                    else System.out.println("Yes");
                }
            }
            else
            {
                int min=Math.min(l1,l2);
                int match_till=0;
                for (int i=0;i<min;i++)
                {
                    if (s1.charAt(i)!=s2.charAt(i)) break;
                    else match_till++;
                }
                k=k-(l2-match_till);
                if (k>=0) {
                    String ans = append(k, l1, match_till);
                    System.out.println(ans);
                }
                else System.out.println("No");
            }
    }
}
