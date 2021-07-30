    <div class="tip"> You can open a file under psql using the <code>\e filename</code>.
	The file will open in the editor and after saving and exiting the editor, the content
	of the file will be copied into the query buffer.<br/>
	<br/>
	If the modifications are not saved before the editor is quitted, the query
	buffer is cleared.<br/><br/>
	If a query ends by a semi-colon, it will be immediately executed. The file
	can contain several queries.
	</code>psql</code> will play the file as a single line command meanning that anything
	right after a psql's metacoomand will be considered as an argument to the
	metacommand even though there are some line breaks.<br/><br/>
      This feature is available since at least Postgres 7.1.<br/>
     Before Postgres 14, even if you didn't save the modifications before
	 exiting, they were sent to the querry buffer (and immediately executed if
	   ended by a semi-colon).
	</div>
