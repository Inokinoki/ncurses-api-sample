CC=gcc
CFLAGS=-W
LDFLAGS=-lncurses -lpanel
EXEC=sample_color sample_input sample_mouse sample_output sample sample_init_mode sample_keyboard sample_multiple_win sample_screen sample_panel

all: $(EXEC)

%: %.c
	$(CC) -o $@ $< $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(EXEC)

# $@ 	Le nom de la cible
# $< 	Le nom de la première dépendance
# $^ 	La liste des dépendances
# $? 	La liste des dépendances plus récentes que la cible
# $* 	Le nom du fichier sans suffixe
