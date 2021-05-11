    <div class="tip">
	  Use the <code>\conninfo</code> metacommand to display information about the current
	  database connection.
      <pre><code class="hljs bash">laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".</code></pre>This feature is available
since Postgres 9.5.
	</div>
