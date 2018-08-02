
#ifdef MACRO
	VAR = VAL1;
#else
	VAR = VAL2;
#endif
while(1){
	if (COND) {
		goto NEXT;
	}
	CODE
	VAR ++;
}