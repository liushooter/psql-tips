    <div class="tip">
      The <code>\c</code> or
      <code>\connect</code> metacommand can accept a Keyword/Value
      connection string instead of a dbname.<br>
      See <a href=
      "https://www.postgresql.org/docs/current/libpq-connect.html#LIBPQ-CONNSTRING">
      Postgres documentation</a> for Keyword/Value connection
      strings.
      <pre><code class=
      "hljs bash">laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \c "host=localhost port=5432"
You are now connected to database "laetitia" as user "laetitia" on host "localhost" (address "::1") at port "5432".</code></pre>This feature is available since Postgres
8.3.
    </div>
