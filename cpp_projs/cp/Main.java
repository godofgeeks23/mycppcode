import java.util.*;
class overload
{
 void series(int x,int n)
 {
   int  loop,s=0;
   for(loop=0;loop<n;loop++)
   {
     s=(int)(s+Math.pow(x,n));
   }
   System.out.println("THE SUM OF THE SERIES= "+ s);
 }
 void series(int p)
 {
 int loop,term=1,d;
 for(loop=0;loop<p;loop++)
 {
   d=(int)(Math.pow(term,3)-1);
   System.out.print(d + " ");
   term++;
 }
}
 void series()
 {
   int loop;
   double s=0.0;
   for(loop=2;loop<=10;loop++)
   {
     s=s+1.0/loop;
   }
   System.out.println("THE SUM OF THE SERIES= " + s);
 }
 public static void Main(String args[])
 {
   int X,N,P;
   overload obj= new overload();
   Scanner sc=new Scanner(System.in);
   System.out.println("ENTER THE VALUE OF x ");
   X= sc.nextInt();
   System.out.println("ENTER THE VALUE OF n");
   N=sc.nextInt();
   System.out.println("ENTER THE VALUE OF p");
   P= sc.nextInt();
   obj.series(X,N);
   obj.series(P);
   obj.series();
 }
}