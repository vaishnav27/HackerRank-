public static String getSmallestAndLargest(String s, int k) { 
  String current_substring = s.substring(0,k); 
  String smallest = current_substring; 
  String largest = current_substring;

    for(int i=1;i<=s.length()-k;i++){
       current_substring = s.substring(i,i+k);
       
       if(current_substring.compareTo(largest)>0){
           largest = current_substring;
       }
       if(current_substring.compareTo(smallest)<0){
           smallest =current_substring;
       }
        
    }
    
    return smallest + "\n" + largest;
}
