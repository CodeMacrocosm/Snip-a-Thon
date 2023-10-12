import java.until.scanner ;
class AreaOfTriangle 
{
   public static void main(String args[]) 
    {   
       
      Scanner s= new Scanner(System.in);
        
         System.out.println("Enter the width of the Triangle:");
         double b= s.nextDouble();
 
         System.out.println("Enter the height of the Triangle:");
          double h= s.nextDouble();
 
                  //Area = (width*height)/2
      double area=(b*h)/2;
      System.out.println("Area of Triangle is: " + area);      
   }
}
