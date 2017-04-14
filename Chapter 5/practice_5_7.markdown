## 练习5.7
### 改正下列代码段中的错误
    
	if (ival != ival2)
		ival1 = ival2
	else ival1 = ival2 = 0;

    if (ival < minval)
		minval = ival;
		occurs = 1;

	if (int ival = get_value())
		cout << "ival = " << ival << endl;
	if (!ival)
		cout << "ival = 0 \n";

    if(ival = 0)
        ival = get_value();
***
    
	if (ival != ival2)
		ival1 = ival2;
	else ival1 = ival2 = 0;

    if (ival < minval)
	{
		minval = ival;
		occurs = 1;
	}

    int ival;
    if (ival = get_value())
		cout << "ival = " << ival << endl;
	if (!ival)
		cout << "ival = 0 \n";

    if(ival == 0)
        ival = get_value();