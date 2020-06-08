#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>
#define DO 0
#define DOh 1
#define RE 2
#define REh 3
#define MI 4
#define FA 5
#define FAh 6
#define SOL 7
#define SOLh 8
#define LA 9
#define LAh 10
#define SI 11

int x=25, y=13;
void superMusic();
void typewrite(char *sentence);
float notes[12] = {32.703,34.648,36.708,38.891,41.203,43.654,46.249,48.999,51.913,55.0,58.27,61.735};
float **matOfNotes; //the matrix of frequencies

void Space(){
for (int b=0;b<45;b++)printf(" ");
}

void Jump(){
    printf("\n");
}

void Frequency(){ //this function generates a matrix of frequencies of a note
matOfNotes = (float**)malloc(12*sizeof(float*));
for (int note=0;note<12;note++){
  matOfNotes[note] = (float*)malloc(10*sizeof(float));
}
  for (int note=0;note<12;note++){
    for (int octave=0;octave<10;octave++)
        matOfNotes[note][octave]= notes[note]*pow(2,octave);
    }
}

void printMatrix(float **Mat){
for(int i = 0; i < 12;i++){
    printf("|");
    for(int j = 0; j < 10; j++){
      printf(" %.3f | ",Mat[i][j]);
  }
  Jump();
  }
}

void Heart(){

int i,j;
		char **heartMatrix=(char**)malloc(y*sizeof(char*));
	for (i=0;i<y;i++)
	{
		heartMatrix[i]=(char*)calloc(x,sizeof(char));
	}

 	char c = '*';
	heartMatrix[0][4]=c;heartMatrix[1][2]=c;heartMatrix[2][1]=c;heartMatrix[3][0]=c;				heartMatrix[6][2]=c;heartMatrix[9][8]=c;
	heartMatrix[0][5]=c;heartMatrix[1][7]=c;heartMatrix[2][9]=c;heartMatrix[3][11]=c;heartMatrix[4][0]=c;		heartMatrix[7][4]=c;heartMatrix[10][10]=c;
			  heartMatrix[1][8]=c;heartMatrix[2][10]=c;heartMatrix[3][12]=c;heartMatrix[5][1]=c;	heartMatrix[8][6]=c;heartMatrix[11][11]=c;



	for (i=0;i<y-1;i++){
		for(j=0;j<x/2;j++)
			heartMatrix[i][x-1-j]=heartMatrix[i][j];
	}

	for (i=0;i<8;i++) Jump();
		for (i=0;i<y;i++)
		{
			Space();
			for (j=0;j<x;j++)
			{
			    printf("%c",heartMatrix[i][j]);
			}
			Jump();
		}
		Jump();Space();
		typewrite("   N O S T A L G I A"); Sleep(1000);
		Jump();Space();
		typewrite("             L O V E"); Sleep(1000);
		Jump(); Space();
		typewrite("             D E T E R M I N A T I O N");Sleep(1000);
        Jump();
}

void PlayNote(int note,int octave,int duration){
  Frequency();
  Beep(matOfNotes[note][octave],duration);
}

void typewrite(char *sentence)
{
	int i=0;
	while (sentence[i] != '\0')
	{
		printf("%c",sentence[i]);
		i++;
		usleep(50*1000);
		if(sentence[i] != ' ') PlayNote(DO,5,80);
	}
	//Space();
	usleep(1000*1000);
}

void MiiChannel(){

    PlayNote(FAh,3,200);
    Sleep(200);
    PlayNote(LA,3,200);
    PlayNote(DOh,4,200);
    Sleep(200);
    PlayNote(LA,3,200);
    Sleep(200);
    PlayNote(FAh,3,200);
    PlayNote(RE,3,200);
    PlayNote(RE,3,200);
    PlayNote(RE,3,200);
    Sleep(900);

    PlayNote(DOh,3,200);
    PlayNote(RE,3,200);
    PlayNote(FAh,3,200);
    PlayNote(LA,3,200);
    PlayNote(DOh,4,200);
    Sleep(200);
    PlayNote(LA,3,200);
    Sleep(200);
    PlayNote(FAh,3,200);

    PlayNote(MI,4,700);
    PlayNote(REh,4,200);
    PlayNote(RE,4,200);

    Sleep(700);

    PlayNote(SOLh,3,200);
    Sleep(200);
    PlayNote(DOh,4,200);
    PlayNote(FAh,3,200);
    Sleep(200);
    PlayNote(DOh,4,200);


    Sleep(200);
    PlayNote(SOLh,3,200);
    Sleep(200);
    PlayNote(DOh,4,200);
    Sleep(200);
    PlayNote(SOL,3,200);
    PlayNote(FAh,3,200);
    Sleep(200);
    PlayNote(FA,3,200);
    Sleep(300);
    PlayNote(DO,3,200);
    PlayNote(DO,3,200);
    PlayNote(DO,3,200);
}


void MARIOIntro(){
PlayNote(MI,5,150);
PlayNote(MI,5,150);
Sleep(150);
PlayNote(MI,5,150);
Sleep(150);
PlayNote(DO,5,150);
PlayNote(MI,5,150);
Sleep(150);
PlayNote(SOL,5,150);
Sleep(400);
PlayNote(SOL,4,350);
Sleep(500);}

