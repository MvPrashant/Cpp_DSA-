//https://www.codechef.com/LP2TO301/problems/INDIPERM
import java.util.*;

class Indivisible_Permutation {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
     
        int t=sc.nextInt();
        while(t>0){
          
          int N=sc.nextInt();
          for(int i=1; i<N; i++){
             System.out.print((i+1) + " ");
          }
          System.out.println(1);
          t--;
       }
    }
    
}
