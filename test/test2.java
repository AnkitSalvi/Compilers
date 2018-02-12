import java.util.Scanner;

public class test2 {

    public static void main(String[] args) {

        double[] values = { 0.1, .2, 5.3, 6.3, 83.3 };

        for(int i=0; i < values.length; i=i+1) {
            System.out.printf("%.2f ", values[i]);
        }

        int j=0;
        while(j > 0){
        	j+= 2;
        	if(j==20){
        		break;
        	}
        	else{
        		j-=1;
        	}
        }

        System.out.println("I '\"\"am" + 19 + "years old\"");

        float a = 33.3;
        float b = 43.6;
        float c = a + b;

        boolean p;

        p = (1||0) && (1||1);

        if (!p){
        	float d = a - b;
        }





    }

} 
