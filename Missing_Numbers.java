import java.util.*;
class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        //t = sc.nextInt();
        while (t-- > 0) {
            int n= sc.nextInt();
            int[] a=new int[n];
            TreeMap<Integer,Integer> map1 = new TreeMap<>();
            for (int i = 0; i < n; i++) {
                int val = sc.nextInt();
                map1.put(val,map1.getOrDefault(val,0)+1);
            }
            int m= sc.nextInt();
            TreeMap<Integer,Integer> map2 = new TreeMap<>();
            for (int i = 0; i < m; i++) {
                int val= sc.nextInt();;
                map2.put(val,map2.getOrDefault(val,0)+1);
            }
            for (int val:map2.keySet()){
                if (map1.containsKey(val)){
                    int freqInMap1 = map1.get(val);
                    int freqInMap2 = map2.get(val);
                    if (freqInMap2>freqInMap1)
                        System.out.print(val+" ");
                }
                else
                        System.out.print(val+" ");
            }
        }
    }
}
