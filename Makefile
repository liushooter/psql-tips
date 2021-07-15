INCDIR = ./inc/

all:
	mkdir .public
	cd inc; ./createHtmlFiles.sh
	cp html/*.html .public
	cp -r css .public
	cp -r images .public
	rm -rf public
	mv .public public

clean:
	rm -rf public
	-rm -rf .public
