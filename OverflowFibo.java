package overflowfibo;
import java.util.*;
public class OverflowFibo {
    
    //TODO: Programa creado por Camilo Pulido
    //      Para usar, descomentar cada sección de código que sea de interés        

public static void main(String[] args) {

//SHORT
/*
        short a = 1,b = 2,n = 0;
        while (b>0) {
            b += a;
            a = (short)(b - a);
            n++;
        }
        System.out.println("Para short hay overflow en n  "+n);            
*/

//INT   
/*
        int a = 1,b = 2,n = 0;
        while (b>0) {
            b += a;
            a = (b - a);
            n++;
        }
        System.out.println("Para int hay overflow en n  "+n);
*/
//LONG
/*
        long a = 1,b = 2,n = 0;
        while (b>0) {
            b += a;
            a = (b - a);
            n++;
        }
        System.out.println("Para long hay overflow en n  "+n);
*/

//BYTE
/*
        byte a = 1,b = 2,n = 0;
        while (b>0) {
            b += a;
            a = (byte)(b - a);
            n++;
        }
        System.out.println("Para byte hay overflow en n  "+n);
*/
    }
    
}
