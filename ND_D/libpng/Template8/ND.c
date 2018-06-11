#if MACRO1
   if ((VAR = VALUE1) != NULL)

#else
	#ifdef MACRO2
		if ((VAR = VALUE2) != NULL)
  	#else
		if ((VAR = VALUE3) != NULL)
  	#endif
#endif
{
	//CODE
}
