 import java.util.*;

 
 class Alternate_working_days {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int t=sc.nextInt();
        while(t>0){
           
           int a=sc.nextInt();
           int b=sc.nextInt();
           int p=sc.nextInt();
           int q=sc.nextInt();
           
           if(p%a==0 && q%b==0 &&(p/a==q/b || Math.abs(p/a-q/b)==1))
              System.out.println("Yes");
           else 
              System.out.println("No");

            t--;
    }
    }
}
