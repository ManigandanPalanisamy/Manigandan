import java.io.*;
import java.util.*;
class arrayval{
public static void main(String [] args){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int f=0;
if(n>2){
int a[]=new int[n];
for(int i=0;i<n;i++){
a[i]=sc.nextInt();
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]>a[j]){
int t=a[j];
a[j]=a[i];
a[i]=t;
  }
 }
if(a[i]==i){
f=1;
System.out.println(i);}
}
if(f==0){System.out.println("no values found");}
}
}
}