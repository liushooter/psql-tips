    <div class="tip">
      The <code>\c</code> or
      <code>\connect</code> metacommand can accept a connection URI
      instead of a dbname.<br>
      See <a href=
      "https://www.postgresql.org/docs/current/libpq-connect.html#LIBPQ-CONNSTRING">
      Postgres documentation</a> for connection URIs.
      <pre><code class=
      "hljs bash">laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \c postgresql://localhost 
You are now connected to database "laetitia" as user "laetitia" on host "localhost" (address "::1") at port "5432".</code></pre>This feature is available since Postgres
9.4.
    </div>
