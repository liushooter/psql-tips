# Purpose

This is a simple website to display random psql tips.

# How to build

The website is using only HTML, CSS and just the necessary JS to pick a random
number and display the tip matching that number.

To build the website, use `make` on the root directory.

It will create the html pages in the html directory from the inc files in the
inc directory using the bash script `createHtmlFiles.sh`.

Then all the needed html and css files will be copied into a public directory.

# How to display teh website

Once built, you simply need to open the index.html file from the oublic
directory in your favorite browser.
