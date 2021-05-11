    <div class="tip" name="13">
      The <code>-d sometext</code> or
      <code>--dbname=sometext</code> can accept a connection URI
      instead of a dbname.<br>
      See <a href=
      "https://www.postgresql.org/docs/current/libpq-connect.html#LIBPQ-CONNSTRING">
      Postgres documentation</a> for connection URIs.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -d postgresql://localhost
psql (14devel)
Type "help" for help.

laetitia=# </code></pre>This feature is available since Postgres
9.4.
    </div>
