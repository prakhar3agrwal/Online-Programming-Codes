import java.util.*;
import java.math.*;
public class ap {
public static void main(String[] argv){
    int x,n,t;
    Scanner in=new Scanner(System.in);
    BigInteger z=new BigInteger ("2");
    BigInteger z1=new BigInteger ("0");

    t=in.nextInt();
    while(t>0)
    {
        n=in.nextInt();
        x=in.nextInt();
        if(n==x)
        System.out.println("0.00");
        else{
        BigInteger x1=new BigInteger("1");
        BigInteger y=new BigInteger("1");
        x1=z.pow(n+1);
        x1=x1.subtract(z);
        y=z.pow(x+1);
        y=y.subtract(z);
        y=x1.subtract(y);
        System.out.println(y+".00");}
        t--;
        
    }
    
}
}
