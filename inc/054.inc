    <div class="tip">
	  The <code>psql</code> prompt can display the database name
	  with the <code>%~</code> value or the <code>%/</code> value. If you're connected to the default
	  database and you used the <code>%~</code> value in the prompt, it will display <code>~</code>
	  when you're connected to the default database.
      <pre><code class="hljs bash">laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \set PROMPT1 '%~ '
~ \set PROMPT1 '%/ '
laetitia </code></pre>This feature is available
since at least Postgres 7.1.
	</div>
