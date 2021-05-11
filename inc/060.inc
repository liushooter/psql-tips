    <div class="tip">
	  in interactive mode, you can connect to a different database with the
	  metacommand <code>\c dbname</code> or <code>\connect dbname</code>
      <pre><code class="hljs bash">laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \c postgres
You are now connected to database "postgres" as user "laetitia".
postgres=#</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
