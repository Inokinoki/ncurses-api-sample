CC=gcc
CFLAGS=-W
LDFLAGS=-lncurses
EXEC=sample_color sample_input sample_mouse sample_output sample sample_init_mode sample_keyboard sample_multiple_win sample_screen

all: $(EXEC)

sample_color: sample_color.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample_input: sample_input.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample_mouse: sample_mouse.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample_output: sample_output.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample: sample.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample_init_mode: sample_init_mode.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample_keyboard: sample_keyboard.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample_multiple_win: sample_multiple_win.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

sample_screen: sample_screen.c
	$(CC) -o $@ $< $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(EXEC)

# $@ 	Le nom de la cible
# $< 	Le nom de la première dépendance
# $^ 	La liste des dépendances
# $? 	La liste des dépendances plus récentes que la cible
# $* 	Le nom du fichier sans suffixe
