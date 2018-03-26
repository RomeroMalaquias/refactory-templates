if (CONDITION1)
	VAR = VALUE1;
else
{
#ifdef MACRO
	VAR = VALUE1;
	FUNCTION();
	if (CONDITION2)
 #endif
	//Code1
}
