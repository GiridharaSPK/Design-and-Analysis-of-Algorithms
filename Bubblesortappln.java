//package bubblesortappln;
import java.io.*;

public class Bubblesortappln {

    public static void main(String[] args) throws Exception{
        String values[][]=new String[32561][130];
        String temp[]=new String[130];
        String line,Sal; 
        int age[]=new int[32561];
        int i=0;
        FileReader fstream = new FileReader("C:\\Users\\Student\\Desktop\\adult.data");
        BufferedReader br= new BufferedReader(fstream);
        
  
                   
            while((line=br.readLine())!= null)
                {
                    values[i]=line.split(",");
                    age[i]=Integer.parseInt(values[i][0]);               
                    Sal=values[i][values[0].length-1];
                    //System.out.println(age[i]);
                    i++;
                }
           
  
    
        for(int j=0;j<32561;j++)
        {
            for(int k=0;k<32560-j;k++)
            {
                if(age[k]>age[k+1]) { 
                    
                    for(int p=0;p<values[k].length;p++)
                    {
                        temp[p]=values[k+1][p];
                        values[k+1][p]=values[k][p];
                        values[k][p]=temp[p];
                    }
                }
            }
        }
        for(int j=0;j<32561;j++)
            System.out.println(values[j][0]);
    }
    
}


//import java.io.*;
//
//public class Bubblesortappln {
//
//    public static void main(String[] args) throws Exception{
//        // TODO code application logic here
//        String values[];
//        String line; int age,i;
//        FileReader fstream = new FileReader("C:\\Users\\Student\\Desktop\\adult.data");
//        BufferedReader br= new BufferedReader(fstream);
//        line=" ";
//       
//            while((line=br.readLine())!= null)
//                {
//                    values=line.split(",");
//                    age=Integer.parseInt(values[0]);               
//                   
//                }
//        }
//        
//}
//
//    
    

