// notes from http://arduino.cc/en/Tutorial/tone
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

#define PAUSE -1

double const PAUSE_MULTIPLYER = 1.30;

// 1/4 = 116
int const BPM_FOR_QUOTER = 116;
int const ONE_NOTE_TIME = int(4000 / ((BPM_FOR_QUOTER / 60.0) * PAUSE_MULTIPLYER) );

int const SERIAL_SPPED = 9600;
int const PIEZO_PIN = 8;

struct Note {
	int frequence;
	double type;  
};

const Note melody[] = {
	
	{PAUSE, 4},
	{PAUSE, 8},
	{NOTE_F4, 8},  //# He's gonna take you back to the past
	{NOTE_C5, 8},
	{NOTE_C5, 8},
	{NOTE_C5, 8},
	{NOTE_C5, 8},

	{NOTE_AS4, 8},
	{NOTE_AS4, 8},
	{NOTE_C5, 8},
	{NOTE_GS4, 4},
	{PAUSE, 8},
	{PAUSE, 4},
	

	{PAUSE, 4}, 
	{PAUSE, 8},
	{NOTE_F4, 8}, //# To play the shitty games that suck ass
	{NOTE_C5, 8},
	{NOTE_C5, 8},
	{NOTE_C5, 8},
	{NOTE_C5, 8},

	{NOTE_AS4, 8},
	{NOTE_AS4, 8},
	{NOTE_C5, 8},
	{NOTE_GS4, 4},
	{NOTE_GS4, 8},
	{NOTE_C5, 16 / 3.0}, //# He'd rather have a buffallo
	{NOTE_GS4, 16},

	{NOTE_GS4, 8 / 3.0},
	{PAUSE, 4},
	{NOTE_GS4, 8},
	{NOTE_C5, 16 / 3.0},
	{NOTE_CS5, 16},		

	{NOTE_AS4, 2},
	{PAUSE, 4},
	{NOTE_C5, 8}, //# Take a diarrhea dump in his ear
	{NOTE_CS5, 8},	

	{NOTE_DS5, 8},
	{NOTE_DS5, 8},
	{NOTE_DS5, 8},
	{NOTE_DS5, 8},
	{NOTE_DS5, 8},
	{NOTE_CS5, 8},
	{NOTE_C5, 8},
	{NOTE_GS4, 2},

	{PAUSE, 4},
	{NOTE_GS4, 8},  //# He'd rather eat the rotten asshole
	{NOTE_C5, 16 / 3.0},
	{NOTE_GS4, 16},

	{NOTE_GS4, 8 / 3.0}, 
	{PAUSE, 4},
	{NOTE_GS4, 8},
	{NOTE_C5, 16 / 3.0},
	{NOTE_CS5, 16},

	// I replaced two consecutive notes by one to better sound.
	{NOTE_AS4, 2},
	//{NOTE_AS4, 8},
	//{NOTE_AS4, 8 / 3.0},
	{PAUSE, 8},
	{NOTE_AS4, 16},  //# Of a road killed skunk and down it with beer
	{NOTE_AS4, 16},
	{NOTE_C5, 8},
	{NOTE_CS5, 8},	

	{NOTE_DS5, 8},
	{PAUSE, 8},
	{NOTE_DS5, 4},
	{NOTE_DS5, 8},
	{NOTE_CS5, 8},
	{NOTE_C5, 8},
	{NOTE_GS4, 2},

	{PAUSE, 8},
	{PAUSE, 4},
	{NOTE_GS4, 8}, //# He's the angriest gamer you've ever heard
	{NOTE_AS4, 8},
	
	{NOTE_C5, 8},
	{NOTE_C5, 8},
	{NOTE_C5, 8},
	{NOTE_AS4, 8},
	{NOTE_AS4, 8},
	{NOTE_AS4, 8},
	{NOTE_C5, 32 / 3.0},
	{NOTE_GS4, 32},
	{NOTE_GS4, 2},

	{PAUSE, 8},
	{PAUSE, 4},
	{NOTE_GS4, 8}, //# He's the Angry Nintendo Nerd
	{NOTE_AS4, 8},

	{NOTE_C5, 8},
	{NOTE_C5, 4},
	{NOTE_C5, 8},
	{NOTE_AS4, 4},
	{NOTE_C5, 8},
	{NOTE_GS4, 2},

	{PAUSE, 8},
	{PAUSE, 4},
	{NOTE_GS4, 8}, //# He's the Angry Atari Sega Nerd
	{NOTE_AS4, 8},

	{NOTE_C5, 8},
	{NOTE_C5, 4},
	{NOTE_C5, 8},
	{NOTE_AS4, 8},
	{NOTE_AS4, 8},
	{NOTE_C5, 32 / 3.0},
	{NOTE_GS4, 32},
	{NOTE_GS4, 2},

	{PAUSE, 8},
	{PAUSE, 4},
	{NOTE_GS4, 8}, //# He's the Angry Video Game Nerd
	{NOTE_AS4, 8},

	{NOTE_C5, 8},
	{NOTE_C5, 8 / 3.0},
	{NOTE_AS4, 16},
	{NOTE_AS4, 16},
	{NOTE_AS4, 8},
	{NOTE_AS4, 4},
	
	{NOTE_GS4, 4 / 3.0},
	{PAUSE, 4},
	
};

// Play plain note
void playNote(struct Note note) {
	
	int noteDuration = int(ONE_NOTE_TIME / note.type);
    if (note.frequence == PAUSE) {
		noTone(PIEZO_PIN);
	} else { 
    	tone(PIEZO_PIN, note.frequence, noteDuration);
    }
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * PAUSE_MULTIPLYER;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(PIEZO_PIN);
}

// Play note as a number of small cycles
void playNote2(struct Note note) {
	
	int noteDuration = int(ONE_NOTE_TIME / note.type);
    int pauseBetweenNotes = noteDuration * (PAUSE_MULTIPLYER - 1.0);
    
    const int CYCLE_MS = 64;
    int cycleCount = noteDuration / CYCLE_MS;
    for (int i=0; i<cycleCount; i++) {
    	if (note.frequence == PAUSE) {
			noTone(PIEZO_PIN);
		} else { 
	    	tone(PIEZO_PIN, note.frequence, CYCLE_MS / 2);
	    }
	    delay(CYCLE_MS);
    }
    
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(PIEZO_PIN);
}

void setup() {
    Serial.begin(SERIAL_SPPED);
    
    int size = sizeof(melody) / sizeof(Note);
    for (int i = 0; i < size; i++) {
		playNote2(melody[i]);   
	}
}

void loop() {
}