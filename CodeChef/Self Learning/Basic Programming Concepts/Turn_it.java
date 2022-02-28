import java.util.*;
class Turn_it{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int t=sc.nextInt();
        while(t>0){
           
           int u=sc.nextInt();
           int v=sc.nextInt();
           int a=sc.nextInt();
           int s=sc.nextInt();
           
        if((u*u)-2*a*s<=v*v)System.out.println("Yes\n");
        else System.out.println("No\n");

            t--;
    }
    }
}