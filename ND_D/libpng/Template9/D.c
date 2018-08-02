#ifdef MACRO1
 if (COND1)
      FUNC1();
  #  ifdef MACRO2
   else if (COND2)
  FUNC2();
  #  endif
  
  #ifdef MACRO1
   if (COND1)
      FUNC1();
  #endif
#ifdef MACRO2
   if (COND1)
      FUNC2();
  #endif