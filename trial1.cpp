#ifndef _DLL_H_
//#if fibbo_numbers
#define _DLL_H_
//static 
int a;
//static
 int b,c;


 int fibbo_numbers( int l);

 int fibbo_numbers( int l)
{


 //#ifndef A
 //#define A
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