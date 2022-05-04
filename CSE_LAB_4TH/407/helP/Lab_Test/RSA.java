import java.security.*;
 
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
 
 class RSAExample {
    public static void main(String[] args) throws NoSuchAlgorithmException, NoSuchPaddingException, InvalidKeyException, IllegalBlockSizeException,BadPaddingException {
        KeyPairGenerator keyGen = KeyPairGenerator.getInstance("RSA");
        keyGen.initialize(2048);
        KeyPair kp = keyGen.genKeyPair();
 
        PublicKey publicKey = kp.getPublic();
        PrivateKey privateKey = kp.getPrivate();
 
        String text = "Testmessage";
        Cipher cipher = Cipher.getInstance("RSA");
        cipher.init(Cipher.ENCRYPT_MODE, publicKey);
        byte[] x = cipher.doFinal(text.getBytes());
 
        cipher.init(Cipher.DECRYPT_MODE, privateKey);
        byte[] y = cipher.doFinal(x);
        
    }
}