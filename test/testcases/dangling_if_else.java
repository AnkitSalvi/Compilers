
	class dangling_if_else{  
    public static void main(String args[]){
        int i = 0;  
        int[] a = new int[]{ 1,2,3};  
        if (i<=3)
        	a[i]=a[i]+1;
    	if (i>=2)
        	a[i]=a[i]-1;
    	else 
        	a[i] = 1;
    }  
}  
