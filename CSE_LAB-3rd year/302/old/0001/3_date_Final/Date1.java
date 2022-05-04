import java.util.*;
import java.text.*;
import java.util.Date;

class DateExample
{
    public static void main(String[] args)
    {
        Date d=new Date();
        SimpleDateFormat sdf=new SimpleDateFormat("dd-MM-yyyy");
        String date=sdf.format(d);
        System.out.println(date);
    }
}
