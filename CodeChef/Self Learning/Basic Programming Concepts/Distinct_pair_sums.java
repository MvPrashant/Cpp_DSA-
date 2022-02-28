import java.util.*;

class DistinctPairSums{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
      
        int t=sc.nextInt();
        while(t>0){
            int L=sc.nextInt();
            int R=sc.nextInt();
            System.out.println((2*R-2*L)+1);
            t--;
        }
        sc.close();
    }
}