#ifdef MACRO1
	#define MACRO2 PARAMS1
#else
	#define MACRO2 PARAMS2
#endif
	if ((VAR = FUNCTION(PARAMS, MACRO2)) == NULL)
	{
		//Code
	}
