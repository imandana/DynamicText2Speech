sinsy -m ../depedency/SoundBank/hts_voice_nitech_jp_song070_f001-0.90/nitech_jp_song070_f001.htsvoice -o output.wav -x ../depedency/SoundBank/japan_dic song070_f00001_063.xml

echo Playing....

powershell -c (New-Object Media.SoundPlayer "output.wav").PlaySync();
