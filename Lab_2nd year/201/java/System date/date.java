import java.util.Calendar;
import java.text.SimpleDateFormat;

public class date
{
 public static String now(String dat)	
 {
	Calendar c=Calendar.getInstance();
	SimpleDateFormat sdf=new SimpleDateFormat(dat);
	return sdf.format(c.getTime());
 }
    public static void main (String[] args) 
   {

	
   System.out.println(date.now("dd MMMMM yyyy"));
   System.out.println(date.now("EEE- dd/MM/yyyy hh:mm:ss aa "));
   }
    
}