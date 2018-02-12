public class test5{
	int a,b;
	final int THRESHOLD = 5;
	public void values_giv(int a,int b){
		this.a=a;
		this.b=b;
	}
	public static void main( String args[] )
    {
        int value = 15;
        assert value >= 20 : " Underweight";
        System.out.println("value is "+value);
        return 0;
        int a = 0x0005;
        int b = 0x0007;
 
        // bitwise and
        // 0101 & 0111=0101
        System.out.println("a&b = " + (a & b));
 
        // bitwise and
        // 0101 | 0111=0111
        System.out.println("a|b = " + (a | b));
 
        // bitwise xor
        // 0101 ^ 0111=0010
        System.out.println("a^b = " + (a ^ b));
 
        // bitwise and
        // ~0101=1010
        System.out.println("~a = " + ~a);
 
        // can also be combined with
        // assignment operator to provide shorthand
        // assignment
        // a=a&b
        a &= b;
        System.out.println("a= " + a);
    }

}
