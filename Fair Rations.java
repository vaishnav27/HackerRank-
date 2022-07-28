import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {
    public static void main(String[] args){
        Scanner in= new Scanner(System.in);
        int N = in.nextInt();
        int B[]=new int[N];
        int sum=0;
        
        for(int i=0;i<N;i++){
            B[i]=in.nextInt();
            sum+=B[i];
        }
        int count=0;
        if(sum%2==1){
            System.out.println("NO");
        }else{
            for(int i=0;i<N;i++){
                if(B[i]%2!=0){
                    B[i]++;
                    B[i+1]++;
                    count+=2;
                }
            }
            System.out.println(count);
        }
        
}
}
    
