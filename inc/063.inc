    <div class="tip">
	  You can use a <code>-</code> to omit a positional parameter with the <code>\c</code> or
	  <code>\connect</code> meta-command.
      <pre><code class="hljs bash">laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \c - - 127.0.0.1
You are now connected to database "laetitia" as user "laetitia" on host "127.0.0.1" at port "5432".</code></pre>This feature is available
since Postgres 9.0.
	</div>
