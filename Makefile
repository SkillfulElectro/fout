flow: install

all:fout.c
	@echo compiling ...
	@gcc fout.c -o fout;\
                echo installing ...
	@cp fout /usr/bin/fout
	@echo 'export PATH=$PATH:/usr/bin' >> ~/.bashrc;\
                echo installed;\
                echo cleaning ...

clean: all
	@rm -f fout;\
                echo cleaned!

install: clean

uninstall:
	@echo uninstalling ... ;\
       		rm -f /usr/bin/fout;\
                echo uninstalled !
