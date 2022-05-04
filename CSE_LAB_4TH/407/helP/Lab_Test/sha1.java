import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.math.BigInteger;


/** Example hash function values.*/
class HashExamples {
  
  public static void main(String... aArgs) {
    try {
      MessageDigest sha = MessageDigest.getInstance("SHA-1");
      byte[] hashOne = sha.digest("color".getBytes());
      
      
      log("Hash of 'color':  " + hexEncode(hashOne));
        
      sha.reset();
      byte[]  hashTwo = sha.digest("colour".getBytes());
      log("Hash of 'colour': " + hexEncode(hashTwo));
    }
    catch (NoSuchAlgorithmException ex){
      log("No such algorithm found in JRE.");
    }
  }
  
  private static void log(Object aObject) {
    System.out.println(String.valueOf(aObject));
  }

  /**
  * The byte[] returned by MessageDigest does not have a nice
  * textual representation, so some form of encoding is usually performed.
  *
  * This implementation follows the example of David Flanagan's book
  * "Java In A Nutshell", and converts a byte array into a String
  * of hex characters.
  */
  static private String hexEncode( byte[] aInput)
  	{
    StringBuffer result = new StringBuffer();
    char[] digits = {'0', '1', '2', '3', '4','5','6','7','8','9','a','b','c','d','e','f'};
    for (int idx = 0; idx < aInput.length; ++idx) {
      byte b = aInput[idx];
      result.append( digits[ (b&0xf0) >> 4 ] );
      result.append( digits[ b&0x0f] );
    }
    return result.toString();
  }
  
    
}