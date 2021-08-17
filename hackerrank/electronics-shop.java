// Electronics Shop
// https://www.hackerrank.com/challenges/electronics-shop/problem

import java.io.*;
import java.util.*;

class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int b, m, n, keyboard[], usb[];
        Scanner sc=new Scanner(System.in);
        
        b=sc.nextInt();
        n=sc.nextInt();
        m=sc.nextInt();
        
        keyboard=new int[n];
        usb=new int[m];
        
        for(int i=0; i<n; i++)
            keyboard[i]=sc.nextInt();
        for(int i=0; i<m; i++)
            usb[i]=sc.nextInt();
            
        Arrays.sort(keyboard);
        Arrays.sort(usb);
        
        if((keyboard[0]>=b && usb[0]>=b) || (keyboard[0]+usb[0]>b))
            System.out.println(-1);
        else {
            for(int i=n-1, j=m-1;;) {
                if(keyboard[i]>=b)
                    i--;
                if(usb[j]>=b)
                    j--;
                if(keyboard[i]+usb[j]<=b) {
                    System.out.println(keyboard[i]+usb[j]);
                    break;
                }
                else {
                    if(keyboard[i]<usb[j] && i>0)
                        i--;
                    else if(keyboard[i]>usb[j] && j>0)
                        j--;
                    else if(i==0)
                        j--;
                    else if(j==0)
                        i--;
                    else
                        break;
                }
            }
        }
    }
}