//package com.arun;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new FileReader("/home/arun/Downloads/arun"));
        String s, salary[];
        int age, a = 0, b[], c[], n[];
        b = new int[6];
        c = new int[6];
        salary = new String[32561];
        n = new int[32561];
        for (int i = 0; i < 6; i++) {
            b[i] = 0;
            c[i] = 0;
        }
        String sal;
        s = br.readLine();


        while(s!=null)
        {
            StringTokenizer st= new StringTokenizer(s,", ");

//            while(st.hasMoreTokens()) {

                if(st.hasMoreTokens()){

                age = Integer.parseInt(st.nextToken());

                for (int i = 0; i < 13; i++) {
                    st.nextToken();
                }
                sal = st.nextToken();

                n[a] = age;
                salary[a] = sal;

                if (age > 60) {
                    if (sal.equals("<=50K"))
                        b[0]++;
                    else
                        c[0]++;
                } else if (age > 50) {
                    if (sal.equals("<=50K"))
                        b[1]++;
                    else
                        c[1]++;
                } else if (age > 40) {
                    if (sal.equals("<=50K"))
                        b[2]++;
                    else
                        c[2]++;
                } else if (age > 30) {
                    if (sal.equals("<=50K"))
                        b[3]++;
                    else
                        c[3]++;
                } else if (age > 20) {
                    if (sal.equals("<=50K"))
                        b[4]++;
                    else
                        c[4]++;
                } else {
                    if (sal.equals("<=50K"))
                        b[5]++;
                    else
                        c[5]++;
                }
                s = br.readLine();
                a++;

            }
        }

        System.out.println("No of People with age>60 and salary <=50K = " + b[0]);
        System.out.println("No of People with age>60 and salary >50K = " + c[0]);
        System.out.println("No of People with age>50 and salary <=50K = " + b[1]);
        System.out.println("No of People with age>50 and salary >50K = " + c[1]);
        System.out.println("No of People with age>40 and salary <=50K = " + b[2]);
        System.out.println("No of People with age>40 and salary >50K = " + c[2]);
        System.out.println("No of People with age>30 and salary <=50K = " + b[3]);
        System.out.println("No of People with age>30 and salary >50K = " + c[3]);
        System.out.println("No of People with age>20 and salary <=50K = " + b[4]);
        System.out.println("No of People with age>20 and salary >50K = " + c[4]);
        System.out.println("No of People with age<20 and salary <=50K = " + b[5]);
        System.out.println("No of People with age<20 and salary >50K = " + c[5]);



    }
}
