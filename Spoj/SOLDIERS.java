import java.math.BigInteger;
import java.util.Scanner;
public class Main {
public static void main(String[] args){
	int t,x;
	String s;
	Scanner in=new Scanner(System.in);
    t=in.nextInt();
	BigInteger c = new BigInteger ("1");
	BigInteger d = new BigInteger ("2");
	while(t>0)
	{
		s=in.next();
		BigInteger a = new BigInteger (s);
		s=in.next();
		BigInteger b = new BigInteger (s);
        BigInteger e = new BigInteger ("0");
        BigInteger f = new BigInteger ("0");
		e=b.add(c);
		e=e.divide(d);
		e=e.multiply(a);
		f=a.add(c);
		f=f.divide(d);
		f=f.multiply(b);
		x=e.compareTo(f);
                if(x>=0)
                 System.out.println(e); 
                else
                 System.out.println(f);
		t--;
	}
}
}