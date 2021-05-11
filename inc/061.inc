    <div class="tip">
	  In interactive mode, you can connect to another database, host, port or
	  with another user by using the following metacommand <code>\c dbname username
	  host port</code>.
      <pre><code class="hljs bash">laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \c laetitia laetitia localhost 5432
You are now connected to database "laetitia" as user "laetitia" on host "localhost" (address "::1") at port "5432".
laetitia=#</code></pre>This feature is available
since at Postgres 7.1 for <code>\c dbname username</code> and since Postgres 8.2 for <code>\c dbname username host port</code>.
	</div>
