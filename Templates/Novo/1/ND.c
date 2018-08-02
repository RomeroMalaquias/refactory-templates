if (CONDITION)
	    {
		...
	    }
#ifdef FEAT_CLIENTSERVER
    else if (!CONDITION2)
#else
    else	    
#endif		
		return 0;
CODE1;