import java.util.Scanner;

class Giftshop
{
String name;
int gifts,shop,i,j,sum=0;

Scanner ob=new Scanner(System.in);

void getdata()
{
    
    System.out.println("enter the name of student");
    name=ob.nextLine();
    
    System.out.println("enter the number of shops");
    shop=ob.nextInt();
    
    for(i=0;i<shop;i++)
    {
    System.out.println("enter no. of gifts picked form shop "+i+1);
    gifts=ob.nextInt();
    sum=sum+gifts;
    }
    
}

void showValues()
{
    
    System.out.println((j+1)+"       "+name+"               "+sum);
    j++;
	
    
}

    
    public static void main(String[] args) 
    {
       int n;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter the no. of students");
       n=sc.nextInt();
        Giftshop temp=new Giftshop();
        Giftshop [] a=new Giftshop[n];
        for(int i=0;i<n;i++)
        {
            a[i]=new Giftshop();
            a[i].getdata();
        }
  
 
        for(int i=0; i<n;i++) 
        {
         for(int j=1;j <(n-i);j++) 
         {
            if(a[j-1].sum<a[j].sum) 
            {
               temp = a[j-1];
               a[j-1] = a[j];
               a[j] = temp;
            }
         }
        }
        
        System.out.println("Sno.    Student_name    total_gifts");
        
        for(int i=0;i<n;i++)
        {
            a[i].showValues();
        }
    }
     
    
}
