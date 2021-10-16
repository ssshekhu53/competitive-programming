import java.util.Scanner;
public class Main {
  static int c1 = 1;
  static int c2 = 0;
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.nextLine();
    for(int i=1; i<=n; i++) {
      String s1 = sc.nextLine();
      if((s1.charAt(0) == '#') && (s1.charAt(1)!='#')){
        System.out.println(++c2+"."+s1.substring(1,s1.length()));
        c1 = 1;
        
 
      }else {
        System.out.println(c2+"."+c1+" "+s1.substring(1,s1.length()));
        c1++; 
      }
    }
  }

}