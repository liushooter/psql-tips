    <div class="tip">
	  When already connected to <code>psql</code> you can re-connect using the
	  <code>\c</code> or <code>\connect</code> meta-command.
      <pre><code class="hljs bash">laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \c
You are now connected to database "laetitia" as user "laetitia".
laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
