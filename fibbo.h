#ifndef _DLL_H_
//#if fibbo_numbers
#define _DLL_H_
 
int a;
int b;


 int fibbo_numbers( int l);

 int fibbo_numbers( int l)//function definition
{



 static	int current =1; 
 static	int prev=0;
 
	//#endif
 	 for(a=0;a<=l;a++)
 	 {
 	 	b=current;
 		current=prev+current;
 	 	prev=b;
 	    return current;
	  }
	
}

#endif
