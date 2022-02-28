import java.util.*;

class Make_it_divisible{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t=sc.nextInt();
        while(t>0)
        {
            int N=sc.nextInt();
                        
            if(N==1)System.out.print(3);
            else
            {
                for(int i=1;i<=N;i++)
                  {
                   if(i==1)System.out.print(1);
                   else if(i==N)System.out.print(5);
                   else System.out.print(0);
                  }
            }
            System.out.println("");
            t--;
        } 
        sc.close();
        
}
}