
public class struct_func
{
  
  char a;
  int b;
  char c;
  short d;
  double e;
  String name;
  char f;

  // Constructor Declaration of Class
  public struct_func(char a1, int b1, char c1, short d1,double e1, String name1,char f1)
  {
    this.a = a1;
    this.b = b1;
    this.c = c1;
    this.d = d1;
    this.e=e1;
    this.name=name1;
    this.f=f1;
  }

  

  public static void main(String[] args)
  {
    Integer integerObject = new Integer("12347");
    short s = integerObject.shortValue();
    struct_func k = new struct_func('a',4711471,'c',s, 3.141592897932
,"abc",'*');
    
  }
}
