Taum and B'day

import java.io.*;
import java.util.*;

public class Solution 
{
    private static long cost( long B,long W,long X,long Y,long Z )
    {
        long cost = 0;
        
        if( X < Y )
        {
            cost = cost + ( B * X );
            if( Y < Z + X )
            {
                cost = cost + ( W * Y );
            }
            else
            {
                cost = cost + ( W * ( Z + X ) );
            }
        }
        else
        {
            cost = cost + ( W * Y );
            if( X < Z + Y )
            {
                cost = cost + ( B * X );
            }
            else
            {
                cost = cost + ( B * ( Z + Y ) );
            }   
        }
        return cost;
    }

    public static void main(String[] args) 
    {
        Scanner scan = new Scanner( System.in );
        int testCases = scan.nextInt();
        
        for( int i = 0;i < testCases;i++ )
        {
            System.out.println( cost( scan.nextLong(),scan.nextLong(),scan.nextLong(),scan.nextLong(),scan.nextLong() ) );
        }
    }
}
