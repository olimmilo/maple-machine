int ERROR = 0;

float bedLen = 12.0;
float maxSpeed = 100.0;

float stopX = 12.0;

float feedRate = 0.0;
float speedRate = 0.0;
float bedOffset = 2.0;

bool isReferenced = FALSE; // whether the machine is referenced
bool isRunning = FALSE; //whether prgm is running

int FeedPotPin = 0;
int SpeedPotPin = 0;
int CycOffUpBtnPin = 0;
int CycOffDownBtnPin = 0;
int RefBtnPin = 0;
int RunBtnPin = 0;

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
		if(ERROR ==0 && isReferenced == TRUE && isLoading == FALSE && isRunning == TRUE)
		{
			run();
		}
	}	
}
