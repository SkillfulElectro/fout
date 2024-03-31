flow: install

all:fout.c
	@echo compiling ...
	@gcc fout.c -o fout;\
                echo installing ...
	@cp fout $HOME/fout
	@echo 'export PATH=$PATH:$HOME' >> ~/.bashrc;\
                echo installed;\
                echo cleaning ...

clean: all
	@rm -f fout;\
                echo cleaned!

install: clean

uninstall:
	@echo uninstalling ... ;\
       		rm -f $HOME/fout;\
                echo uninstalled !
