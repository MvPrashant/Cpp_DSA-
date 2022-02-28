// https://www.codechef.com/LP2TO301/problems/MINPIZZAS
// import java.util.*;

// class Min_No_of_Pizzas {

//   static int gcd(int a,int b){
//     if(b==0) return a;
//     return gcd(b,a%b);
//   }

//     public static void main(String[] args) {
//       Scanner sc=new Scanner(System.in);
       
//        int t=sc.nextInt();
//         while(t>0){
//          int N=sc.nextInt();
//          int K=sc.nextInt();
        
//          int g=2;
//          if(N>K){
//            gcd(N,K);
//          }
//          else if(N<K){
//            g=gcd(K,N);
//          }
//          else g=1;
//          N=N/g;
//          System.out.println(N);

//          t--;
//        }
// }
// }

//tle error 
