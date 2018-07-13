int ERROR = 0;

float spindleX = 60.0;
float maxA = 1000.0;
float spindleOffset = 90.0;
float spoutOffset = 60.0;

float stopX = 60.0;

float feedRate = 0.0;
float speedRate = 0.0;
float cycleLength = 30.0;
float cycleOffset = 10.0;

bool isFeeding = FALSE; // whether the sugar spout is feeding sugar
bool isLoading = FALSE; // whether the spindle is in loading position
bool isReferenced = FALSE; // whether the machine is referenced
bool isRunning = FALSE; //whether prgm is running

int feedPin = 0;
int speedPin = 0;
int cyclenPin = 0;
int cycoffPin = 0;
int fillingPin = 0;
int loadingPin = 0;
int referencePin = 0;
int runningPin = 0;

void reference() //references the axes
{

	isReferenced = TRUE;		
}

void write()
{

}

void calculate() //calculate the switch points on the x axis
{
	stopX = cycleLength + cycleOffset;
	if( stopX > spindleX )
	{
		ERROR = 1;
	}

}

void load()
{

}

void unload()
{

}

void feed()
{

}

void run()
{

}

void setup()
{
	
}

void loop()
{
	if( ERROR =! 0 )
	{
		; //print error
	}

	if( ERROR == 0 )
	{
		;//retrieve data
		write(feed, speed, cyclen, cycoff, feeding, loading, ref, run);//write data
		; //print stuff to screen
		if(ERROR ==0 && isReferenced == FALSE)
		{
			reference();
		}
		if(ERROR ==0 && isLoading == TRUE)
		{
			load();
		}
		if(ERROR ==0 && isLoading == FALSE)
		{
			unload();
		}
		if(ERROR ==0 && isFeeding == TRUE)
		{
			feed();
		}
		if(ERROR ==0 && isReferenced == TRUE && isLoading == FALSE && isRunning == TRUE)
		{
			run();
		}
	}	
}
