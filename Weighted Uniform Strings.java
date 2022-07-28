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
public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int n = in.nextInt();
        char [] charArray = s.toCharArray();
        int count = 1;
        int previous = 0;
        Set<Integer> numList = new HashSet<Integer>();
        for(int i=0 ;i< charArray.length; i ++){
            int alphaNum = charArray[i] -'a'+1;
            if(alphaNum == previous){
                count++;
            }
            else{
                count = 1;
                previous = alphaNum;
            }
            int num = (alphaNum) * count;
            numList.add(num); 
        }
        for(int a0 = 0; a0 < n; a0++){
            int x = in.nextInt();
            if(numList.contains(x) ){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }
        }
    }
}
