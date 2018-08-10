#ifdef MACRO1
    VAR AUX = FUNC1();
	if (AUX != 0)
#else
	if (FUNC2() != 0)
#endif
	{
		//Code
	}