void MARIO(){
Sleep(500);
for(int i=0;i<2;i++)
{
PlayNote(MI,5,200);
Sleep(250);
PlayNote(SOL,4,200);
Sleep(250);
PlayNote(MI,4,200);
Sleep(250);
PlayNote(LA,4,200);
Sleep(200);
PlayNote(SI,4,200);
Sleep(100);
PlayNote(LAh,4,200);
PlayNote(LA,4,200);
Sleep(200);
PlayNote(SOL,4,250);
PlayNote(MI,5,250);
PlayNote(SOL,5,250);
PlayNote(LA,5,200);
Sleep(180);
PlayNote(FA,5,200);
PlayNote(SOL,5,200);
Sleep(180);
PlayNote(MI,5,200);
Sleep(200);
PlayNote(DO,5,180);
PlayNote(RE,5,180);
PlayNote(SI,4,180);
Sleep(300);
}
for (int i=0;i<2;i++){
PlayNote(SOL,5,180);
PlayNote(FAh,5,180);
PlayNote(FA,5,180);
Sleep(100);
PlayNote(REh,5,180);
Sleep(300);
PlayNote(MI,5,180);
Sleep(180);
PlayNote(SOLh,4,200);
PlayNote(LAh,4,200);
PlayNote(DO,5,200);
Sleep(250);
PlayNote(SOL,4,200);
PlayNote(DO,5,200);
PlayNote(RE,5,200);
    if (!i){
Sleep(200);
PlayNote(SOL,5,180);
PlayNote(FAh,5,180);
PlayNote(FA,5,180);
Sleep(100);
PlayNote(REh,5,180);
Sleep(300);
PlayNote(MI,5,180);
Sleep(100);
PlayNote(DO,6,180);
Sleep(200);
PlayNote(DO,6,180);
PlayNote(DO,6,180);
Sleep(500);
    }
    else {
        Sleep(300);
        PlayNote(REh,5,180);
        Sleep(300);
        PlayNote(RE,5,180);
        Sleep(300);
        PlayNote(DO,5,180);

    }
}
}

void Surprise(){
    Space(); typewrite("     Hey you..."); Sleep(1500);Jump();
    Space(); typewrite("I hope you can listen to this annoying sound."); Sleep(3000);
    Heart(); Sleep(3500);
    MARIOIntro(); Sleep(1000);
    Space();typewrite("Oh..."); Sleep(3000);
    typewrite("wait ?"); Sleep(3000);Jump();
    Space();typewrite("This music sounds familiar...");Sleep(2000); Jump();
    Space(); typewrite(".  .  ."); Jump();
    Space();Space(); typewrite("   YAHOO!"); Sleep(1500); Jump();
    MARIO();
    Sleep(4000);
    Space();typewrite("Before you go..."); Sleep(3000); Jump();
    Space();typewrite("You have to wait for him..."); Sleep(3000); Jump();
    Space(); typewrite("...Would you? "); Sleep(1000);Jump();
    Space(); puts("Press on any key. uwu"); Jump();
    Space();getchar(); Sleep(800);
    Space();typewrite("HE'S HERE !"); Sleep(3000); Jump();
    superMusic();
}

void superMusic(){
PlayNote(RE,4,200);
PlayNote(RE,4,250);
Sleep(90);
PlayNote(RE,5,200);
Sleep(100);
PlayNote(LA,4,300);
PlayNote(SOLh,4,350);
PlayNote(SOL,4,250);
PlayNote(FA,4,400); Sleep(100);
PlayNote(RE,4,100);
PlayNote(FA,4,80);
PlayNote(SOL,4,95); Sleep(120);
PlayNote(DO,4,150);PlayNote(DO,4,150); Sleep(150);
PlayNote(RE,5,100);PlayNote(LA,4,250);
PlayNote(SOLh,4,350);PlayNote(SOL,4,250);
PlayNote(FA,4,400); Sleep(100);
PlayNote(RE,4,100);PlayNote(FA,4,110);
PlayNote(SOL,4,120);PlayNote(SI,3,150);
PlayNote(SI,3,130);PlayNote(RE,5,80);
PlayNote(LA,4,150); PlayNote(SOLh,4,160); Sleep(200);
PlayNote(SOL,4,130); PlayNote(FA,4,400);
PlayNote(RE,4,100);PlayNote(FA,4,80);
PlayNote(SOL,4,90);
PlayNote(LAh,3,300);PlayNote(LAh,3,350);
Sleep(50);
PlayNote(RE,5,100); PlayNote(LA,4,200);
PlayNote(SOLh,4,150);PlayNote(SOL,4,350); Sleep(60);
PlayNote(FA,4,400);PlayNote(RE,4,500);
Sleep(1000);
Space();typewrite("Sans loves you.");Jump(); Sleep(1000);
Space(); typewrite("You have been blessed by Sans.");Jump();
Space(); typewrite("And by me... Ahlem."); Jump();
}
