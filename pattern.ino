// Ravi Prakash, ECE, SMVDU
// printing a pattern of LEDs
int P1=3;
int P2=4;
int P3=8;
int P4=10;
int P5=7;
int myarr[5]={P1,P2,P3,P4,P5};
int i,j,k;

void setup()
{ 
	Serial.begin(9600);
	for(i=1;i<=5;i++)
	{
		pinMode(myarr[i],OUTPUT);
	}
	
}
void loop()
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			digitalWrite(myarr[j],HIGH);
			delay(1000);
		}
		for(k=0;k<=i;k++)
		{
			digitalWrite(myarr[k],LOW);
			delay(1);
		}
		delay(2000);
	}
}


