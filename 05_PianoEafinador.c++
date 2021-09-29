resistor 10

int speaker_pin = 7;
int sol = 11;
int re = 10;
int la = 6;
int si = 5;

    int song_freqs[] = {200, 300, 450, 500};
    int song_beats[] = {4,4,4,4};
    int song_tempo = 200;

void setup() {
    pinMode(speaker_pin, OUTPUT);
    pinMode(sol, INPUT_PULLUP);
    pinMode(re, INPUT_PULLUP);
    pinMode(la, INPUT_PULLUP);
    pinMode(si, INPUT_PULLUP);
  }

  void loop() {
    int nota1 = digitalRead(sol);
    int nota2 = digitalRead(re);
    int nota3 = digitalRead(la);
    int nota4 = digitalRead(si);
    int durationA = song_beats[0] * song_tempo;
    int durationB = song_beats[1] * song_tempo;

    if(nota1 == LOW) {
      tone(speaker_pin, song_freqs[0], durationA);
      delay(durationA);
    }

    else if(nota2 == LOW) {
      tone(speaker_pin, song_freqs[1], durationB);
      delay(durationB);
    }

   else if(nota3 == LOW) {
     tone(speaker_pin, song_freqs[2], durationA);
     delay(durationA);
    }

  else if(nota4 == LOW) {
    tone(speaker_pin, song_freqs[3], durationB);
    delay(durationB);
   }

   delay(song_tempo / 10);

   delay(1000);

}

//Assista à explicação em: https://www.youtube.com/watch?v=wpQJM3zNKug&t=1s