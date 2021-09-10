# How to generate an asciinema file?
## Prerequisites
- you need to have `asciinema` installed
- you need to have `asciinema` authentication configure using `asciinema auth`

## Recording
- Launch the recording with `asciinema rec <filename>`
- Do your manipulations
- Stop the recording with `exit`

## Edit the recording
You'll probably need to edit the recording to remove some lines and then adjust
the timing accordingly.

## Upload the record
You can upload the record using `asciinema rec <filename>`

## Embed the record
Go to the asciicast page, click on the "share" button to get the embedded code.
Remember to add those 2 options:

- data-size="big"
- data-rows="10"
