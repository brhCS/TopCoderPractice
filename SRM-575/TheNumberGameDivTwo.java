import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class TheNumberGameDivTwo
{
  public String find(int n)
	{
		boolean[] a = new boolean[n+1];
		
		for(int i=1; i<=n; i++) {
			a[i] = false;
			for(int j=2; j<=i/2; j++) {
				if(i%j == 0 && !a[i-j]) {
					a[i] = true;
					break;
				}
			}
		}
		
		ruturn a[n] ? "John" : "Brus";
	}
}
