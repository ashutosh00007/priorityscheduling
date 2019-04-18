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
