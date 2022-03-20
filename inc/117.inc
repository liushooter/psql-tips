    <div class="tip">You can use the metacommand <code>\e filename linenumber</code> to
	open a file and position the cursor directly on the specified
	line.<br/><br/>
	If the filename is omitted, psql will open the current querry buffer (if
	  empty the last executed query will be copied into the current querry
	  buffer) and position the cursor on the specified line number. It means
	  that if a single all-digits argument is given, psql will assume it's
	  a line number.<br/><br/>
    If the line number specified is higher than the number of lines in the
	querry buffer or in the file, the cursor will be positionned on the last
	line.<br/><br/>
      This feature is available since Postgres 9.1.
	</div>
