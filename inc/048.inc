    <div class="tip">
	  The <code>psql</code> prompt can remind you that you are or not inside a transaction.
	  It is the default behaviour for Postgres 14. For lower versions of
	  Postgres, you can have the exact same feature by setting the <code>PROMPT1</code>
	  variable with this command: <code>\set PROMPT1 '%~%x%# '</code>. This command can be
	  added to a .psqlrc in your home directory to be played automatically when
	  <code>psql</code> starts.
      <pre><code class="hljs bash">laetitia=# begin;
BEGIN
laetitia=*#
laetitia=*# rollback;
ROLLBACK
laetitia=#</code></pre>This feature is available
since Postgres 7.4.
	</div>
