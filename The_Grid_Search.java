/*                        Alpha_The_Coder
                       Created on : 03/08/2020                                                                                                */

import java.util.*;
public class The_Grid_Search
{
    public static boolean check(int row,int coloumn,int r,int c,int[][] big,int[][] small)
    {
        int row_start=0,coloumn_start=0;
        for (int i=row;i<r+row;i++,row_start++)
        {
            coloumn_start=0;
            for (int j=coloumn;j<c+coloumn;j++,coloumn_start++)
            {
                if (big[i][j]!=small[row_start][coloumn_start]) return false;
            }
        }
        return true;
    }
   public static void solve(int R, int C, int[][] big, int r, int c, int[][] small)
   {
        int current_index_i=0,current_index_j=0;
        boolean found=false;
        int first_digit=small[0][0];
        for (int i=0;i<=R-r;i++)
        {
            for (int j=0;j<=C-c;j++)
            {
                current_index_i=i;
                current_index_j=j;
               if (big[i][j]==first_digit && check(current_index_i,current_index_j,r,c,big,small))
               {
                   found=true;
                   break;
               }
            }
            if (found)
                break;
        }
        if (found) System.out.println("YES");
        else System.out.println("NO");

   }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while (t-->0)
        {
            int R=sc.nextInt();
            int C=sc.nextInt();
            int big[][]=new int[R][C];
            for (int i = 0; i < R; i++)
            {
                String temp=sc.next();
                for (int j = 0; j < C; j++)
                {
                    big[i][j]= temp.charAt(j)-'0';
                }
            }
            int r=sc.nextInt();
            int c=sc.nextInt();
            int[][] small=new int[r][c];
            for (int i = 0; i < r; i++)
            {
                 String temp=sc.next();
                for (int j = 0; j < c; j++)
                {
                    small[i][j] = temp.charAt(j)-'0';
                }
            }
                solve(R,C,big,r,c,small);
            }
        }
    }
