import java.util.Scanner;

class Giftshop
{
String name;
int gifts,shop,i,sum=0,burst,arival;

Scanner ob=new Scanner(System.in);

void getdata(int arival)
{
    this.arival=arival;
    System.out.println("enter the name of student");
    name=ob.nextLine();
    
    System.out.println("enter the number of shops");
    shop=ob.nextInt();
    
    for(i=0;i<shop;i++)
    {
    System.out.println("enter no. of gifts picked form shop "+(i+1));
    gifts=ob.nextInt();
    sum=sum+gifts;
    burst=sum*5;
    }
    
}

void showValues()
{
    
    System.out.println("           "+name+"               "+sum+"               "+arival+"             "+burst);
  
	
    
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
            int ar=i+1;
            a[i]=new Giftshop();
            a[i].getdata(ar);
        }
  
 
        for(int i=0; i<n;i++) 
        {
         for(int j=1;j <(n-i);j++) 
         {
            if(a[j-1].burst<a[j].burst) 
            {
               temp = a[j-1];
               a[j-1] = a[j];
               a[j] = temp;
            }
         }
        }
        
        System.out.println("Sno.    Student_name    Total_gifts    Arival_Time    Burst_Time(in s)");
        
        for(int i=0;i<n;i++)
        {
            System.out.print(i+1);
            a[i].showValues();
        }
    }
     
    
}
