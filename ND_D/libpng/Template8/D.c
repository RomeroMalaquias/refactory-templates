#if MACRO1
	VAR = VALUE;
#else
	#ifdef MACRO2
		VAR = VALUE2;
	#else
		VAR = VALUE3;
	#endif
#endif
if (VAR != NULL)
	//CODE

