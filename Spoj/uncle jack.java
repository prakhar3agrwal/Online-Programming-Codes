import java.util.*;
import java.math.*;
public class ap {
public static void main(String[] argv){
    int x,i=0;
    String x1,n;
    Scanner in=new Scanner(System.in);
    BigInteger z=new BigInteger ("0");
    while(1>0)
    {
        n=in.next();
        x=in.nextInt();
        BigInteger y=new BigInteger (n);
        if(z.compareTo(y)==0 && x==0)
            break;
        y=y.pow(x);
        System.out.println(y);
        
    }
    
}
}
